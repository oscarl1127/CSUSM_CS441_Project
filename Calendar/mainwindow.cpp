#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addeventbutton.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked() //if show link file error build->clean all then -> run qmake then -> build all

{
  AddEventButton AddEventButton;
  AddEventButton.setModal(true);
  AddEventButton.exec();
}

