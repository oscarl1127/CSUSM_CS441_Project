#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include "mainwindowtabbed.h"

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    theDB database;
    explicit Register(QWidget *parent = 0);
    ~Register();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
