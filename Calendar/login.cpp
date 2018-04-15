#include "login.h"
#include "mainwindowtabbed.h"
#include "ui_login.h"
#include "thedb.h"
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

           //Allows default loging of 'Username' and 'Password' to be logged in aswell as properly validated credentials
        if((username ==  "username" && password == "password")||(calenderdb.validateCredentials(username,password)))
        {
            int theUserID= calenderdb.getUserID(username);
            qDebug()<<"id-----"<<theUserID;
            hide();
            mainWindowTabbed m;
            m.setUserID(theUserID);
            m.setModal(true);
            m.exec();
            show();
        }
        else
        {
            QMessageBox::warning(this,"Login", "Username and/or password is not correct");
        }
}
