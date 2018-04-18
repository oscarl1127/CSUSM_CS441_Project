#ifndef ADDEVENTBUTTON_H
#define ADDEVENTBUTTON_H

#include <QDialog>
#include "daycalendar.h"
#include <QAbstractButton>
#include <mainwindowtabbed.h>

namespace Ui {
class AddEventButton;
}

class AddEventButton : public QDialog
{
    Q_OBJECT

public:
    explicit AddEventButton(QDate date, DayCalendar &_userEvents, QWidget *parent = 0);
    DayCalendar *userEvents;
    mainWindowTabbed *father;
    ~AddEventButton();

private slots:

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::AddEventButton *ui;

};

#endif // ADDEVENTBUTTON_H
