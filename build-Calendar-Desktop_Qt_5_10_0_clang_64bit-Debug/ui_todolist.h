/********************************************************************************
** Form generated from reading UI file 'todolist.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOLIST_H
#define UI_TODOLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TodoList
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QPushButton *pushButton_4;
    QListWidget *listWidget_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *tab_3;
    QPushButton *pushButton_7;
    QListWidget *listWidget_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *TodoList)
    {
        if (TodoList->objectName().isEmpty())
            TodoList->setObjectName(QStringLiteral("TodoList"));
        TodoList->resize(461, 418);
        gridLayout = new QGridLayout(TodoList);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(TodoList);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        label = new QLabel(TodoList);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tabWidget = new QTabWidget(TodoList);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 12, 391, 241));
        pushButton = new QPushButton(tab);
        buttonGroup = new QButtonGroup(TodoList);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(pushButton);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 260, 161, 32));
        pushButton_2 = new QPushButton(tab);
        buttonGroup->addButton(pushButton_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 260, 91, 32));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 260, 161, 32));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(170, 260, 161, 32));
        listWidget_2 = new QListWidget(tab_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(20, 12, 391, 241));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(320, 260, 91, 32));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 260, 161, 32));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(170, 260, 161, 32));
        listWidget_3 = new QListWidget(tab_3);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(20, 12, 391, 241));
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(320, 260, 91, 32));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 260, 161, 32));
        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(TodoList);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TodoList);
    } // setupUi

    void retranslateUi(QDialog *TodoList)
    {
        TodoList->setWindowTitle(QApplication::translate("TodoList", "Dialog", nullptr));
        label->setText(QApplication::translate("TodoList", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Todo Lists</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("TodoList", "Delete selected task", nullptr));
        pushButton_2->setText(QApplication::translate("TodoList", "Add task", nullptr));
        pushButton_3->setText(QApplication::translate("TodoList", "Update selected task", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TodoList", "Day", nullptr));
        pushButton_4->setText(QApplication::translate("TodoList", "Update selected task", nullptr));
        pushButton_5->setText(QApplication::translate("TodoList", "Add task", nullptr));
        pushButton_6->setText(QApplication::translate("TodoList", "Delete selected task", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TodoList", "Week", nullptr));
        pushButton_7->setText(QApplication::translate("TodoList", "Update selected task", nullptr));
        pushButton_8->setText(QApplication::translate("TodoList", "Add task", nullptr));
        pushButton_9->setText(QApplication::translate("TodoList", "Delete selected task", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("TodoList", "Month", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TodoList: public Ui_TodoList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOLIST_H
