/********************************************************************************
** Form generated from reading UI file 'addtodo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTODO_H
#define UI_ADDTODO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddTodo
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *Title;
    QPlainTextEdit *Note;

    void setupUi(QDialog *AddTodo)
    {
        if (AddTodo->objectName().isEmpty())
            AddTodo->setObjectName(QStringLiteral("AddTodo"));
        AddTodo->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddTodo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 250, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        Title = new QTextEdit(AddTodo);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(20, 20, 351, 31));
        Note = new QPlainTextEdit(AddTodo);
        Note->setObjectName(QStringLiteral("Note"));
        Note->setGeometry(QRect(20, 70, 351, 171));

        retranslateUi(AddTodo);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddTodo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddTodo, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddTodo);
    } // setupUi

    void retranslateUi(QDialog *AddTodo)
    {
        AddTodo->setWindowTitle(QApplication::translate("AddTodo", "Dialog", nullptr));
        Title->setHtml(QApplication::translate("AddTodo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Title</p></body></html>", nullptr));
        Note->setPlainText(QApplication::translate("AddTodo", "Note", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTodo: public Ui_AddTodo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTODO_H
