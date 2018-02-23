#include "mainwindowtabbed.h"
#include "ui_mainwindowtabbed.h"

mainWindowTabbed::mainWindowTabbed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainWindowTabbed)
{
    ui->setupUi(this);
}

mainWindowTabbed::~mainWindowTabbed()
{
    delete ui;
}
