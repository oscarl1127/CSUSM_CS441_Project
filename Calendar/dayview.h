#ifndef DAYVIEW_H
#define DAYVIEW_H

#include <QDialog>

namespace Ui {
class DayView;
}

class DayView : public QDialog
{
    Q_OBJECT

public:
    explicit DayView(QWidget *parent = 0);
    ~DayView();

private:
    Ui::DayView *ui;
};

#endif // DAYVIEW_H
