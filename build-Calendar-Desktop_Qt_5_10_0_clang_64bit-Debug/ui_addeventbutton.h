/********************************************************************************
** Form generated from reading UI file 'addeventbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QLabel *label_5;
    QTimeEdit *EndTime_Box;
    QDateEdit *EndDate_Box;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_13;
    QComboBox *Category_Box;
    QDateEdit *StartDate_Box;
    QTimeEdit *StartTime_Box;
    QDialogButtonBox *buttonBox;
    QGroupBox *HaveLocationCheckBox;
    QLabel *label_12;
    QTextEdit *Zip_Box;
    QLabel *label_6;
    QTextEdit *Stste_Box;
    QCheckBox *checkBox;
    QLabel *label_8;
    QSpinBox *spinBox;
    QTextEdit *City_Box;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_7;
    QTextEdit *Street_Box;
    QLabel *label_10;
    QTextEdit *Location_Box;
    QTextEdit *Title_Box;

    void setupUi(QDialog *AddEventButton)
    {
        if (AddEventButton->objectName().isEmpty())
            AddEventButton->setObjectName(QStringLiteral("AddEventButton"));
        AddEventButton->resize(452, 510);
        label = new QLabel(AddEventButton);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 131, 31));
        Note_Box = new QTextEdit(AddEventButton);
        Note_Box->setObjectName(QStringLiteral("Note_Box"));
        Note_Box->setGeometry(QRect(90, 387, 271, 81));
        label_5 = new QLabel(AddEventButton);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 40, 60, 16));
        EndTime_Box = new QTimeEdit(AddEventButton);
        EndTime_Box->setObjectName(QStringLiteral("EndTime_Box"));
        EndTime_Box->setGeometry(QRect(180, 357, 91, 24));
        EndDate_Box = new QDateEdit(AddEventButton);
        EndDate_Box->setObjectName(QStringLiteral("EndDate_Box"));
        EndDate_Box->setGeometry(QRect(90, 357, 81, 24));
        EndDate_Box->setCalendarPopup(true);
        layoutWidget = new QWidget(AddEventButton);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(22, 327, 61, 81));
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

        label_13 = new QLabel(AddEventButton);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 70, 71, 16));
        Category_Box = new QComboBox(AddEventButton);
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->setObjectName(QStringLiteral("Category_Box"));
        Category_Box->setGeometry(QRect(90, 70, 251, 26));
        StartDate_Box = new QDateEdit(AddEventButton);
        StartDate_Box->setObjectName(QStringLiteral("StartDate_Box"));
        StartDate_Box->setGeometry(QRect(90, 330, 81, 24));
        StartDate_Box->setCalendarPopup(true);
        StartTime_Box = new QTimeEdit(AddEventButton);
        StartTime_Box->setObjectName(QStringLiteral("StartTime_Box"));
        StartTime_Box->setGeometry(QRect(180, 330, 91, 24));
        buttonBox = new QDialogButtonBox(AddEventButton);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 480, 221, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        HaveLocationCheckBox = new QGroupBox(AddEventButton);
        HaveLocationCheckBox->setObjectName(QStringLiteral("HaveLocationCheckBox"));
        HaveLocationCheckBox->setGeometry(QRect(10, 110, 431, 201));
        HaveLocationCheckBox->setCheckable(true);
        HaveLocationCheckBox->setChecked(false);
        label_12 = new QLabel(HaveLocationCheckBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(120, 170, 191, 16));
        Zip_Box = new QTextEdit(HaveLocationCheckBox);
        Zip_Box->setObjectName(QStringLiteral("Zip_Box"));
        Zip_Box->setGeometry(QRect(260, 120, 81, 21));
        label_6 = new QLabel(HaveLocationCheckBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 10, 121, 31));
        Stste_Box = new QTextEdit(HaveLocationCheckBox);
        Stste_Box->setObjectName(QStringLiteral("Stste_Box"));
        Stste_Box->setGeometry(QRect(140, 120, 81, 21));
        checkBox = new QCheckBox(HaveLocationCheckBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 150, 161, 20));
        label_8 = new QLabel(HaveLocationCheckBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 100, 61, 16));
        spinBox = new QSpinBox(HaveLocationCheckBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(60, 170, 48, 21));
        City_Box = new QTextEdit(HaveLocationCheckBox);
        City_Box->setObjectName(QStringLiteral("City_Box"));
        City_Box->setGeometry(QRect(20, 120, 101, 21));
        label_9 = new QLabel(HaveLocationCheckBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(140, 100, 60, 16));
        label_11 = new QLabel(HaveLocationCheckBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 170, 60, 16));
        label_7 = new QLabel(HaveLocationCheckBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 60, 111, 20));
        Street_Box = new QTextEdit(HaveLocationCheckBox);
        Street_Box->setObjectName(QStringLiteral("Street_Box"));
        Street_Box->setGeometry(QRect(20, 80, 321, 21));
        label_10 = new QLabel(HaveLocationCheckBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 100, 60, 16));
        Location_Box = new QTextEdit(HaveLocationCheckBox);
        Location_Box->setObjectName(QStringLiteral("Location_Box"));
        Location_Box->setGeometry(QRect(20, 40, 281, 21));
        Title_Box = new QTextEdit(AddEventButton);
        Title_Box->setObjectName(QStringLiteral("Title_Box"));
        Title_Box->setGeometry(QRect(90, 40, 271, 21));

        retranslateUi(AddEventButton);

        QMetaObject::connectSlotsByName(AddEventButton);
    } // setupUi

    void retranslateUi(QDialog *AddEventButton)
    {
        AddEventButton->setWindowTitle(QApplication::translate("AddEventButton", "Dialog", nullptr));
        label->setText(QApplication::translate("AddEventButton", "<html><head/><body><p><span style=\" font-size:18pt;\">Add Event</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("AddEventButton", " Title :", nullptr));
        label_2->setText(QApplication::translate("AddEventButton", "Start Time:", nullptr));
        label_3->setText(QApplication::translate("AddEventButton", "End Time:", nullptr));
        label_4->setText(QApplication::translate("AddEventButton", "Note :", nullptr));
        label_13->setText(QApplication::translate("AddEventButton", "Category :", nullptr));
        Category_Box->setItemText(0, QApplication::translate("AddEventButton", "Work", nullptr));
        Category_Box->setItemText(1, QApplication::translate("AddEventButton", "School", nullptr));
        Category_Box->setItemText(2, QApplication::translate("AddEventButton", "Study", nullptr));
        Category_Box->setItemText(3, QApplication::translate("AddEventButton", "Fitness", nullptr));
        Category_Box->setItemText(4, QApplication::translate("AddEventButton", "Free Time", nullptr));

        HaveLocationCheckBox->setTitle(QApplication::translate("AddEventButton", "Location", nullptr));
        label_12->setText(QApplication::translate("AddEventButton", "minutes before i have to leave", nullptr));
        Zip_Box->setDocumentTitle(QString());
        Zip_Box->setPlaceholderText(QString());
        label_6->setText(QApplication::translate("AddEventButton", "Location Name :", nullptr));
        checkBox->setText(QApplication::translate("AddEventButton", "Travel time notification", nullptr));
        label_8->setText(QApplication::translate("AddEventButton", "City :", nullptr));
        label_9->setText(QApplication::translate("AddEventButton", "State :", nullptr));
        label_11->setText(QApplication::translate("AddEventButton", "Notify me ", nullptr));
        label_7->setText(QApplication::translate("AddEventButton", "Street :", nullptr));
        label_10->setText(QApplication::translate("AddEventButton", "Zip :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEventButton: public Ui_AddEventButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEVENTBUTTON_H
