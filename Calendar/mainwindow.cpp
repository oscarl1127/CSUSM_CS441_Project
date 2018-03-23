#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addeventbutton.h"
#include "todolist.h"
#include "mainwindowtabbed.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //cout << "test";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked() // Add Event if show link file error build->clean all then -> run qmake then -> build all

{
  AddEventButton AddEventButton;
  AddEventButton.setModal(true);
  AddEventButton.exec();
}


void MainWindow::on_pushButton_2_clicked() // Todo List
{
   TodoList TodoList;
   TodoList.setModal(true);
   TodoList.exec();
}

void MainWindow::on_pushButton_7_clicked() // Switch to tabbed view button
{
    mainWindowTabbed m; // makes the instance
    m.setModal(true);
    m.exec();
}
