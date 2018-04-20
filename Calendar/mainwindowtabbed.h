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
    void setUserID(int theUserID);
    int userID;
    int work=0,exercise=0,school=0,freeTime=0,appointment=0,meetings=0,study=0,vacation = 0;
    DayCalendar userEvents;
    //Creates the DB varible when the MainWindow tabbed is open (this is what occurs right after login.
    void RefreshUpcomingEventList(int days);
    ~mainWindowTabbed();

private slots:
    void on_calendarWidget_clicked(const QDate &date);
    void on_AddEvent_AcceptDeclineButton_accepted();
    void on_SelectTodoListTab_tabBarClicked(int index);

    void on_pushButton_pressed();

    void on_AddEvent_SaveThisLocationButton_clicked();

    void on_weeklyStats_clicked();

    void on_monthlyStats_clicked();

private:
    Ui::mainWindowTabbed *ui;
    void calculateMonthStatsByCategory();
    void calculateWeekStatsByCategory();
    void centerAndResize(double width_perc, double height_perc);
};

#endif // MAINWINDOWTABBED_H
