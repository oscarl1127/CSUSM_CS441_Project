/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLineEdit *username_lineEdit;
    QLineEdit *password_lineEdit;
    QLabel *Title;
    QPushButton *pushButton;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(349, 251);
        username_lineEdit = new QLineEdit(login);
        username_lineEdit->setObjectName(QStringLiteral("username_lineEdit"));
        username_lineEdit->setGeometry(QRect(100, 130, 131, 21));
        username_lineEdit->setAlignment(Qt::AlignCenter);
        password_lineEdit = new QLineEdit(login);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(100, 150, 131, 21));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        password_lineEdit->setAlignment(Qt::AlignCenter);
        Title = new QLabel(login);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(0, 10, 351, 81));
        QFont font;
        font.setFamily(QStringLiteral("Noteworthy"));
        font.setPointSize(48);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 170, 131, 32));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", nullptr));
        username_lineEdit->setPlaceholderText(QApplication::translate("login", "Username", nullptr));
        password_lineEdit->setPlaceholderText(QApplication::translate("login", "Password", nullptr));
        Title->setText(QApplication::translate("login", "My Time", nullptr));
        pushButton->setText(QApplication::translate("login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
