#include "mainwindowtabbed.h"
#include "ui_mainwindowtabbed.h"
#include <QListWidgetItem>
#include <QMessageBox>
#include <QDate>
#include "dayview.h"
#include "QDesktopWidget"
#include "QDebug"
#include "event.h"
#include "daycalendar.h"
#include "thedb.h"


mainWindowTabbed::mainWindowTabbed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainWindowTabbed)
{
    ui->setupUi(this);
    centerAndResize(0.9, 0.9);
    ui->DateStart_Box->setDate( QDate::currentDate() );
    ui->DateEnd_Box->setDate( QDate::currentDate() );

    RefreshUpcomingEventList(30);
}

mainWindowTabbed::~mainWindowTabbed()
{
    delete ui;
}

///Used to resize the window depending on the screen size

void mainWindowTabbed::centerAndResize(double width_perc, double height_perc)
{
    QSize availableSize = qApp->desktop()->availableGeometry().size();
    int width = availableSize.width();
    int height = availableSize.height();
    qDebug() << "Available dimensions " << width << "x" << height;
    width *=width_perc; //90% of screen size
    height *=height_perc;
    qDebug() << "Computed dimesions " << width << "x" << height;
    QSize newSize( width, height);

    setGeometry(QStyle::alignedRect(Qt::LeftToRight,
                                    Qt::AlignCenter,
                                    newSize,
                                    qApp->desktop()->availableGeometry()));
}

void mainWindowTabbed::on_calendarWidget_clicked(const QDate &date)
{
//    DayView _dayView; // makes the instance
//    _dayView.setModal(true);
//    _dayView.exec();
}

void mainWindowTabbed::on_AddEvent_AcceptDeclineButton_accepted()
{
    //Once Event OK is given, check constraints of data (will do later), for now assumes data that can be put into database


    Event newEvent = Event();

    newEvent.setName( ui->Title_Box->toPlainText() );
    newEvent.setLocation( ui->Lcation_Box->toPlainText() );
    newEvent.setStreet( ui->Street_Box ->toPlainText() );
    newEvent.setCity( ui->City_Box->toPlainText() );
    newEvent.setZipCode(( ui->Zip_Box->toPlainText()) );
    newEvent.setNote( ui->Note_Box ->toPlainText() );
    newEvent.setCategory( ui->Category_Box->currentText() );
    newEvent.setStartDate( ui->DateStart_Box->date() );



    //adding event to daycalendar object map
    //if there is an Event with the same date and time, show message box to ask user if they want to replace it with new event
    QMessageBox::StandardButton reply;
    if(!userEvents.AddEvent(newEvent))
    {
        reply = QMessageBox::question(this, "Same Date Collision", "Event with same Date and Time found! Replace?",
                                   QMessageBox::Yes|QMessageBox::No);
        if(reply == QMessageBox::Yes)
            userEvents.ReplaceEvent(newEvent);
        else return;
    }
    RefreshUpcomingEventList(30);
}

// for Todo list
void mainWindowTabbed::on_SelectTodoListTab_tabBarClicked(int index)
{


}

void mainWindowTabbed::on_pushButton_pressed()
{
    RefreshUpcomingEventList(30);
}

void mainWindowTabbed::RefreshUpcomingEventList(int days)
{
   int k = 0;
   ui->UpcomingEventsTable->clear();
   qDebug() << "button clicked";
   vector<Event> events = userEvents.GetUpcomingEvents(30, QDate::currentDate());

   qDebug() << "got dates";
   for(int i = 0; i < events.size(); i++)
   {
       k = 0;
       QTableWidgetItem *name =new QTableWidgetItem (events[i].getName()),
               *category = new QTableWidgetItem(events[i].getCategory()),
               *startDate = new QTableWidgetItem(events[i].getStartDate().toString()),
               *startTime = new QTableWidgetItem(events[i].getTimeStart().toString());
       ui->UpcomingEventsTable->insertRow(i);
       ui->UpcomingEventsTable->setItem(i, k++, name);
       ui->UpcomingEventsTable->setItem(i, k++, category);
       ui->UpcomingEventsTable->setItem(i, k++, startDate);
       ui->UpcomingEventsTable->setItem(i, k++, startTime);
   }
   ui->UpcomingEventsTable->setHorizontalHeaderLabels(QStringList() << "Title" << "Category" << "Start Date" << "End Date");
   ui->UpcomingEventsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

void mainWindowTabbed::on_AddEvent_SaveThisLocationButton_clicked()
{
    QString locationName=ui->Lcation_Box->toPlainText();
    QString street= ui->Street_Box ->toPlainText();
    QString city=ui->City_Box->toPlainText();
    QString state=ui->State_Box->toPlainText();
    QString zipcode=ui->Zip_Box->toPlainText();
}
