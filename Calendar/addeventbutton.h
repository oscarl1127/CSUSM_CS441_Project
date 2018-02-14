#ifndef ADDEVENTBUTTON_H
#define ADDEVENTBUTTON_H

#include <QDialog>

namespace Ui {
class AddEventButton;
}

class AddEventButton : public QDialog
{
    Q_OBJECT

public:
    explicit AddEventButton(QWidget *parent = 0);
    ~AddEventButton();

private:
    Ui::AddEventButton *ui;
};

#endif // ADDEVENTBUTTON_H
