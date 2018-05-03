#include "register.h"
#include "ui_register.h"
#include <QString>
#include <QMessageBox>

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_buttonBox_accepted()
{
    bool ready=false;
    QString uName = ui->lineEdit->displayText();
    QString pass = ui->lineEdit_2->displayText();
    QString verifiedPass = ui->lineEdit_3->displayText();

    if(uName==NULL || pass==NULL||verifiedPass==NULL)
    {
        QMessageBox msgBox;
        msgBox.setText("Please complete all fields before continuing.");
        msgBox.exec();
    }
    else if(pass!=verifiedPass)
    {
        QMessageBox msgBox;
        msgBox.setText("Passwords do not match.");
        msgBox.exec();
    }
    else if(database.checkForUsedUsername(uName))
    {
        QMessageBox msgBox;
        msgBox.setText("That username is already taken. Please try again.");
        msgBox.exec();
    }
    else
    {
        database.createUser(uName,pass);
        QMessageBox msgBox;
        msgBox.setText("Account created sucessfully.");
        msgBox.exec();
        this->close();
    }
}

void Register::on_buttonBox_rejected()
{
    this->close();
}
