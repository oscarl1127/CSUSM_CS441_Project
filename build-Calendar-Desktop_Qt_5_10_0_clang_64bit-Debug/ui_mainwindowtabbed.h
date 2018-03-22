/********************************************************************************
** Form generated from reading UI file 'mainwindowtabbed.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWTABBED_H
#define UI_MAINWINDOWTABBED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindowTabbed
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *OverViewTab;
    QHBoxLayout *horizontalLayout_2;
    QCalendarWidget *calendarWidget;
    QWidget *TodoListsTab;
    QLabel *TodoList_PageTitile;
    QTabWidget *SelectTodoListTab;
    QWidget *DayTodoList;
    QListWidget *Day_TodoListViewWindow;
    QPushButton *Day_DeleteTaskButton;
    QPushButton *Day_AddTaskButton;
    QPushButton *Day_UpdateTaskButton;
    QWidget *WeekTodoList;
    QPushButton *Week_UpdateTask;
    QListWidget *Week_TodoListViewWindow;
    QPushButton *Week_AddTask;
    QPushButton *Week_DeleteTask;
    QWidget *MonthTodoList;
    QPushButton *Month_UpdateTask;
    QListWidget *Month_TodoListViewWindow;
    QPushButton *Month_AddTask;
    QPushButton *Month_DeleteTask;
    QDialogButtonBox *TodoListAcceptDeclineButtons;
    QLabel *TodoListJumpToDateLabel;
    QDateEdit *TodoListJumpToDateSelector;
    QWidget *TimeStatsTab;
    QWidget *AddEventTab;
    QSpinBox *AddEvent_SelectorNotifyMeTime;
    QDateEdit *DateStart_Box;
    QLabel *AddEvent_CategoryLabel;
    QComboBox *Category_Box;
    QTimeEdit *TimeEnd_Box;
    QLabel *AddEvent_CityLabel;
    QTextEdit *Note_Box;
    QLabel *AddEvent_NotifyMeLabelPt2;
    QTimeEdit *TimeStart_Box;
    QWidget *layoutWidget;
    QVBoxLayout *AddEvent_FromToDateLabels;
    QLabel *AddEvent_FromDateTimeLabel;
    QLabel *AddEvent_ToDateTimeLabel;
    QDialogButtonBox *AddEvent_AcceptDeclineButton;
    QTextEdit *State_Box;
    QTextEdit *Street_Box;
    QLabel *AddEvent_Title;
    QLabel *AddEvent_TitleLabel;
    QCheckBox *AddEvent_TravelTimeNotification;
    QTextEdit *Lcation_Box;
    QLabel *AddEvent_LocationNameLabel;
    QLabel *AddEvent_NotifyMeLabelPt1;
    QTextEdit *Title_Box;
    QTextEdit *Zip_Box;
    QLabel *AddEvent_ZipCodeLabel;
    QDateEdit *DateEnd_Box;
    QTextEdit *City_Box;
    QLabel *AddEvent_StreetNameLabel;
    QLabel *AddEvent_StateLabel;
    QLabel *AddEvent_NotesLabel;
    QPushButton *AddEvent_SaveThisLocationButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *AddEvent_LoadSavedLabel;
    QPushButton *AddEvent_LoadSavedLocationButton;
    QWidget *AppSettingsTab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_29;
    QComboBox *Settings_;
    QLabel *label_30;
    QLabel *label_31;
    QFontComboBox *fontComboBox;
    QLabel *label_32;
    QTextEdit *textEdit_15;
    QPushButton *pushButton_10;

    void setupUi(QDialog *mainWindowTabbed)
    {
        if (mainWindowTabbed->objectName().isEmpty())
            mainWindowTabbed->setObjectName(QStringLiteral("mainWindowTabbed"));
        mainWindowTabbed->resize(687, 502);
        mainWindowTabbed->setFocusPolicy(Qt::NoFocus);
        mainWindowTabbed->setModal(false);
        verticalLayout_3 = new QVBoxLayout(mainWindowTabbed);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(mainWindowTabbed);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(true);
        OverViewTab = new QWidget();
        OverViewTab->setObjectName(QStringLiteral("OverViewTab"));
        horizontalLayout_2 = new QHBoxLayout(OverViewTab);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        calendarWidget = new QCalendarWidget(OverViewTab);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        horizontalLayout_2->addWidget(calendarWidget);

        tabWidget->addTab(OverViewTab, QString());
        TodoListsTab = new QWidget();
        TodoListsTab->setObjectName(QStringLiteral("TodoListsTab"));
        TodoList_PageTitile = new QLabel(TodoListsTab);
        TodoList_PageTitile->setObjectName(QStringLiteral("TodoList_PageTitile"));
        TodoList_PageTitile->setGeometry(QRect(90, 0, 437, 22));
        SelectTodoListTab = new QTabWidget(TodoListsTab);
        SelectTodoListTab->setObjectName(QStringLiteral("SelectTodoListTab"));
        SelectTodoListTab->setGeometry(QRect(0, 20, 431, 411));
        DayTodoList = new QWidget();
        DayTodoList->setObjectName(QStringLiteral("DayTodoList"));
        Day_TodoListViewWindow = new QListWidget(DayTodoList);
        Day_TodoListViewWindow->setObjectName(QStringLiteral("Day_TodoListViewWindow"));
        Day_TodoListViewWindow->setGeometry(QRect(20, 12, 391, 331));
        Day_DeleteTaskButton = new QPushButton(DayTodoList);
        Day_DeleteTaskButton->setObjectName(QStringLiteral("Day_DeleteTaskButton"));
        Day_DeleteTaskButton->setGeometry(QRect(20, 350, 161, 32));
        Day_AddTaskButton = new QPushButton(DayTodoList);
        Day_AddTaskButton->setObjectName(QStringLiteral("Day_AddTaskButton"));
        Day_AddTaskButton->setGeometry(QRect(320, 350, 91, 32));
        Day_UpdateTaskButton = new QPushButton(DayTodoList);
        Day_UpdateTaskButton->setObjectName(QStringLiteral("Day_UpdateTaskButton"));
        Day_UpdateTaskButton->setGeometry(QRect(170, 350, 161, 32));
        SelectTodoListTab->addTab(DayTodoList, QString());
        WeekTodoList = new QWidget();
        WeekTodoList->setObjectName(QStringLiteral("WeekTodoList"));
        Week_UpdateTask = new QPushButton(WeekTodoList);
        Week_UpdateTask->setObjectName(QStringLiteral("Week_UpdateTask"));
        Week_UpdateTask->setGeometry(QRect(170, 350, 161, 32));
        Week_TodoListViewWindow = new QListWidget(WeekTodoList);
        Week_TodoListViewWindow->setObjectName(QStringLiteral("Week_TodoListViewWindow"));
        Week_TodoListViewWindow->setGeometry(QRect(20, 12, 391, 331));
        Week_AddTask = new QPushButton(WeekTodoList);
        Week_AddTask->setObjectName(QStringLiteral("Week_AddTask"));
        Week_AddTask->setGeometry(QRect(320, 350, 91, 32));
        Week_DeleteTask = new QPushButton(WeekTodoList);
        Week_DeleteTask->setObjectName(QStringLiteral("Week_DeleteTask"));
        Week_DeleteTask->setGeometry(QRect(20, 350, 161, 32));
        SelectTodoListTab->addTab(WeekTodoList, QString());
        MonthTodoList = new QWidget();
        MonthTodoList->setObjectName(QStringLiteral("MonthTodoList"));
        Month_UpdateTask = new QPushButton(MonthTodoList);
        Month_UpdateTask->setObjectName(QStringLiteral("Month_UpdateTask"));
        Month_UpdateTask->setGeometry(QRect(170, 350, 161, 32));
        Month_TodoListViewWindow = new QListWidget(MonthTodoList);
        Month_TodoListViewWindow->setObjectName(QStringLiteral("Month_TodoListViewWindow"));
        Month_TodoListViewWindow->setGeometry(QRect(20, 12, 391, 331));
        Month_AddTask = new QPushButton(MonthTodoList);
        Month_AddTask->setObjectName(QStringLiteral("Month_AddTask"));
        Month_AddTask->setGeometry(QRect(320, 350, 91, 32));
        Month_DeleteTask = new QPushButton(MonthTodoList);
        Month_DeleteTask->setObjectName(QStringLiteral("Month_DeleteTask"));
        Month_DeleteTask->setGeometry(QRect(20, 350, 161, 32));
        SelectTodoListTab->addTab(MonthTodoList, QString());
        TodoListAcceptDeclineButtons = new QDialogButtonBox(TodoListsTab);
        TodoListAcceptDeclineButtons->setObjectName(QStringLiteral("TodoListAcceptDeclineButtons"));
        TodoListAcceptDeclineButtons->setGeometry(QRect(230, 430, 171, 32));
        TodoListAcceptDeclineButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        TodoListJumpToDateLabel = new QLabel(TodoListsTab);
        TodoListJumpToDateLabel->setObjectName(QStringLiteral("TodoListJumpToDateLabel"));
        TodoListJumpToDateLabel->setGeometry(QRect(450, 30, 60, 16));
        TodoListJumpToDateSelector = new QDateEdit(TodoListsTab);
        TodoListJumpToDateSelector->setObjectName(QStringLiteral("TodoListJumpToDateSelector"));
        TodoListJumpToDateSelector->setGeometry(QRect(510, 30, 110, 24));
        tabWidget->addTab(TodoListsTab, QString());
        TimeStatsTab = new QWidget();
        TimeStatsTab->setObjectName(QStringLiteral("TimeStatsTab"));
        tabWidget->addTab(TimeStatsTab, QString());
        AddEventTab = new QWidget();
        AddEventTab->setObjectName(QStringLiteral("AddEventTab"));
        AddEvent_SelectorNotifyMeTime = new QSpinBox(AddEventTab);
        AddEvent_SelectorNotifyMeTime->setObjectName(QStringLiteral("AddEvent_SelectorNotifyMeTime"));
        AddEvent_SelectorNotifyMeTime->setGeometry(QRect(400, 183, 48, 31));
        DateStart_Box = new QDateEdit(AddEventTab);
        DateStart_Box->setObjectName(QStringLiteral("DateStart_Box"));
        DateStart_Box->setGeometry(QRect(50, 73, 81, 24));
        AddEvent_CategoryLabel = new QLabel(AddEventTab);
        AddEvent_CategoryLabel->setObjectName(QStringLiteral("AddEvent_CategoryLabel"));
        AddEvent_CategoryLabel->setGeometry(QRect(330, 30, 71, 16));
        Category_Box = new QComboBox(AddEventTab);
        Category_Box->setObjectName(QStringLiteral("Category_Box"));
        Category_Box->setGeometry(QRect(400, 30, 221, 26));
        TimeEnd_Box = new QTimeEdit(AddEventTab);
        TimeEnd_Box->setObjectName(QStringLiteral("TimeEnd_Box"));
        TimeEnd_Box->setGeometry(QRect(140, 100, 91, 24));
        AddEvent_CityLabel = new QLabel(AddEventTab);
        AddEvent_CityLabel->setObjectName(QStringLiteral("AddEvent_CityLabel"));
        AddEvent_CityLabel->setGeometry(QRect(0, 330, 60, 16));
        Note_Box = new QTextEdit(AddEventTab);
        Note_Box->setObjectName(QStringLiteral("Note_Box"));
        Note_Box->setGeometry(QRect(340, 60, 281, 91));
        AddEvent_NotifyMeLabelPt2 = new QLabel(AddEventTab);
        AddEvent_NotifyMeLabelPt2->setObjectName(QStringLiteral("AddEvent_NotifyMeLabelPt2"));
        AddEvent_NotifyMeLabelPt2->setGeometry(QRect(450, 190, 191, 16));
        TimeStart_Box = new QTimeEdit(AddEventTab);
        TimeStart_Box->setObjectName(QStringLiteral("TimeStart_Box"));
        TimeStart_Box->setGeometry(QRect(140, 73, 91, 24));
        layoutWidget = new QWidget(AddEventTab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 70, 43, 51));
        AddEvent_FromToDateLabels = new QVBoxLayout(layoutWidget);
        AddEvent_FromToDateLabels->setObjectName(QStringLiteral("AddEvent_FromToDateLabels"));
        AddEvent_FromToDateLabels->setContentsMargins(0, 0, 0, 0);
        AddEvent_FromDateTimeLabel = new QLabel(layoutWidget);
        AddEvent_FromDateTimeLabel->setObjectName(QStringLiteral("AddEvent_FromDateTimeLabel"));

        AddEvent_FromToDateLabels->addWidget(AddEvent_FromDateTimeLabel);

        AddEvent_ToDateTimeLabel = new QLabel(layoutWidget);
        AddEvent_ToDateTimeLabel->setObjectName(QStringLiteral("AddEvent_ToDateTimeLabel"));

        AddEvent_FromToDateLabels->addWidget(AddEvent_ToDateTimeLabel);

        AddEvent_AcceptDeclineButton = new QDialogButtonBox(AddEventTab);
        AddEvent_AcceptDeclineButton->setObjectName(QStringLiteral("AddEvent_AcceptDeclineButton"));
        AddEvent_AcceptDeclineButton->setGeometry(QRect(240, 420, 164, 32));
        AddEvent_AcceptDeclineButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        State_Box = new QTextEdit(AddEventTab);
        State_Box->setObjectName(QStringLiteral("State_Box"));
        State_Box->setGeometry(QRect(130, 350, 81, 21));
        Street_Box = new QTextEdit(AddEventTab);
        Street_Box->setObjectName(QStringLiteral("Street_Box"));
        Street_Box->setGeometry(QRect(0, 300, 321, 21));
        AddEvent_Title = new QLabel(AddEventTab);
        AddEvent_Title->setObjectName(QStringLiteral("AddEvent_Title"));
        AddEvent_Title->setGeometry(QRect(270, 0, 91, 21));
        AddEvent_TitleLabel = new QLabel(AddEventTab);
        AddEvent_TitleLabel->setObjectName(QStringLiteral("AddEvent_TitleLabel"));
        AddEvent_TitleLabel->setGeometry(QRect(0, 30, 60, 16));
        AddEvent_TravelTimeNotification = new QCheckBox(AddEventTab);
        AddEvent_TravelTimeNotification->setObjectName(QStringLiteral("AddEvent_TravelTimeNotification"));
        AddEvent_TravelTimeNotification->setGeometry(QRect(340, 160, 161, 20));
        Lcation_Box = new QTextEdit(AddEventTab);
        Lcation_Box->setObjectName(QStringLiteral("Lcation_Box"));
        Lcation_Box->setGeometry(QRect(0, 250, 321, 21));
        AddEvent_LocationNameLabel = new QLabel(AddEventTab);
        AddEvent_LocationNameLabel->setObjectName(QStringLiteral("AddEvent_LocationNameLabel"));
        AddEvent_LocationNameLabel->setGeometry(QRect(0, 230, 101, 16));
        AddEvent_NotifyMeLabelPt1 = new QLabel(AddEventTab);
        AddEvent_NotifyMeLabelPt1->setObjectName(QStringLiteral("AddEvent_NotifyMeLabelPt1"));
        AddEvent_NotifyMeLabelPt1->setGeometry(QRect(340, 190, 60, 16));
        Title_Box = new QTextEdit(AddEventTab);
        Title_Box->setObjectName(QStringLiteral("Title_Box"));
        Title_Box->setGeometry(QRect(50, 30, 271, 21));
        Zip_Box = new QTextEdit(AddEventTab);
        Zip_Box->setObjectName(QStringLiteral("Zip_Box"));
        Zip_Box->setGeometry(QRect(240, 350, 81, 21));
        AddEvent_ZipCodeLabel = new QLabel(AddEventTab);
        AddEvent_ZipCodeLabel->setObjectName(QStringLiteral("AddEvent_ZipCodeLabel"));
        AddEvent_ZipCodeLabel->setGeometry(QRect(240, 330, 60, 16));
        DateEnd_Box = new QDateEdit(AddEventTab);
        DateEnd_Box->setObjectName(QStringLiteral("DateEnd_Box"));
        DateEnd_Box->setGeometry(QRect(50, 100, 81, 24));
        City_Box = new QTextEdit(AddEventTab);
        City_Box->setObjectName(QStringLiteral("City_Box"));
        City_Box->setGeometry(QRect(0, 350, 101, 21));
        AddEvent_StreetNameLabel = new QLabel(AddEventTab);
        AddEvent_StreetNameLabel->setObjectName(QStringLiteral("AddEvent_StreetNameLabel"));
        AddEvent_StreetNameLabel->setGeometry(QRect(0, 280, 60, 16));
        AddEvent_StateLabel = new QLabel(AddEventTab);
        AddEvent_StateLabel->setObjectName(QStringLiteral("AddEvent_StateLabel"));
        AddEvent_StateLabel->setGeometry(QRect(130, 330, 60, 16));
        AddEvent_NotesLabel = new QLabel(AddEventTab);
        AddEvent_NotesLabel->setObjectName(QStringLiteral("AddEvent_NotesLabel"));
        AddEvent_NotesLabel->setGeometry(QRect(290, 60, 60, 16));
        AddEvent_SaveThisLocationButton = new QPushButton(AddEventTab);
        AddEvent_SaveThisLocationButton->setObjectName(QStringLiteral("AddEvent_SaveThisLocationButton"));
        AddEvent_SaveThisLocationButton->setGeometry(QRect(70, 380, 151, 32));
        layoutWidget_2 = new QWidget(AddEventTab);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 200, 191, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AddEvent_LoadSavedLabel = new QLabel(layoutWidget_2);
        AddEvent_LoadSavedLabel->setObjectName(QStringLiteral("AddEvent_LoadSavedLabel"));

        horizontalLayout->addWidget(AddEvent_LoadSavedLabel);

        AddEvent_LoadSavedLocationButton = new QPushButton(layoutWidget_2);
        AddEvent_LoadSavedLocationButton->setObjectName(QStringLiteral("AddEvent_LoadSavedLocationButton"));

        horizontalLayout->addWidget(AddEvent_LoadSavedLocationButton);

        tabWidget->addTab(AddEventTab, QString());
        AppSettingsTab = new QWidget();
        AppSettingsTab->setObjectName(QStringLiteral("AppSettingsTab"));
        verticalLayout_2 = new QVBoxLayout(AppSettingsTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_29 = new QLabel(AppSettingsTab);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_2->addWidget(label_29);

        Settings_ = new QComboBox(AppSettingsTab);
        Settings_->setObjectName(QStringLiteral("Settings_"));

        verticalLayout_2->addWidget(Settings_);

        label_30 = new QLabel(AppSettingsTab);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_2->addWidget(label_30);

        label_31 = new QLabel(AppSettingsTab);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_2->addWidget(label_31);

        fontComboBox = new QFontComboBox(AppSettingsTab);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        verticalLayout_2->addWidget(fontComboBox);

        label_32 = new QLabel(AppSettingsTab);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout_2->addWidget(label_32);

        textEdit_15 = new QTextEdit(AppSettingsTab);
        textEdit_15->setObjectName(QStringLiteral("textEdit_15"));

        verticalLayout_2->addWidget(textEdit_15);

        pushButton_10 = new QPushButton(AppSettingsTab);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout_2->addWidget(pushButton_10);

        tabWidget->addTab(AppSettingsTab, QString());

        verticalLayout_3->addWidget(tabWidget);


        retranslateUi(mainWindowTabbed);

        tabWidget->setCurrentIndex(3);
        SelectTodoListTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainWindowTabbed);
    } // setupUi

    void retranslateUi(QDialog *mainWindowTabbed)
    {
        mainWindowTabbed->setWindowTitle(QApplication::translate("mainWindowTabbed", "Dialog", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(OverViewTab), QApplication::translate("mainWindowTabbed", "Overview", nullptr));
        TodoList_PageTitile->setText(QApplication::translate("mainWindowTabbed", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Todo Lists</span></p></body></html>", nullptr));
        Day_DeleteTaskButton->setText(QApplication::translate("mainWindowTabbed", "Delete selected task", nullptr));
        Day_AddTaskButton->setText(QApplication::translate("mainWindowTabbed", "Add task", nullptr));
        Day_UpdateTaskButton->setText(QApplication::translate("mainWindowTabbed", "Update selected task", nullptr));
        SelectTodoListTab->setTabText(SelectTodoListTab->indexOf(DayTodoList), QApplication::translate("mainWindowTabbed", "Day", nullptr));
        Week_UpdateTask->setText(QApplication::translate("mainWindowTabbed", "Update selected task", nullptr));
        Week_AddTask->setText(QApplication::translate("mainWindowTabbed", "Add task", nullptr));
        Week_DeleteTask->setText(QApplication::translate("mainWindowTabbed", "Delete selected task", nullptr));
        SelectTodoListTab->setTabText(SelectTodoListTab->indexOf(WeekTodoList), QApplication::translate("mainWindowTabbed", "Week", nullptr));
        Month_UpdateTask->setText(QApplication::translate("mainWindowTabbed", "Update selected task", nullptr));
        Month_AddTask->setText(QApplication::translate("mainWindowTabbed", "Add task", nullptr));
        Month_DeleteTask->setText(QApplication::translate("mainWindowTabbed", "Delete selected task", nullptr));
        SelectTodoListTab->setTabText(SelectTodoListTab->indexOf(MonthTodoList), QApplication::translate("mainWindowTabbed", "Month", nullptr));
        TodoListJumpToDateLabel->setText(QApplication::translate("mainWindowTabbed", "Jump to :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TodoListsTab), QApplication::translate("mainWindowTabbed", "Todo Lists", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TimeStatsTab), QApplication::translate("mainWindowTabbed", "Time Stats", nullptr));
        AddEvent_CategoryLabel->setText(QApplication::translate("mainWindowTabbed", "Category :", nullptr));
        AddEvent_CityLabel->setText(QApplication::translate("mainWindowTabbed", "City :", nullptr));
        AddEvent_NotifyMeLabelPt2->setText(QApplication::translate("mainWindowTabbed", "minutes before i have to leave", nullptr));
        AddEvent_FromDateTimeLabel->setText(QApplication::translate("mainWindowTabbed", "From :", nullptr));
        AddEvent_ToDateTimeLabel->setText(QApplication::translate("mainWindowTabbed", "    To :", nullptr));
        AddEvent_Title->setText(QApplication::translate("mainWindowTabbed", "<html><head/><body><p><span style=\" font-size:18pt;\">Add Event</span></p></body></html>", nullptr));
        AddEvent_TitleLabel->setText(QApplication::translate("mainWindowTabbed", " Title :", nullptr));
        AddEvent_TravelTimeNotification->setText(QApplication::translate("mainWindowTabbed", "Travel time notification", nullptr));
        AddEvent_LocationNameLabel->setText(QApplication::translate("mainWindowTabbed", "Location Name :", nullptr));
        AddEvent_NotifyMeLabelPt1->setText(QApplication::translate("mainWindowTabbed", "Notify me ", nullptr));
        AddEvent_ZipCodeLabel->setText(QApplication::translate("mainWindowTabbed", "Zip :", nullptr));
        AddEvent_StreetNameLabel->setText(QApplication::translate("mainWindowTabbed", "Street :", nullptr));
        AddEvent_StateLabel->setText(QApplication::translate("mainWindowTabbed", "State :", nullptr));
        AddEvent_NotesLabel->setText(QApplication::translate("mainWindowTabbed", "Notes :", nullptr));
        AddEvent_SaveThisLocationButton->setText(QApplication::translate("mainWindowTabbed", "Save This Location", nullptr));
        AddEvent_LoadSavedLabel->setText(QApplication::translate("mainWindowTabbed", "Load :", nullptr));
        AddEvent_LoadSavedLocationButton->setText(QApplication::translate("mainWindowTabbed", "Saved Locations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(AddEventTab), QApplication::translate("mainWindowTabbed", "Add Event", nullptr));
        label_29->setText(QApplication::translate("mainWindowTabbed", "App Settings", nullptr));
        label_30->setText(QApplication::translate("mainWindowTabbed", "Display Theme :", nullptr));
        label_31->setText(QApplication::translate("mainWindowTabbed", "Input Font :", nullptr));
        label_32->setText(QApplication::translate("mainWindowTabbed", "Font Preview :", nullptr));
        pushButton_10->setText(QApplication::translate("mainWindowTabbed", "Apply", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(AppSettingsTab), QApplication::translate("mainWindowTabbed", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindowTabbed: public Ui_mainWindowTabbed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWTABBED_H
