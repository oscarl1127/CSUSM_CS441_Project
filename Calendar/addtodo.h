#ifndef ADDTODO_H
#define ADDTODO_H

#include <QDialog>
#include <mainwindowtabbed.h>
namespace Ui {
class AddTodo;
}

class AddTodo : public QDialog
{
    Q_OBJECT

public:
    explicit AddTodo(map<QString, QString> *map, QWidget *parent = 0);
    map<QString, QString> *TodoMap;
    mainWindowTabbed * main;
    ~AddTodo();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddTodo *ui;
};

#endif // ADDTODO_H
