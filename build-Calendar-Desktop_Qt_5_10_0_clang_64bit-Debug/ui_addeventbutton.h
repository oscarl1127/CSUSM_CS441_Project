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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddEventButton
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QTimeEdit *EndTime_Box;
    QLabel *label;
    QLabel *label_5;
    QTimeEdit *StartTime_Box;
    QDateEdit *EndDate_Box;
    QTextEdit *Title_Box;
    QTextEdit *Note_Box;
    QComboBox *Category_Box;
    QLabel *label_2;
    QDateEdit *StartDate_Box;
    QLabel *label_4;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;
    QWidget *HaveLocationCheckBox;
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
    QComboBox *comboBox;
    QLabel *label_11;

    void setupUi(QDialog *AddEventButton)
    {
        if (AddEventButton->objectName().isEmpty())
            AddEventButton->setObjectName(QStringLiteral("AddEventButton"));
        AddEventButton->resize(609, 657);
        AddEventButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(183, 233, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        layoutWidget = new QWidget(AddEventButton);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 534, 601));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 9, 6);
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font;
        font.setPointSize(17);
        label_13->setFont(font);
        label_13->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 2, 0, 1, 1);

        EndTime_Box = new QTimeEdit(layoutWidget);
        EndTime_Box->setObjectName(QStringLiteral("EndTime_Box"));
        EndTime_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);"));

        gridLayout->addWidget(EndTime_Box, 4, 2, 1, 1);

        label = new QLabel(layoutWidget);
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

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        StartTime_Box = new QTimeEdit(layoutWidget);
        StartTime_Box->setObjectName(QStringLiteral("StartTime_Box"));
        StartTime_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);"));

        gridLayout->addWidget(StartTime_Box, 3, 2, 1, 1);

        EndDate_Box = new QDateEdit(layoutWidget);
        EndDate_Box->setObjectName(QStringLiteral("EndDate_Box"));
        EndDate_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);\n"
""));
        EndDate_Box->setCalendarPopup(true);

        gridLayout->addWidget(EndDate_Box, 4, 1, 1, 1);

        Title_Box = new QTextEdit(layoutWidget);
        Title_Box->setObjectName(QStringLiteral("Title_Box"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Title_Box->sizePolicy().hasHeightForWidth());
        Title_Box->setSizePolicy(sizePolicy1);
        Title_Box->setMinimumSize(QSize(0, 26));
        Title_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));

        gridLayout->addWidget(Title_Box, 1, 1, 1, 2);

        Note_Box = new QTextEdit(layoutWidget);
        Note_Box->setObjectName(QStringLiteral("Note_Box"));
        Note_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));

        gridLayout->addWidget(Note_Box, 5, 1, 1, 2);

        Category_Box = new QComboBox(layoutWidget);
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->setObjectName(QStringLiteral("Category_Box"));
        Category_Box->setMinimumSize(QSize(0, 30));
        Category_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));

        gridLayout->addWidget(Category_Box, 2, 1, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        StartDate_Box = new QDateEdit(layoutWidget);
        StartDate_Box->setObjectName(QStringLiteral("StartDate_Box"));
        StartDate_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);\n"
