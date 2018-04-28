#ifndef ADDEVENTBUTTON_H
#define ADDEVENTBUTTON_H

#include <QDialog>
#include "daycalendar.h"
#include "dayview.h"
#include <QAbstractButton>
#include <mainwindowtabbed.h>
#include "thedb.h"

namespace Ui {
class AddEventButton;
}

class AddEventButton : public QDialog
{
    Q_OBJECT

public:
    theDB calenderdb;

    void populateLocations();
    enum Mode {Read, Write};
    explicit AddEventButton(QDate date, DayCalendar *_userEvents, Mode mode, QWidget *main, QWidget *parent = 0);
    DayCalendar *userEvents;
    mainWindowTabbed *father;
    DayView *dayView;
    void EnableAll(bool enable);
    ~AddEventButton();

private slots:

    void on_buttonBox_clicked(QAbstractButton *button);


    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::AddEventButton *ui;

};

#endif // ADDEVENTBUTTON_H
