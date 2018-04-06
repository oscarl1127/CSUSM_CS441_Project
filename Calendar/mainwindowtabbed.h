#ifndef MAINWINDOWTABBED_H
#define MAINWINDOWTABBED_H

#include <QDialog>
#include <QListWidgetItem>
#include "daycalendar.h"
#include "thedb.h"

namespace Ui {
class mainWindowTabbed;
}

class mainWindowTabbed : public QDialog
{
    Q_OBJECT

public:
    explicit mainWindowTabbed(QWidget *parent = 0);
    DayCalendar userEvents;
    //Creates the DB varible when the MainWindow tabbed is open (this is what occurs right after login.
    theDB calenderdb;
    ~mainWindowTabbed();

private slots:
    void on_calendarWidget_clicked(const QDate &date);
    void on_AddEvent_AcceptDeclineButton_accepted();
    void on_SelectTodoListTab_tabBarClicked(int index);
    //void on_pushButton_clicked();

    void on_pushButton_pressed();

private:
    Ui::mainWindowTabbed *ui;
    void centerAndResize(double width_perc, double height_perc);
};

#endif // MAINWINDOWTABBED_H
