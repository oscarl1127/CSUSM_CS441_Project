#include "todolist.h"
#include "ui_todolist.h"

TodoList::TodoList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TodoList)
{
    ui->setupUi(this);

    for(int i = 0; i < 9; i++)
    {
        ui->listWidget->addItem(QString::number(i) + " item here");     
    }

}

TodoList::~TodoList()
{
    delete ui;
}

void TodoList::on_pushButton_clicked() // Delete selected task button
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    delete ui->listWidget->currentItem();
   // item->setBackgroundColor(Qt::red);
   // item->setTextColor(Qt::white);
}

void TodoList::on_pushButton_3_clicked() // Update selected task button
{
    ui->listWidget->currentItem()->setText("Updating task...");
    //make it so it will go to a new window to update selected task or possibly in the same window
}
