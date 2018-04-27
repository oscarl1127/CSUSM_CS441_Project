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
#include "addeventbutton.h"
#include "activitystats.h"


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

void mainWindowTabbed::setUserID(int theUserID)
{
    userID=theUserID;
    userEvents.setUserID(theUserID);

    //Pass the userID to daycalender
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

    AddEventButton _event(date, userEvents, AddEventButton::Mode::Read, this);
    _event.setModal(true);
    _event.exec();
}

void mainWindowTabbed::on_AddEvent_AcceptDeclineButton_accepted()
{
    bool cont = false;

        //Check for null values
         QString eventName = ui->Title_Box->toPlainText();
         QString lName = ui->Lcation_Box->toPlainText();
         QString streetName = ui->Street_Box->toPlainText();
         QString stateName = ui->State_Box->toPlainText();
         QString cityName = ui->City_Box->toPlainText();
         QString zip = ui->Zip_Box->toPlainText();
         //Check correct date values
         QDate endD = ui->DateEnd_Box->date();
         QDate startD = ui->DateStart_Box->date();
         if(eventName==NULL||lName ==NULL||streetName==NULL||stateName==NULL||cityName==NULL||zip==NULL)
         {
             QMessageBox msgBox;
             msgBox.setText("Error. Please complete all fields before continuing.");
             msgBox.exec();
             return;
         }
         else if(endD<startD)
         {
             QMessageBox msgBox;
             msgBox.setText("End date cannot come before start date");
             msgBox.exec();
             return;
         }
         else
             cont = true;

    Event newEvent = Event();

    //Event Info
    newEvent.setName( ui->Title_Box->toPlainText() );
    newEvent.setNote( ui->Note_Box ->toPlainText() );
    newEvent.setCategory( ui->Category_Box->currentText() );

    //Date & times
    newEvent.setStartDate( ui->DateStart_Box->date() );
    newEvent.setEndDate(ui->DateEnd_Box->date());
    newEvent.setTimeStart(ui->TimeStart_Box->time());
    newEvent.setTimeEnd(ui->TimeEnd_Box->time());

    //Location Information
    newEvent.eventLoc.setState(ui->State_Box->toPlainText());
    newEvent.eventLoc.setLocationName(ui->Lcation_Box->toPlainText());
    newEvent.eventLoc.setStreet( ui->Street_Box ->toPlainText());
    newEvent.eventLoc.setCity(ui->City_Box->toPlainText() );
    newEvent.eventLoc.setZipCode(ui->Zip_Box->toPlainText());
    newEvent.eventLoc.setSavedLocation(0);

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
   ui->UpcomingEventsTable->setRowCount(0);
   qDebug() << "button clicked";
   vector<Event> events = userEvents.GetUpcomingEvents(30, QDate::currentDate());
    qDebug() << "events size is : " << events.size();
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
   ui->UpcomingEventsTable->setHorizontalHeaderLabels(QStringList() << "Title" << "Category" << "Start Date" << "Start Time");
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

void mainWindowTabbed::on_weeklyStats_clicked()
{
    this->work=0;this->exercise=0;this->school=0;this->freeTime=0;this->appointment=0;this->meetings=0;
    this->study=0;this->vacation = 0;

    activitystats *stats = new activitystats();

    calculateWeekStatsByCategory();

    stats->buildPieSeries(this->work,this->exercise,this->school,this->freeTime,this->appointment,
                          this->meetings,this->study,this->vacation);

    stats->chart->setTitle("Weekly Activity Breakdown");

    stats->chart->setTheme(QChart::ChartThemeDark);

    QChartView *chartView = new QChartView(stats->chart);

    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->resize(571,281);

    ui->gridLayout_3->addWidget(chartView,1,1);
}

void mainWindowTabbed::on_monthlyStats_clicked()
{
    this->work=0;this->exercise=0;this->school=0;this->freeTime=0;this->appointment=0;this->meetings=0;
    this->study=0;this->vacation = 0;

    activitystats *stats = new activitystats();

    calculateMonthStatsByCategory();

    qDebug() << "events about to build" << this->meetings << this->work ;

    stats->buildPieSeries(this->work,this->exercise,this->school,this->freeTime,this->appointment,
                          this->meetings,this->study,this->vacation);

    stats->chart->setTheme(QChart::ChartThemeBlueCerulean);

    stats->chart->setTitle("Monthly Activity Breakdown");

    QChartView *chartView = new QChartView(stats->chart);

    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->resize(800,500);

    ui->gridLayout_3->addWidget(chartView,1,1);
}

void mainWindowTabbed::calculateMonthStatsByCategory()
{
    int month = QDate::currentDate().month();
    int year = QDate::currentDate().year();
    QDate monthDate = QDate(year,month,1);

    if(userEvents.userEvents.size() == 0)
    {
        return;
    }

    vector<Event> events = userEvents.GetUpcomingEvents(31, monthDate);

    //qDebug() << "vector size " << events.size();
    foreach (Event e, events)
    {
        if(e.getCategory() == "Work" )
        {
            this->work++;
        }
        else if (e.getCategory() == "Exercise" )
        {
            this->exercise++;
        }
        else if (e.getCategory() == "School" )
        {
            this->school++;
        }
        else if (e.getCategory() == "Free Time" )
        {
                this->freeTime++;
        }
        else if (e.getCategory() == "Appointment" )
        {
            this->appointment++;
        }
        else if (e.getCategory() == "Meetings" )
        {
            this->meetings++;
        }
        else if (e.getCategory() == "Study" )
        {
            this->study++;
        }
        else if (e.getCategory() == "Vacation" )
        {
            this->vacation++;
        }

    }
}

void mainWindowTabbed::calculateWeekStatsByCategory()
{
    int month = QDate::currentDate().month();
    int day = QDate::currentDate().day();
    //qDebug()<<"beforeW " <<day;
    day = (day <= 7) ? 1 : day-=7;
    //qDebug() << "afterW "<< day;
    int year = QDate::currentDate().year();
    //qDebug()<<"DateW "<< year <<month <<day;

    QDate week = QDate(year,month,day);

    if(userEvents.userEvents.size() == 0)
    {
        return;
    }

    vector<Event> events = userEvents.GetUpcomingEvents(8, week);

    //qDebug() << "vector sizeW " << events.size();

    foreach (Event e, events)
    {
        if(e.getCategory() == "Work" )
        {
            this->work++;
        }
        else if (e.getCategory() == "Exercise" )
        {
            this->exercise++;
        }
        else if (e.getCategory() == "School" )
        {
            this->school++;
        }
        else if (e.getCategory() == "Free Time" )
        {
                this->freeTime++;
        }
        else if (e.getCategory() == "Appointment" )
        {
            this->appointment++;
        }
        else if (e.getCategory() == "Meetings" )
        {
            this->meetings++;
        }
        else if (e.getCategory() == "Study" )
        {
            this->study++;
        }
        else if (e.getCategory() == "Vacation" )
        {
            this->vacation++;
        }

    }
}

void mainWindowTabbed::on_AddEvent_LoadSavedLocationComboBox_currentIndexChanged(const QString &arg1)
{
    //Get location based off locationName and userID
    Location theLoc = calenderdb.getLocationBasedOfName(arg1, userID);

    //Change each label field
    ui->Lcation_Box->setText(arg1);
    ui->Street_Box->setText(theLoc.getStreet());
    ui->State_Box->setText(theLoc.getState());
    ui ->City_Box->setText(theLoc.getCity());
    ui->Zip_Box->setText(theLoc.getZipcode());
}

void mainWindowTabbed::populateLocations(int theUsrID)
{
    userID =  theUsrID;
    userEvents.setUserID(theUsrID);
    //Get list of locations for user
    vector <Location> locs = calenderdb.getListOfLocationsForUSer(theUsrID);

    QString currentLoc;

    //Add each locationName to the combobox
    for(int y=0;y<locs.size();y++)
    {
        currentLoc = locs[y].getLocationName();
            ui->AddEvent_LoadSavedLocationComboBox->addItem(currentLoc);
    }

}