""));
        StartDate_Box->setCalendarPopup(true);

        gridLayout->addWidget(StartDate_Box, 3, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 9px;\n"
"border: 1px solid black;\n"
"padding: 0 20px;\n"
"margin: 2px;"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 3);

        HaveLocationCheckBox = new QWidget(layoutWidget);
        HaveLocationCheckBox->setObjectName(QStringLiteral("HaveLocationCheckBox"));
        HaveLocationCheckBox->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Zip_Box = new QTextEdit(HaveLocationCheckBox);
        Zip_Box->setObjectName(QStringLiteral("Zip_Box"));
        Zip_Box->setGeometry(QRect(250, 130, 81, 26));
        Zip_Box->setMinimumSize(QSize(0, 26));
        Zip_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));
        label_6 = new QLabel(HaveLocationCheckBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 20, 121, 31));
        label_6->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Stste_Box = new QTextEdit(HaveLocationCheckBox);
        Stste_Box->setObjectName(QStringLiteral("Stste_Box"));
        Stste_Box->setGeometry(QRect(130, 130, 81, 26));
        Stste_Box->setMinimumSize(QSize(0, 26));
        Stste_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));
        label_8 = new QLabel(HaveLocationCheckBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 113, 61, 16));
        label_8->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        City_Box = new QTextEdit(HaveLocationCheckBox);
        City_Box->setObjectName(QStringLiteral("City_Box"));
        City_Box->setGeometry(QRect(10, 130, 101, 26));
        City_Box->setMinimumSize(QSize(0, 26));
        City_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));
        label_9 = new QLabel(HaveLocationCheckBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 113, 60, 16));
        label_9->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_7 = new QLabel(HaveLocationCheckBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 70, 111, 20));
        label_7->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Street_Box = new QTextEdit(HaveLocationCheckBox);
        Street_Box->setObjectName(QStringLiteral("Street_Box"));
        Street_Box->setGeometry(QRect(10, 88, 321, 26));
        Street_Box->setMinimumSize(QSize(0, 26));
        Street_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));
        label_10 = new QLabel(HaveLocationCheckBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(250, 113, 60, 16));
        label_10->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Location_Box = new QTextEdit(HaveLocationCheckBox);
        Location_Box->setObjectName(QStringLiteral("Location_Box"));
        Location_Box->setGeometry(QRect(10, 45, 281, 26));
        Location_Box->setMinimumSize(QSize(0, 26));
        Location_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255))"));
        comboBox = new QComboBox(HaveLocationCheckBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(330, 40, 181, 22));
        comboBox->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_11 = new QLabel(HaveLocationCheckBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(330, 20, 201, 20));

        gridLayout->addWidget(HaveLocationCheckBox, 6, 0, 1, 3);

        gridLayout->setRowMinimumHeight(0, 60);
        gridLayout->setRowMinimumHeight(1, 24);
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
        Category_Box->setItemText(0, QApplication::translate("AddEventButton", "Work", nullptr));
        Category_Box->setItemText(1, QApplication::translate("AddEventButton", "School", nullptr));
        Category_Box->setItemText(2, QApplication::translate("AddEventButton", "Exercise", nullptr));
        Category_Box->setItemText(3, QApplication::translate("AddEventButton", "Free Time", nullptr));
        Category_Box->setItemText(4, QApplication::translate("AddEventButton", "Appointment", nullptr));
        Category_Box->setItemText(5, QApplication::translate("AddEventButton", "Meetings", nullptr));
        Category_Box->setItemText(6, QApplication::translate("AddEventButton", "Study", nullptr));
        Category_Box->setItemText(7, QApplication::translate("AddEventButton", "Vacation", nullptr));

        label_2->setText(QApplication::translate("AddEventButton", "Start Time:", nullptr));
        label_4->setText(QApplication::translate("AddEventButton", "Note :", nullptr));
        label_3->setText(QApplication::translate("AddEventButton", "End Time:", nullptr));
        Zip_Box->setDocumentTitle(QString());
        Zip_Box->setPlaceholderText(QString());
        label_6->setText(QApplication::translate("AddEventButton", "Location Name :", nullptr));
        label_8->setText(QApplication::translate("AddEventButton", "City :", nullptr));
        label_9->setText(QApplication::translate("AddEventButton", "State :", nullptr));
        label_7->setText(QApplication::translate("AddEventButton", "Street :", nullptr));
        label_10->setText(QApplication::translate("AddEventButton", "Zip :", nullptr));
        label_11->setText(QApplication::translate("AddEventButton", "Load Recent Location:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEventButton: public Ui_AddEventButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEVENTBUTTON_H
