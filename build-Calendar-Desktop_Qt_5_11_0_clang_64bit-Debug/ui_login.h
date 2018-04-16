/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QWidget *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(349, 251);
        login->setStyleSheet(QStringLiteral("color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));"));
        username_lineEdit = new QLineEdit(login);
        username_lineEdit->setObjectName(QStringLiteral("username_lineEdit"));
        username_lineEdit->setGeometry(QRect(100, 130, 131, 21));
        QFont font;
        font.setPointSize(15);
        username_lineEdit->setFont(font);
        username_lineEdit->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0.985222, y2:1, stop:1 rgba(153, 153, 153, 255));"));
        username_lineEdit->setAlignment(Qt::AlignCenter);
        password_lineEdit = new QLineEdit(login);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(100, 150, 131, 21));
        password_lineEdit->setFont(font);
        password_lineEdit->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0.985222, y2:1, stop:1 rgba(153, 153, 153, 255));\n"
"color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0.985222, y2:1, stop:1 rgba(153, 153, 153, 255));"));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        password_lineEdit->setAlignment(Qt::AlignCenter);
        Title = new QLabel(login);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(0, 10, 351, 111));
        QFont font1;
        font1.setFamily(QStringLiteral("Papyrus"));
        font1.setPointSize(60);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        Title->setFont(font1);
        Title->setStyleSheet(QStringLiteral("font:60pt \"Papyrus\";"));
        Title->setAlignment(Qt::AlignCenter);
        widget = new QWidget(login);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 351, 251));
        widget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 170, 91, 32));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("border: 1px solid gray;\n"
"border-radius: 15px;\n"
"padding: 0 8px;\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:1, y2:0, stop:1 rgba(30, 130, 174, 255));\n"
"color: white;\n"
"font: bold;\n"
"\n"
""));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(172, 231, 181, 21));
        pushButton_2->setStyleSheet(QLatin1String("color: white;\n"
"font: italic;\n"
"border-radius: 0px;\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(252, 0, 0, 105), stop:1 rgba(255, 255, 255, 0));\n"
""));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 230, 171, 21));
        pushButton_3->setStyleSheet(QLatin1String("color: white;\n"
"font: italic;\n"
"border-radius: 0px;\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(252, 0, 0, 105), stop:1 rgba(255, 255, 255, 0));\n"
""));
        widget->raise();
        username_lineEdit->raise();
        password_lineEdit->raise();
        Title->raise();

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
        pushButton_2->setText(QApplication::translate("login", "Lost your password?", nullptr));
        pushButton_3->setText(QApplication::translate("login", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
