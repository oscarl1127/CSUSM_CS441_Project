#include "addtodo.h"
#include "ui_addtodo.h"

AddTodo::AddTodo(map<QString, QString> *map, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTodo)
{
    ui->setupUi(this);
    TodoMap = map;
    main = (mainWindowTabbed*)parent;
}

AddTodo::~AddTodo()
{
    delete ui;
}

void AddTodo::on_buttonBox_accepted()
{
    TodoMap->insert(std::pair<QString, QString>(ui->Title->toPlainText(), ui->Note->toPlainText()));
    main->RefreshTodoList();
}
