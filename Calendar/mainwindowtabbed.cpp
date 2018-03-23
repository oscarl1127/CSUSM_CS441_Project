#include "mainwindowtabbed.h"
#include "ui_mainwindowtabbed.h"
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
    calenderdb.addEventInDb(); //will need to pass


    userEvents.addToList(newEvent);

    qDebug() << "Event Name"<< QString(newEvent.getName() );
    qDebug() << "Location Name"<< QString(newEvent.getLocation() );
    qDebug() << "Note Name"<< QString(newEvent.getNote() );
    qDebug() << "Date Name"<<  QDate( newEvent.getStartDate() );


    //Save E
}
