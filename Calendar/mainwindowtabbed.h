#ifndef MAINWINDOWTABBED_H
#define MAINWINDOWTABBED_H

#include <QDialog>
#include "daycalendar.h"

namespace Ui {
class mainWindowTabbed;
}

class mainWindowTabbed : public QDialog
{
    Q_OBJECT

public:
    explicit mainWindowTabbed(QWidget *parent = 0);
    DayCalendar userEvents;
    ~mainWindowTabbed();

private slots:
    void on_calendarWidget_clicked(const QDate &date);

    void on_AddEvent_AcceptDeclineButton_accepted();

private:
    Ui::mainWindowTabbed *ui;
    void centerAndResize(double width_perc, double height_perc);
};

#endif // MAINWINDOWTABBED_H
