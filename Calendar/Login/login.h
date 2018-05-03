#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "../Database/thedb.h"

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    theDB calenderdb;
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::login *ui;

};

#endif // LOGIN_H
