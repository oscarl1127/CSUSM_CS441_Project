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

AddEventButton::AddEventButton(QDate date, DayCalendar &_userEvents, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEventButton)
{   
    ui->setupUi(this);
    ui->StartDate_Box->setDate(date);
    ui->EndDate_Box->setDate(date);
    ui->StartTime_Box->setTime(QTime::currentTime());
    ui->EndTime_Box->setTime(QTime::currentTime().addSecs(60));
    userEvents = &_userEvents;
    father = (mainWindowTabbed*) parent;
}


AddEventButton::~AddEventButton()
{
    delete ui;
}


void AddEventButton::on_buttonBox_clicked(QAbstractButton *button)
{
    Event newEvent = Event();

    newEvent.setName( ui->Title_Box->toPlainText() );
    if(ui->HaveLocationCheckBox->isChecked())
    {
        newEvent.eventLoc.setLocationName(ui->Location_Box->toPlainText());
        newEvent.eventLoc.setStreet( ui->Street_Box ->toPlainText());
        newEvent.eventLoc.setCity(ui->City_Box->toPlainText() );
        newEvent.eventLoc.setZipCode(ui->Zip_Box->toPlainText());
        newEvent.eventLoc.setState(ui->Stste_Box->toPlainText());
        newEvent.eventLoc.setSavedLocation(0);
    }

    newEvent.setNote( ui->Note_Box ->toPlainText() );
    newEvent.setCategory( ui->Category_Box->currentText() );

    newEvent.setStartDate( ui->StartDate_Box->date() );
    newEvent.setEndDate( ui->EndDate_Box->date() );

    newEvent.setTimeStart( ui->StartTime_Box ->time() );
    newEvent.setTimeEnd( ui->EndTime_Box->time());

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
    if(father != NULL)
         father->RefreshUpcomingEventList(30);
    qDebug() << "Event Name GAGAG"<< QString(newEvent.getName() );
    this->close();
}
