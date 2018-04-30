#ifndef ADDEVENTBUTTON_H
#define ADDEVENTBUTTON_H

#include <QDialog>
#include "daycalendar.h"
#include "dayview.h"
#include <QAbstractButton>
#include <mainwindowtabbed.h>

namespace Ui {
class AddEventButton;
}

class AddEventButton : public QDialog
{
    Q_OBJECT

public:
     enum Mode {Read, Write};
    explicit AddEventButton(QDateTime dateTime, DayCalendar *_userEvents, Mode mode, QWidget *main, QWidget *parent = 0);
    DayCalendar *userEvents;
    mainWindowTabbed *father;
    DayView *dayView;
    void EnableAll(bool enable);
    ~AddEventButton();

private slots:

    void on_buttonBox_clicked(QAbstractButton *button);


private:
    Ui::AddEventButton *ui;

};

#endif // ADDEVENTBUTTON_H
