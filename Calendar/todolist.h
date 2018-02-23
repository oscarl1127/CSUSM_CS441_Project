#ifndef TODOLIST_H
#define TODOLIST_H

#include <QDialog>

namespace Ui {
class TodoList;
}

class TodoList : public QDialog
{
    Q_OBJECT

public:
    explicit TodoList(QWidget *parent = 0);
    ~TodoList();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::TodoList *ui;
};

#endif // TODOLIST_H
