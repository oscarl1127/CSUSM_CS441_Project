#include "addeventbutton.h"
#include "ui_addeventbutton.h"
#include "event.h"
#include "daycalendar.h"
#include <QDebug>
#include <QMessageBox>
#include <mainwindowtabbed.h>
#include <QPushButton>

using namespace std;
enum Mode
{
    Edit,
    Read
};

AddEventButton::AddEventButton(QDateTime dateTime, DayCalendar *_userEvents, Mode mode, QWidget *main, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEventButton)
{   
    qDebug() << "entering constructor";
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok), SIGNAL(clicked()), SLOT(AddEventClicked()));
    connect(ui->buttonBox->button(QDialogButtonBox::Apply), SIGNAL(clicked()), SLOT(ApplyEventClicked()));
    connect(ui->buttonBox->button(QDialogButtonBox::Discard), SIGNAL(clicked()), SLOT(DeleteEventClicked()));
    connect(ui->buttonBox->button(QDialogButtonBox::Cancel), SIGNAL(clicked()), SLOT(CancelEventClicked()));
    userEvents = _userEvents;
    father = (mainWindowTabbed*) main;
    dayView = (DayView*) parent;
    CurrentMode = mode;
    switch(CurrentMode)
    {
        case Mode::Write:
        this->setWindowTitle("Add Event");
        ui->label->setText("Add Event");
        ui->StartDate_Box->setDate(dateTime.date());
        ui->EndDate_Box->setDate(dateTime.date());
        ui->StartTime_Box->setTime(dateTime.time());
        ui->EndTime_Box->setTime(dateTime.time().addSecs(60));
        ui->buttonBox->button(QDialogButtonBox::Discard)->hide();
        ui->buttonBox->button(QDialogButtonBox::Apply)->hide();
        ui->buttonBox->button(QDialogButtonBox::Ok)->show();
        break;

        case Mode::Read:
        Event theEvent;
        FocusedDateTime = dateTime;
        this->setWindowTitle("Edit Event");
        userEvents->GetEvent(dateTime, theEvent);
        ui->label->setText("Edit Event");
        ui->StartDate_Box->setDate(dateTime.date());
        ui->EndDate_Box->setDate(dateTime.date());
        ui->StartTime_Box->setTime(dateTime.time());
        ui->EndTime_Box->setTime(theEvent.getTimeEnd());
        ui->Title_Box->setText(theEvent.getName());
        ui->Category_Box->setCurrentText(theEvent.getCategory());
        ui->City_Box->setText(theEvent.getLocation().getCity());
        ui->Street_Box->setText(theEvent.getLocation().getStreet());
        ui->Stste_Box->setText(theEvent.getLocation().getState());
        ui->Zip_Box->setText(theEvent.getLocation().getZipcode());
        ui->Note_Box->setText(theEvent.getNote());
        ui->buttonBox->button(QDialogButtonBox::Ok)->hide();
        ui->buttonBox->button(QDialogButtonBox::Apply)->show();
        ui->buttonBox->button(QDialogButtonBox::Discard)->show();
        ui->buttonBox->button(QDialogButtonBox::Discard)->setText("Delete Event");
        break;
    }


    qDebug() << "AddEventButton Constructed";
}

