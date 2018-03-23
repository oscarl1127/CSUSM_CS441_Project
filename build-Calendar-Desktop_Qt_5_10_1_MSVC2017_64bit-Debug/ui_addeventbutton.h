/********************************************************************************
** Form generated from reading UI file 'addeventbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEVENTBUTTON_H
#define UI_ADDEVENTBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddEventButton
{
public:
    QLabel *label;
    QTextEdit *Note_Box;
    QTextEdit *Title_Box;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *Street_Box;
    QTimeEdit *EndTime_Box;
    QDateEdit *EndDate_Box;
    QCheckBox *checkBox;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QTextEdit *City_Box;
    QTextEdit *Stste_Box;
    QTextEdit *Zip_Box;
    QTextEdit *Location_Box;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *spinBox;
    QLabel *label_13;
    QComboBox *Category_Box;
    QDateEdit *StartDate_Box;
    QTimeEdit *StartTime_Box;
    QPushButton *AddEventButton_2;

    void setupUi(QDialog *AddEventButton)
    {
        if (AddEventButton->objectName().isEmpty())
            AddEventButton->setObjectName(QStringLiteral("AddEventButton"));
        AddEventButton->resize(380, 510);
        label = new QLabel(AddEventButton);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 0, 91, 21));
        Note_Box = new QTextEdit(AddEventButton);
        Note_Box->setObjectName(QStringLiteral("Note_Box"));
        Note_Box->setGeometry(QRect(80, 377, 271, 81));
        Title_Box = new QTextEdit(AddEventButton);
        Title_Box->setObjectName(QStringLiteral("Title_Box"));
        Title_Box->setGeometry(QRect(80, 30, 271, 21));
        label_5 = new QLabel(AddEventButton);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 30, 60, 16));
        label_6 = new QLabel(AddEventButton);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 87, 101, 16));
        Street_Box = new QTextEdit(AddEventButton);
        Street_Box->setObjectName(QStringLiteral("Street_Box"));
        Street_Box->setGeometry(QRect(30, 157, 321, 21));
        EndTime_Box = new QTimeEdit(AddEventButton);
        EndTime_Box->setObjectName(QStringLiteral("EndTime_Box"));
        EndTime_Box->setGeometry(QRect(170, 347, 91, 24));
        EndDate_Box = new QDateEdit(AddEventButton);
        EndDate_Box->setObjectName(QStringLiteral("EndDate_Box"));
        EndDate_Box->setGeometry(QRect(80, 347, 81, 24));
        checkBox = new QCheckBox(AddEventButton);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 247, 161, 20));
        label_7 = new QLabel(AddEventButton);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 137, 60, 16));
        label_8 = new QLabel(AddEventButton);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 187, 60, 16));
        label_9 = new QLabel(AddEventButton);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 187, 60, 16));
        label_10 = new QLabel(AddEventButton);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 187, 60, 16));
        City_Box = new QTextEdit(AddEventButton);
        City_Box->setObjectName(QStringLiteral("City_Box"));
        City_Box->setGeometry(QRect(30, 207, 101, 21));
        Stste_Box = new QTextEdit(AddEventButton);
        Stste_Box->setObjectName(QStringLiteral("Stste_Box"));
        Stste_Box->setGeometry(QRect(160, 207, 81, 21));
        Zip_Box = new QTextEdit(AddEventButton);
        Zip_Box->setObjectName(QStringLiteral("Zip_Box"));
        Zip_Box->setGeometry(QRect(270, 207, 81, 21));
        Location_Box = new QTextEdit(AddEventButton);
        Location_Box->setObjectName(QStringLiteral("Location_Box"));
        Location_Box->setGeometry(QRect(30, 107, 321, 21));
        layoutWidget = new QWidget(AddEventButton);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 317, 43, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_11 = new QLabel(AddEventButton);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 277, 60, 16));
        label_12 = new QLabel(AddEventButton);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(170, 277, 191, 16));
        spinBox = new QSpinBox(AddEventButton);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(120, 270, 48, 31));
        label_13 = new QLabel(AddEventButton);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 60, 71, 16));
        Category_Box = new QComboBox(AddEventButton);
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->setObjectName(QStringLiteral("Category_Box"));
        Category_Box->setGeometry(QRect(100, 60, 251, 26));
        StartDate_Box = new QDateEdit(AddEventButton);
        StartDate_Box->setObjectName(QStringLiteral("StartDate_Box"));
        StartDate_Box->setGeometry(QRect(80, 320, 81, 24));
        StartTime_Box = new QTimeEdit(AddEventButton);
        StartTime_Box->setObjectName(QStringLiteral("StartTime_Box"));
        StartTime_Box->setGeometry(QRect(170, 320, 91, 24));
        AddEventButton_2 = new QPushButton(AddEventButton);
        AddEventButton_2->setObjectName(QStringLiteral("AddEventButton_2"));
        AddEventButton_2->setGeometry(QRect(200, 470, 113, 32));

        retranslateUi(AddEventButton);

        QMetaObject::connectSlotsByName(AddEventButton);
    } // setupUi

    void retranslateUi(QDialog *AddEventButton)
    {
        AddEventButton->setWindowTitle(QApplication::translate("AddEventButton", "Dialog", nullptr));
        label->setText(QApplication::translate("AddEventButton", "<html><head/><body><p><span style=\" font-size:18pt;\">Add Event</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("AddEventButton", " Title :", nullptr));
        label_6->setText(QApplication::translate("AddEventButton", "Location Name :", nullptr));
        checkBox->setText(QApplication::translate("AddEventButton", "Travel time notification", nullptr));
        label_7->setText(QApplication::translate("AddEventButton", "Street :", nullptr));
        label_8->setText(QApplication::translate("AddEventButton", "City :", nullptr));
        label_9->setText(QApplication::translate("AddEventButton", "State :", nullptr));
        label_10->setText(QApplication::translate("AddEventButton", "Zip :", nullptr));
        label_2->setText(QApplication::translate("AddEventButton", "From :", nullptr));
        label_3->setText(QApplication::translate("AddEventButton", "    To :", nullptr));
        label_4->setText(QApplication::translate("AddEventButton", "Note :", nullptr));
        label_11->setText(QApplication::translate("AddEventButton", "Notify me ", nullptr));
        label_12->setText(QApplication::translate("AddEventButton", "minutes before i have to leave", nullptr));
        label_13->setText(QApplication::translate("AddEventButton", "Category :", nullptr));
        Category_Box->setItemText(0, QApplication::translate("AddEventButton", "Work", nullptr));
        Category_Box->setItemText(1, QApplication::translate("AddEventButton", "School", nullptr));
        Category_Box->setItemText(2, QApplication::translate("AddEventButton", "Study", nullptr));
        Category_Box->setItemText(3, QApplication::translate("AddEventButton", "Fitness", nullptr));
        Category_Box->setItemText(4, QApplication::translate("AddEventButton", "Free Time", nullptr));

        AddEventButton_2->setText(QApplication::translate("AddEventButton", "Add Event", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEventButton: public Ui_AddEventButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEVENTBUTTON_H
