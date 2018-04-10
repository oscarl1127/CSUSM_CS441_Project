#ifndef ADDEVENTBUTTON_H
#define ADDEVENTBUTTON_H

#include <QDialog>
#include "daycalendar.h"

namespace Ui {
class AddEventButton;
}

class AddEventButton : public QDialog
{
    Q_OBJECT

public:
    explicit AddEventButton(QWidget *parent = 0);
    DayCalendar userEvents;
    ~AddEventButton();

private slots:
    void on_AddEventButton_2_clicked();

private:
    Ui::AddEventButton *ui;
};

#endif // ADDEVENTBUTTON_H
