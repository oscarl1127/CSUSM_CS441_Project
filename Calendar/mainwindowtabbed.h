#ifndef MAINWINDOWTABBED_H
#define MAINWINDOWTABBED_H

#include <QDialog>

namespace Ui {
class mainWindowTabbed;
}

class mainWindowTabbed : public QDialog
{
    Q_OBJECT

public:
    explicit mainWindowTabbed(QWidget *parent = 0);
    ~mainWindowTabbed();

private:
    Ui::mainWindowTabbed *ui;
    void centerAndResize(double width_perc, double height_perc);
};

#endif // MAINWINDOWTABBED_H
