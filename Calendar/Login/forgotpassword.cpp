#include "forgotpassword.h"
#include <QString>
#include <QMessageBox>
#include "ui_forgotpassword.h"
#include <QDebug>

ForgotPassword::ForgotPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForgotPassword)
{
    ui->setupUi(this);
}

ForgotPassword::~ForgotPassword()
{
    delete ui;
}

void ForgotPassword::on_buttonBox_rejected()
{
    this->close();
}

void ForgotPassword::on_buttonBox_accepted()
{
    QString uName = ui->lineEdit->displayText();
    QString pass1 = ui->lineEdit_2->displayText();
    QString pass2 = ui->lineEdit_3->displayText();

    //Check For Null Values
    if(uName==NULL || pass1==NULL||pass2==NULL)
    {
        QMessageBox msgBox;
        msgBox.setText("Please complete all fields before continuing.");
        msgBox.exec();
    }
    //Make sure the passwords match
    else if(pass1!=pass2)
    {
        QMessageBox msgBox;
        msgBox.setText("Passwords do not match.");
        msgBox.exec();
    }
    //Check for valid username
    else if(database.checkForUsedUsername(uName)==false)
    {
        //There is no user with this name
        QMessageBox msgBox;
        msgBox.setText("Error. Please enter a valid username.");
        msgBox.exec();
    }
    else
    {
        //Here we know taht all fields are completed, matching passwords, and a valid username

        //Update the username
        database.changePassword(uName, pass1);
        QMessageBox msgBox;
        msgBox.setText("Your password has been changed.");
        msgBox.exec();
        this->close();
    }
}
