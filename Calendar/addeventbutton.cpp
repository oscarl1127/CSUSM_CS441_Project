#include "addeventbutton.h"
#include "ui_addeventbutton.h"
#include "event.h"
#include "daycalendar.h"
#include <QDebug>
#include <QMessageBox>
#include <mainwindowtabbed.h>

using namespace std;
enum Mode
{
    Edit,
    Read
};

AddEventButton::AddEventButton(QDate date, DayCalendar *_userEvents, Mode mode, QWidget *main, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEventButton)
{   
    qDebug() << "entering constructor";
    ui->setupUi(this);
    ui->StartDate_Box->setDate(date);
    ui->EndDate_Box->setDate(date);
    ui->StartTime_Box->setTime(QTime::currentTime());
    ui->EndTime_Box->setTime(QTime::currentTime().addSecs(60));
    userEvents = _userEvents;
    father = (mainWindowTabbed*) main;
    dayView = (DayView*) parent;
    qDebug() << "AddEventButton Constructed";
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


void AddEventButton::on_buttonBox_clicked(QAbstractButton *button)
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

    //Check if there is a location
    if(ui->HaveLocationCheckBox->isChecked())
    {
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

        //Check for location null values
        if(locationName==NULL || streetName==NULL||cityName==NULL||stateName==NULL||zip==NULL)
        {
            QMessageBox msgBox;
            msgBox.setText("Error. Please complete all fields before continuing.");
            msgBox.exec();
            return;
        }
    }

    //Set event attributes
    newEvent.setName(eventName);
    newEvent.setNote(note);
    newEvent.setCategory(category);
    newEvent.setStartDate(startDate);
    newEvent.setEndDate(endDate);
    newEvent.setTimeStart(startTime);
    newEvent.setTimeEnd(endTime);

    //Check For Null Values
    if(eventName==NULL||category==NULL)
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
            userEvents->ReplaceEvent(newEvent);
        else return;
    }
    if(dayView != NULL)
        dayView->RefreshDayView();
    if(father != NULL)
         father->RefreshUpcomingEventList(30);
    qDebug() << "Event Name "<< QString(newEvent.getName() );
    this->close();
}
