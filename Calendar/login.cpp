#include "login.h"
#include "mainwindowtabbed.h"
#include "ui_login.h"
#include "thedb.h"
#include "register.h"
#include "forgotpassword.h"
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
            m.populateLocations(theUserID);

            m.setUserID(theUserID);
            m.setModal(true);
            m.exec();
            show();
            this -> hide(); // removes login window once loged in

        }
        else
        {
            QMessageBox::warning(this,"Login", "Username and/or password is not correct");
        }
}

void login::on_pushButton_3_clicked() // Register Button
{
    Register Reg;
    Reg.exec();
    show();
   // this->hide();
}

void login::on_pushButton_2_clicked() // Forgot Password Button
{
    ForgotPassword PassReset;
    PassReset.exec();
    show();
    //this->hide();
}
