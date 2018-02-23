#include "addeventbutton.h"
#include "ui_addeventbutton.h"

AddEventButton::AddEventButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEventButton)
{
    ui->setupUi(this);
}

AddEventButton::~AddEventButton()
{
    delete ui;
}
