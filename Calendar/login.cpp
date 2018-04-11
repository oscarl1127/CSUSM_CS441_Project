#include "login.h"
#include "mainwindowtabbed.h"
#include "ui_login.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString username = ui->username_lineEdit->text();
    QString password = ui->password_lineEdit->text();

        if(username ==  "username" && password == "password")
        {
            mainWindowTabbed m;
            m.setModal(true);
            m.exec();
        }

        else
        {
            QMessageBox::warning(this,"Login", "Username and/or password is not correct");
        }
}