void AddEventButton::AddEventClicked()
{
    Event newEvent = Event();
    //Event attributes
    QString eventName = ui->Title_Box->toPlainText();
    QString category = ui->Category_Box->currentText();
    QDate startDate = ui->StartDate_Box->date();
    QDate endDate = ui->EndDate_Box->date();
    QTime startTime = ui->StartTime_Box->time();
    QTime endTime = ui->EndTime_Box->time();
    QString note = ui->Note_Box->toPlainText();

    //Store loation attributes
    QString locationName = ui->Location_Box->toPlainText();
    QString streetName = ui->Street_Box->toPlainText();
    QString cityName = ui->City_Box->toPlainText();
    QString stateName = ui->Stste_Box->toPlainText();
    QString zip = ui->Zip_Box->toPlainText();
    //Set location attributes
    newEvent.eventLoc.setLocationName(locationName);
    newEvent.eventLoc.setStreet(streetName);
    newEvent.eventLoc.setCity(cityName);
    newEvent.eventLoc.setZipCode(zip);
    newEvent.eventLoc.setState(stateName);
    newEvent.eventLoc.setSavedLocation(1);

    //Set event attributes
    newEvent.setName(eventName);
    newEvent.setNote(note);
    newEvent.setCategory(category);
    newEvent.setStartDate(startDate);
    newEvent.setEndDate(endDate);
    newEvent.setTimeStart(startTime);
    newEvent.setTimeEnd(endTime);

    //Check For Null Values
    if(eventName==NULL||category==NULL||locationName==NULL || streetName==NULL||cityName==NULL||stateName==NULL||zip==NULL)
    {
        QMessageBox msgBox;
        msgBox.setText("Error. Please complete all fields before continuing.");
        msgBox.exec();
        return;
    }
    //Check for proper dates
    QDate today = QDate::currentDate();
    if((startDate<today)||(endDate<today)||(startDate>endDate))
    {
        QMessageBox msgBox;
        msgBox.setText("Error. Please check your dates");
        msgBox.exec();
        return;
    }

    //adding event to daycalendar object map
    //if there is an Event with the same date and time, show message box to ask user if they want to replace it with new event
    QMessageBox::StandardButton reply;
    if(!userEvents->AddEvent(newEvent))
    {
        reply = QMessageBox::question(this, "Same Date Collision", "Event with same Date and Time found! Replace?",
                                   QMessageBox::Yes|QMessageBox::No);
        if(reply == QMessageBox::Yes)
        {
            QDateTime dateTime(newEvent.getStartDate(), newEvent.getTimeStart());
            Event oldEvent;
            userEvents->GetEvent(dateTime, oldEvent);
            userEvents->ReplaceEvent(oldEvent, newEvent);
        }
        else return;
    }
    if(dayView != NULL)
        dayView->RefreshDayView();
    if(father != NULL)
         father->RefreshCalendarView();
    qDebug() << "Event Name "<< QString(newEvent.getName() );
    this->close();
}
void AddEventButton::DeleteEventClicked()
{
    //Get ID for the user
    int userId = userEvents->getUserID();

    Event removedEvent;
    qDebug() << "Removing event";
    userEvents->RemoveEvent(FocusedDateTime, removedEvent);
    qDebug() << removedEvent.getName();

    //We got the event. Store the event's name
    QString eventName = removedEvent.getName();

    calenderdb.deleteEvent(userId,eventName);


    if(dayView != NULL)
        dayView->RefreshDayView();
    if(father != NULL)
         father->RefreshCalendarView();
     this->close();
}
void AddEventButton::ApplyEventClicked()
{
    //Get user's ID
    int userID=userEvents->getUserID();

    Event newEvent = Event();
    //Event attributes
    QString eventName = ui->Title_Box->toPlainText();
    QString category = ui->Category_Box->currentText();
    QDate startDate = ui->StartDate_Box->date();
    QDate endDate = ui->EndDate_Box->date();
    QTime startTime = ui->StartTime_Box->time();
    QTime endTime = ui->EndTime_Box->time();
    QString note = ui->Note_Box->toPlainText();

    //Store loation attributes
    QString locationName = ui->Location_Box->toPlainText();
    QString streetName = ui->Street_Box->toPlainText();
    QString cityName = ui->City_Box->toPlainText();
    QString stateName = ui->Stste_Box->toPlainText();
    QString zip = ui->Zip_Box->toPlainText();
    //Set location attributes
    newEvent.eventLoc.setLocationName(locationName);
    newEvent.eventLoc.setStreet(streetName);
    newEvent.eventLoc.setCity(cityName);
    newEvent.eventLoc.setZipCode(zip);
    newEvent.eventLoc.setState(stateName);
    newEvent.eventLoc.setSavedLocation(1);

    //Set event attributes
    newEvent.setName(eventName);
    newEvent.setNote(note);
    newEvent.setCategory(category);
    newEvent.setStartDate(startDate);
    newEvent.setEndDate(endDate);
    newEvent.setTimeStart(startTime);
    newEvent.setTimeEnd(endTime);

    Event oldEvent;
    userEvents->GetEvent(FocusedDateTime, oldEvent);
    userEvents->ReplaceEvent(oldEvent, newEvent);

    //Delete Old Event from Database
    calenderdb.deleteEvent(userID,oldEvent.getName());

    //Event is added back into database

    qDebug() << "Replaced the time " << FocusedDateTime << " with " << newEvent.getTimeStart();
    if(dayView != NULL)
        dayView->RefreshDayView();
    if(father != NULL)
         father->RefreshCalendarView();
    this->close();
}

void AddEventButton::CancelEventClicked()
{
    this->close();
}

void AddEventButton::EnableAll(bool enable)
{
  ui->StartDate_Box->setEnabled(enable);
  ui->EndDate_Box->setEnabled(enable);
  ui->StartTime_Box->setEnabled(enable);
  ui->EndTime_Box->setEnabled(enable);
  ui->HaveLocationCheckBox->setEnabled(enable);
  ui->Note_Box->setEnabled(enable);
  ui->Category_Box->setEnabled(enable);
}


AddEventButton::~AddEventButton()
{
    delete ui;
}


//void AddEventButton::on_buttonBox_clicked(QAbstractButton *button)
//{

//}

void AddEventButton::on_comboBox_currentIndexChanged(const QString &arg1)
{
    //Get location based off locationName and userID
    int id=userEvents->getUserID();
    Location theLoc = calenderdb.getLocationBasedOfName(arg1, id);
    ui->Location_Box->setText(theLoc.getLocationName());
    ui->Zip_Box->setText(theLoc.getZipcode());
    ui->Street_Box->setText(theLoc.getStreet());
    ui->Stste_Box->setText(theLoc.getState());
    ui->City_Box->setText(theLoc.getCity());
}

void AddEventButton::populateLocations()
{
    //Get locations for the user
    vector <Location> locs=calenderdb.getListOfLocationsForUSer(userEvents->getUserID());
    QString currentLoc;

    //Add each location to the combo box
    for(int y=0;y<locs.size();y++)
    {
        currentLoc=locs[y].getLocationName();
        ui->comboBox->addItem(currentLoc);
    }
}

void AddEventButton::on_buttonBox_accepted()
{

}
