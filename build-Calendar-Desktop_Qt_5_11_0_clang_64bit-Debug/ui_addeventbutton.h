/********************************************************************************
** Form generated from reading UI file 'addeventbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEVENTBUTTON_H
#define UI_ADDEVENTBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddEventButton
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QTimeEdit *EndTime_Box;
    QLabel *label;
    QLabel *label_5;
    QTimeEdit *StartTime_Box;
    QDateEdit *EndDate_Box;
    QTextEdit *Title_Box;
    QTextEdit *Note_Box;
    QGroupBox *HaveLocationCheckBox;
    QTextEdit *Zip_Box;
    QLabel *label_6;
    QTextEdit *Stste_Box;
    QLabel *label_8;
    QTextEdit *City_Box;
    QLabel *label_9;
    QLabel *label_7;
    QTextEdit *Street_Box;
    QLabel *label_10;
    QTextEdit *Location_Box;
    QComboBox *Category_Box;
    QLabel *label_2;
    QDateEdit *StartDate_Box;
    QLabel *label_4;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddEventButton)
    {
        if (AddEventButton->objectName().isEmpty())
            AddEventButton->setObjectName(QStringLiteral("AddEventButton"));
        AddEventButton->resize(501, 558);
        AddEventButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(183, 233, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        widget = new QWidget(AddEventButton);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 10, 502, 541));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 9, 6);
        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font;
        font.setPointSize(17);
        label_13->setFont(font);
        label_13->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 2, 0, 1, 1);

        EndTime_Box = new QTimeEdit(widget);
        EndTime_Box->setObjectName(QStringLiteral("EndTime_Box"));
        EndTime_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);"));

        gridLayout->addWidget(EndTime_Box, 4, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("Papyrus"));
        font1.setPointSize(60);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label->setWordWrap(false);
        label->setMargin(-10);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        StartTime_Box = new QTimeEdit(widget);
        StartTime_Box->setObjectName(QStringLiteral("StartTime_Box"));
        StartTime_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);"));

        gridLayout->addWidget(StartTime_Box, 3, 2, 1, 1);

        EndDate_Box = new QDateEdit(widget);
        EndDate_Box->setObjectName(QStringLiteral("EndDate_Box"));
        EndDate_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);\n"
""));
        EndDate_Box->setCalendarPopup(true);

        gridLayout->addWidget(EndDate_Box, 4, 1, 1, 1);

        Title_Box = new QTextEdit(widget);
        Title_Box->setObjectName(QStringLiteral("Title_Box"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Title_Box->sizePolicy().hasHeightForWidth());
        Title_Box->setSizePolicy(sizePolicy1);
        Title_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));

        gridLayout->addWidget(Title_Box, 1, 1, 1, 2);

        Note_Box = new QTextEdit(widget);
        Note_Box->setObjectName(QStringLiteral("Note_Box"));
        Note_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));

        gridLayout->addWidget(Note_Box, 5, 1, 1, 2);

        HaveLocationCheckBox = new QGroupBox(widget);
        HaveLocationCheckBox->setObjectName(QStringLiteral("HaveLocationCheckBox"));
        HaveLocationCheckBox->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        HaveLocationCheckBox->setCheckable(true);
        HaveLocationCheckBox->setChecked(false);
        Zip_Box = new QTextEdit(HaveLocationCheckBox);
        Zip_Box->setObjectName(QStringLiteral("Zip_Box"));
        Zip_Box->setGeometry(QRect(250, 130, 81, 21));
        Zip_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));
        label_6 = new QLabel(HaveLocationCheckBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 20, 121, 31));
        label_6->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Stste_Box = new QTextEdit(HaveLocationCheckBox);
        Stste_Box->setObjectName(QStringLiteral("Stste_Box"));
        Stste_Box->setGeometry(QRect(130, 130, 81, 21));
        Stste_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));
        label_8 = new QLabel(HaveLocationCheckBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 110, 61, 16));
        label_8->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        City_Box = new QTextEdit(HaveLocationCheckBox);
        City_Box->setObjectName(QStringLiteral("City_Box"));
        City_Box->setGeometry(QRect(10, 130, 101, 21));
        City_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));
        label_9 = new QLabel(HaveLocationCheckBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 110, 60, 16));
        label_9->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_7 = new QLabel(HaveLocationCheckBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 70, 111, 20));
        label_7->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Street_Box = new QTextEdit(HaveLocationCheckBox);
        Street_Box->setObjectName(QStringLiteral("Street_Box"));
        Street_Box->setGeometry(QRect(10, 90, 321, 21));
        Street_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));
        label_10 = new QLabel(HaveLocationCheckBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(250, 110, 60, 16));
        label_10->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Location_Box = new QTextEdit(HaveLocationCheckBox);
        Location_Box->setObjectName(QStringLiteral("Location_Box"));
        Location_Box->setGeometry(QRect(10, 50, 281, 21));
        Location_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));

        gridLayout->addWidget(HaveLocationCheckBox, 6, 0, 1, 3);

        Category_Box = new QComboBox(widget);
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->setObjectName(QStringLiteral("Category_Box"));
        Category_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));

        gridLayout->addWidget(Category_Box, 2, 1, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        StartDate_Box = new QDateEdit(widget);
        StartDate_Box->setObjectName(QStringLiteral("StartDate_Box"));
        StartDate_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);\n"
""));
        StartDate_Box->setCalendarPopup(true);

        gridLayout->addWidget(StartDate_Box, 3, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 3);

        gridLayout->setRowMinimumHeight(0, 60);
        gridLayout->setRowMinimumHeight(6, 155);

        retranslateUi(AddEventButton);

        QMetaObject::connectSlotsByName(AddEventButton);
    } // setupUi

    void retranslateUi(QDialog *AddEventButton)
    {
        AddEventButton->setWindowTitle(QApplication::translate("AddEventButton", "Add Event", nullptr));
        label_13->setText(QApplication::translate("AddEventButton", "Category :", nullptr));
        label->setText(QApplication::translate("AddEventButton", "<html><head/><body><p><span style=\" font-size:64pt;\">Add Event</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("AddEventButton", " Title :", nullptr));
        HaveLocationCheckBox->setTitle(QApplication::translate("AddEventButton", "Location", nullptr));
        Zip_Box->setDocumentTitle(QString());
        Zip_Box->setPlaceholderText(QString());
        label_6->setText(QApplication::translate("AddEventButton", "Location Name :", nullptr));
        label_8->setText(QApplication::translate("AddEventButton", "City :", nullptr));
        label_9->setText(QApplication::translate("AddEventButton", "State :", nullptr));
        label_7->setText(QApplication::translate("AddEventButton", "Street :", nullptr));
        label_10->setText(QApplication::translate("AddEventButton", "Zip :", nullptr));
        Category_Box->setItemText(0, QApplication::translate("AddEventButton", "Work", nullptr));
        Category_Box->setItemText(1, QApplication::translate("AddEventButton", "School", nullptr));
        Category_Box->setItemText(2, QApplication::translate("AddEventButton", "Study", nullptr));
        Category_Box->setItemText(3, QApplication::translate("AddEventButton", "Fitness", nullptr));
        Category_Box->setItemText(4, QApplication::translate("AddEventButton", "Free Time", nullptr));

        label_2->setText(QApplication::translate("AddEventButton", "Start Time:", nullptr));
        label_4->setText(QApplication::translate("AddEventButton", "Note :", nullptr));
        label_3->setText(QApplication::translate("AddEventButton", "End Time:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEventButton: public Ui_AddEventButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEVENTBUTTON_H
