#ifndef DAYVIEW_H
#define DAYVIEW_H

#include <QDialog>
#include <vector>
#include "event.h"
#include "daycalendar.h"
#include <map>

namespace Ui {
class DayView;
}

class DayView : public QDialog
{
    Q_OBJECT

public:
    explicit DayView(DayCalendar* dayCalendar, QDate date, QWidget *parent = 0);
    std::vector<Event> Events;
    DayCalendar* UserEvents;
    QDate Date;
    QWidget* Parent;
    static const Qt::GlobalColor colors[16];

    int colorIndex = 0;
    void RefreshDayView();
    ~DayView();

private slots:
    void on_TimeTable_cellClicked(int row, int column);

private:
    Ui::DayView *ui;
};

#endif // DAYVIEW_H
