#include "addeventbutton.h"
#include "ui_addeventbutton.h"
#include "event.h"
#include "daycalendar.h"
#include <QDebug>

using namespace std;

AddEventButton::AddEventButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEventButton)
{   
    ui->setupUi(this);
}


AddEventButton::~AddEventButton()
{
    delete ui;
}

// action once add event is clicked
void AddEventButton::on_AddEventButton_2_clicked()
{
    Event newEvent = Event();

    newEvent.setName( ui->Title_Box->toPlainText() );
    newEvent.setLocation( ui->Location_Box->toPlainText() );
    newEvent.setStreet( ui->Street_Box ->toPlainText() );
    newEvent.setCity( ui->City_Box->toPlainText() );
    newEvent.setZipCode(( ui->Zip_Box->toPlainText()) );
    newEvent.setNote( ui->Note_Box ->toPlainText() );
    newEvent.setCategory( ui->Category_Box->currentText() );

    newEvent.setStartDate( ui->StartDate_Box->date() );
    newEvent.setEndDate( ui->EndDate_Box->date() );

    newEvent.setTimeStart( ui->StartTime_Box ->time() );
    newEvent.setTimeEnd( ui->EndTime_Box ->time() );

    userEvents.addToList(newEvent);

    qDebug() << "Event Name"<< QString(newEvent.getName() );

}
