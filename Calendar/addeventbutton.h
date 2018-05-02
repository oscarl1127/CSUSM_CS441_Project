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
     enum Mode {Read, Write};
    explicit AddEventButton(QDateTime dateTime, DayCalendar *_userEvents, Mode mode, QWidget *main, QWidget *parent = 0);
    theDB calenderdb;
    void populateLocations();
    DayCalendar *userEvents;
    mainWindowTabbed *father;
    DayView *dayView;
    Mode CurrentMode;
    QDateTime FocusedDateTime;
    void EnableAll(bool enable);
    ~AddEventButton();

private slots:
    void AddEventClicked();
    void DeleteEventClicked();
    void ApplyEventClicked();
    //void on_buttonBox_clicked(QAbstractButton *button);
    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::AddEventButton *ui;

};

#endif // ADDEVENTBUTTON_H
