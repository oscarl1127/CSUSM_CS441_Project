#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>
#include "mainwindowtabbed.h"

namespace Ui {
class ForgotPassword;
}

class ForgotPassword : public QDialog
{
    Q_OBJECT

public:
    theDB database;
    explicit ForgotPassword(QWidget *parent = 0);
    ~ForgotPassword();

private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::ForgotPassword *ui;
};

#endif // FORGOTPASSWORD_H
