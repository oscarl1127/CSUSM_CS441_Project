#include <vector>
#include "dayview.h"
#include "ui_dayview.h"
#include "event.h"
#include "addeventbutton.h"
#include <QDebug>
#include <QBrush>
#include <QMessageBox>

const Qt::GlobalColor DayView::colors[16] = {
            Qt::darkGray,
            Qt::gray,
            Qt::lightGray,
            Qt::red,
            Qt::green,
            Qt::blue,
            Qt::cyan,
            Qt::magenta,
            Qt::yellow,
            Qt::darkRed,
            Qt::darkGreen,
            Qt::darkBlue,
            Qt::darkCyan,
            Qt::darkMagenta,
            Qt::darkYellow,
            Qt::white};

DayView::DayView(DayCalendar *dayCalendar, QDate date, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DayView)
{
    ui->setupUi(this);
    UserEvents = dayCalendar;
    Date = date;
    Parent = parent;
    RefreshDayView();
}

void DayView::RefreshDayView()
{
    colorIndex = 0;
    qDebug() << "Refreshing Day View";
    ui->TimeTable->clearContents();
    Events = UserEvents->GetEvents(Date);
    qDebug() << "Got Events, the size is " << Events.size();
    for(int i = 0; i < Events.size(); i++)
    {
        qDebug() << "Getting event " << Events[i].getName();
        QTime startTime = Events[i].getTimeStart(),
                endTime = Events[i].getTimeEnd();
        int StartRow = startTime.hour(),
                EndRow = endTime.hour();
        int columnEvent = 0;
       // if(!ui->TimeTable->item(StartRow, columnEvent)->text().isEmpty()) Check when events are on same time
        ui->TimeTable->setItem(StartRow, columnEvent, new QTableWidgetItem(Events[i].getName()));
        for(int j = StartRow; j < EndRow; j++)
        {
            ui->TimeTable->setItem(j, columnEvent, new QTableWidgetItem(Events[i].getName()));
            QTableWidgetItem* item = ui->TimeTable->item(j,columnEvent);
            item->setBackground(colors[colorIndex%16]);
            //ui->TimeTable->setItem(j, columnEvent, QTableWidgetItem());
        }
        colorIndex++;
    }
}




DayView::~DayView()
{
    delete ui;
}

void DayView::on_TimeTable_cellClicked(int row, int column)
{
//    qDebug() << row << " " << column << endl;
//    const QTime time(row, 0, 0);
//    QDateTime dateTime(Date, time);
//    QTableWidgetItem* item = ui->TimeTable->item(row,column);
//    if (!item || item->text().isEmpty())
//    {
//        qDebug() << "no text found";
//        AddEventButton _event(dateTime, UserEvents, AddEventButton::Mode::Write, Parent, this);
//        //_event.setModal(true);
//          _event.populateLocations();
//        _event.exec();
//    }
//    else
//    {
//        qDebug() << "text found";
//        AddEventButton _event(dateTime, UserEvents, AddEventButton::Mode::Read, Parent, this);
//        _event.setModal(true);
//        _event.populateLocations();
//        _event.exec();
//    }

}

void DayView::on_TimeTable_cellDoubleClicked(int row, int column)
{
    qDebug() << row << " " << column << endl;
    const QTime time(row, 0, 0);
    QDateTime dateTime(Date, time);
    QTableWidgetItem* item = ui->TimeTable->item(row,column);
    if (!item || item->text().isEmpty())
    {
        qDebug() << "no text found";
        AddEventButton _event(dateTime, UserEvents, AddEventButton::Mode::Write, Parent, this);
        //_event.setModal(true);
          _event.populateLocations();
        _event.exec();
    }
    else
    {
        qDebug() << "text found";
        AddEventButton _event(dateTime, UserEvents, AddEventButton::Mode::Read, Parent, this);
        _event.setModal(true);
        _event.populateLocations();
        _event.exec();
    }
}
