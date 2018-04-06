#include "mainwindowtabbed.h"
#include "ui_mainwindowtabbed.h"
#include <QListWidgetItem>
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

    ui->List_Text_Box->addItem("Name-Category-Date-Time");
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
    DayView _dayView; // makes the instance
    _dayView.setModal(true);
    _dayView.exec();
}

void mainWindowTabbed::on_AddEvent_AcceptDeclineButton_accepted()
{
    //Once Event OK is given, check constraints of data (will do later), for now assumes data that can be put into database

    //Event is ready to be entered into db so first create a db varuble and connect


    Event newEvent = Event();

    newEvent.setName( ui->Title_Box->toPlainText() );
    newEvent.setLocation( ui->Lcation_Box->toPlainText() );
    newEvent.setStreet( ui->Street_Box ->toPlainText() );
    newEvent.setCity( ui->City_Box->toPlainText() );
    newEvent.setZipCode(( ui->Zip_Box->toPlainText()) );
    newEvent.setNote( ui->Note_Box ->toPlainText() );
    newEvent.setCategory( ui->Category_Box->currentText() );
    newEvent.setStartDate( ui->DateStart_Box->date() );
    newEvent.setEndDate( ui->DateEnd_Box->date() );
    newEvent.setTimeStart( ui->TimeStart_Box->time() );
    newEvent.setTimeEnd( ui->TimeEnd_Box->time() );


    //Send query to calenderDB variable
    calenderdb.addEventInDb(newEvent.getName(),newEvent.getLocation()); //will need to pass all relevant info


    //Testing database to see if validation is sucessful of test credentials
    bool xx=calenderdb.validateCredentials("jcook","P@SS");

    if(xx==true)
        qDebug() << "True!";
    else
        qDebug() << "False...";

    //Testing the changing of a user's password
    calenderdb.changePassword("jcook", "******");

    //adding event to daycalendar object map
    userEvents.AddEvent(newEvent);

    qDebug() << "test adding to vector" << userEvents.GetEvents(0).getName();

    //qDebug() << "Event added " << userEvents.GetUpcomingEvents(30,current)[0].getName();

    //Save E
}
// for Todo list
void mainWindowTabbed::on_SelectTodoListTab_tabBarClicked(int index)
{


}

//when changing month or pressing day, fill list of upcoming 30 day events
/*
void mainWindowTabbed::on_pushButton_clicked()
{
    //userEvents.GetUpcomingEvents(30, ui->calendarWidget->selectedDate());

    //ui->List_Text_Box->addItem("Testing click");
    /*

    for(int i = 0; i< userEvents.GetUpcomingEvents(30, ui->calendarWidget->selectedDate()).size(); i++)
    {
        QString toAdd = userEvents.GetUpcomingEvents(30, ui->calendarWidget->selectedDate())[i].getName()
                + "-"+userEvents.GetUpcomingEvents(30, ui->calendarWidget->selectedDate())[i].getStartDate().toString()
                + "-"+userEvents.GetUpcomingEvents(30, ui->calendarWidget->selectedDate())[i].getLocation();

        //qDebug() << "upcoming toAdd " << toAdd;
        ui->List_Text_Box->addItem(toAdd);

    }

}
*/
void mainWindowTabbed::on_pushButton_released()
{
    QDate proposed = QDate::currentDate();
    proposed = proposed.addDays(30);

    qDebug() << "Proposed " << proposed.toString();

    for(int i = 0; i < userEvents.events.size() ; i++)
    {
        QString toAdd = userEvents.events[i].getName() + "-"+userEvents.events[i].getCategory()
                +" on "+ userEvents.events[i].getStartDate().toString()
                +" @ "+ userEvents.events[i].getTimeStart().toString();

        if( userEvents.events[i].getStartDate() <= proposed)
        {
            qDebug() << "upcoming toAdd " << toAdd;
            ui->List_Text_Box->addItem(toAdd);
        }

    }

    //ui->List_Text_Box->addItem("Testing click");

    /*

    for(int i = 0; i< userEvents.GetUpcomingEvents(30, ui->calendarWidget->selectedDate()).size(); i++)
    {
        QString toAdd = userEvents.GetUpcomingEvents(30, ui->calendarWidget->selectedDate())[i].getName()
                + "-"+userEvents.GetUpcomingEvents(30, ui->calendarWidget->selectedDate())[i].getStartDate().toString()
                + "-"+userEvents.GetUpcomingEvents(30, ui->calendarWidget->selectedDate())[i].getLocation();

        qDebug() << "upcoming toAdd " << toAdd;
        ui->List_Text_Box->addItem(toAdd);
    }
    */
}
