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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindowTabbed
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *OverViewTab;
    QGridLayout *gridLayout_2;
    QTableWidget *UpcomingEventsTable;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QWidget *TodoListsTab;
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
    QLabel *label_2;
    QWidget *TimeStatsTab;
    QPushButton *weeklyStats;
    QPushButton *monthlyStats;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QWidget *AddEventTab;
    QDateEdit *DateStart_Box;
    QLabel *AddEvent_CategoryLabel;
    QComboBox *Category_Box;
    QTimeEdit *TimeEnd_Box;
    QLabel *AddEvent_CityLabel;
    QTextEdit *Note_Box;
    QTimeEdit *TimeStart_Box;
    QFrame *frame;
    QVBoxLayout *AddEvent_FromToDateLabels;
    QLabel *AddEvent_FromDateTimeLabel;
    QLabel *AddEvent_ToDateTimeLabel;
    QDialogButtonBox *AddEvent_AcceptDeclineButton;
    QTextEdit *State_Box;
    QTextEdit *Street_Box;
    QLabel *AddEvent_TitleLabel;
    QTextEdit *Lcation_Box;
    QLabel *AddEvent_LocationNameLabel;
    QTextEdit *Zip_Box;
    QLabel *AddEvent_ZipCodeLabel;
    QDateEdit *DateEnd_Box;
    QTextEdit *City_Box;
    QLabel *AddEvent_StreetNameLabel;
    QLabel *AddEvent_StateLabel;
    QLabel *AddEvent_NotesLabel;
    QPushButton *AddEvent_SaveThisLocationButton;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *AddEvent_LoadSavedLabel;
    QComboBox *AddEvent_LoadSavedLocationComboBox;
    QLabel *label_3;
    QTextEdit *Title_Box;
    QWidget *AppSettingsTab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_29;
    QLabel *label_30;
    QComboBox *Settings_;
    QLabel *label_31;
    QFontComboBox *fontComboBox;
    QLabel *label_32;
    QTextEdit *textEdit_15;
    QPushButton *pushButton_10;

    void setupUi(QDialog *mainWindowTabbed)
    {
        if (mainWindowTabbed->objectName().isEmpty())
            mainWindowTabbed->setObjectName(QStringLiteral("mainWindowTabbed"));
        mainWindowTabbed->resize(687, 559);
        mainWindowTabbed->setFocusPolicy(Qt::NoFocus);
        mainWindowTabbed->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:1, y2:0, stop:1 rgba(88, 175, 213, 255));"));
        mainWindowTabbed->setModal(false);
        gridLayout = new QGridLayout(mainWindowTabbed);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(mainWindowTabbed);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font;
        font.setPointSize(15);
        font.setItalic(false);
        tabWidget->setFont(font);
        tabWidget->setMouseTracking(true);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(183, 233, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
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
        gridLayout_2 = new QGridLayout(OverViewTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        UpcomingEventsTable = new QTableWidget(OverViewTab);
        if (UpcomingEventsTable->columnCount() < 4)
            UpcomingEventsTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        UpcomingEventsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        UpcomingEventsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        UpcomingEventsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        UpcomingEventsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        UpcomingEventsTable->setObjectName(QStringLiteral("UpcomingEventsTable"));
        UpcomingEventsTable->setAutoFillBackground(true);
        UpcomingEventsTable->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(202, 202, 202, 255), stop:1 rgba(255, 255, 255, 255));"));
        UpcomingEventsTable->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        UpcomingEventsTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        UpcomingEventsTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        UpcomingEventsTable->setAutoScroll(false);
        UpcomingEventsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        UpcomingEventsTable->setProperty("showDropIndicator", QVariant(false));
        UpcomingEventsTable->setDragEnabled(false);
        UpcomingEventsTable->setAlternatingRowColors(true);
        UpcomingEventsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        UpcomingEventsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        UpcomingEventsTable->setShowGrid(true);
        UpcomingEventsTable->setSortingEnabled(true);
        UpcomingEventsTable->setCornerButtonEnabled(true);
        UpcomingEventsTable->horizontalHeader()->setCascadingSectionResizes(false);
        UpcomingEventsTable->horizontalHeader()->setDefaultSectionSize(78);
        UpcomingEventsTable->horizontalHeader()->setStretchLastSection(true);
        UpcomingEventsTable->verticalHeader()->setVisible(false);
        UpcomingEventsTable->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        UpcomingEventsTable->verticalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(UpcomingEventsTable, 1, 1, 1, 1);

        calendarWidget = new QCalendarWidget(OverViewTab);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setMouseTracking(true);
        calendarWidget->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);\n"
""));
        calendarWidget->setGridVisible(true);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);

        gridLayout_2->addWidget(calendarWidget, 0, 0, 2, 1);

        label = new QLabel(OverViewTab);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Papyrus"));
        font1.setPointSize(21);
        font1.setItalic(true);
        font1.setUnderline(true);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        tabWidget->addTab(OverViewTab, QString());
        TodoListsTab = new QWidget();
        TodoListsTab->setObjectName(QStringLiteral("TodoListsTab"));
        SelectTodoListTab = new QTabWidget(TodoListsTab);
        SelectTodoListTab->setObjectName(QStringLiteral("SelectTodoListTab"));
        SelectTodoListTab->setGeometry(QRect(0, 30, 451, 391));
        SelectTodoListTab->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        DayTodoList = new QWidget();
        DayTodoList->setObjectName(QStringLiteral("DayTodoList"));
        Day_TodoListViewWindow = new QListWidget(DayTodoList);
        Day_TodoListViewWindow->setObjectName(QStringLiteral("Day_TodoListViewWindow"));
        Day_TodoListViewWindow->setGeometry(QRect(20, 12, 411, 311));
        Day_DeleteTaskButton = new QPushButton(DayTodoList);
        Day_DeleteTaskButton->setObjectName(QStringLiteral("Day_DeleteTaskButton"));
        Day_DeleteTaskButton->setGeometry(QRect(20, 320, 161, 32));
        Day_AddTaskButton = new QPushButton(DayTodoList);
        Day_AddTaskButton->setObjectName(QStringLiteral("Day_AddTaskButton"));
        Day_AddTaskButton->setGeometry(QRect(340, 320, 91, 32));
        Day_UpdateTaskButton = new QPushButton(DayTodoList);
        Day_UpdateTaskButton->setObjectName(QStringLiteral("Day_UpdateTaskButton"));
        Day_UpdateTaskButton->setGeometry(QRect(180, 320, 161, 32));
        SelectTodoListTab->addTab(DayTodoList, QString());
        WeekTodoList = new QWidget();
        WeekTodoList->setObjectName(QStringLiteral("WeekTodoList"));
        Week_UpdateTask = new QPushButton(WeekTodoList);
        Week_UpdateTask->setObjectName(QStringLiteral("Week_UpdateTask"));
        Week_UpdateTask->setGeometry(QRect(180, 320, 161, 32));
        Week_TodoListViewWindow = new QListWidget(WeekTodoList);
        Week_TodoListViewWindow->setObjectName(QStringLiteral("Week_TodoListViewWindow"));
        Week_TodoListViewWindow->setGeometry(QRect(20, 12, 411, 311));
        Week_AddTask = new QPushButton(WeekTodoList);
        Week_AddTask->setObjectName(QStringLiteral("Week_AddTask"));
        Week_AddTask->setGeometry(QRect(340, 320, 91, 32));
        Week_DeleteTask = new QPushButton(WeekTodoList);
        Week_DeleteTask->setObjectName(QStringLiteral("Week_DeleteTask"));
        Week_DeleteTask->setGeometry(QRect(20, 320, 161, 32));
        SelectTodoListTab->addTab(WeekTodoList, QString());
        Week_TodoListViewWindow->raise();
        Week_DeleteTask->raise();
        Week_UpdateTask->raise();
        Week_AddTask->raise();
        MonthTodoList = new QWidget();
        MonthTodoList->setObjectName(QStringLiteral("MonthTodoList"));
        Month_UpdateTask = new QPushButton(MonthTodoList);
        Month_UpdateTask->setObjectName(QStringLiteral("Month_UpdateTask"));
        Month_UpdateTask->setGeometry(QRect(180, 321, 171, 31));
        Month_TodoListViewWindow = new QListWidget(MonthTodoList);
        Month_TodoListViewWindow->setObjectName(QStringLiteral("Month_TodoListViewWindow"));
        Month_TodoListViewWindow->setGeometry(QRect(20, 12, 411, 311));
        Month_AddTask = new QPushButton(MonthTodoList);
        Month_AddTask->setObjectName(QStringLiteral("Month_AddTask"));
        Month_AddTask->setGeometry(QRect(340, 321, 91, 31));
        Month_DeleteTask = new QPushButton(MonthTodoList);
        Month_DeleteTask->setObjectName(QStringLiteral("Month_DeleteTask"));
        Month_DeleteTask->setGeometry(QRect(20, 321, 171, 31));
        SelectTodoListTab->addTab(MonthTodoList, QString());
        Month_TodoListViewWindow->raise();
        Month_DeleteTask->raise();
        Month_UpdateTask->raise();
        Month_AddTask->raise();
        TodoListAcceptDeclineButtons = new QDialogButtonBox(TodoListsTab);
        TodoListAcceptDeclineButtons->setObjectName(QStringLiteral("TodoListAcceptDeclineButtons"));
        TodoListAcceptDeclineButtons->setGeometry(QRect(230, 420, 171, 32));
        TodoListAcceptDeclineButtons->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        TodoListAcceptDeclineButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        TodoListJumpToDateLabel = new QLabel(TodoListsTab);
        TodoListJumpToDateLabel->setObjectName(QStringLiteral("TodoListJumpToDateLabel"));
        TodoListJumpToDateLabel->setGeometry(QRect(460, 30, 60, 16));
        TodoListJumpToDateLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        TodoListJumpToDateSelector = new QDateEdit(TodoListsTab);
        TodoListJumpToDateSelector->setObjectName(QStringLiteral("TodoListJumpToDateSelector"));
        TodoListJumpToDateSelector->setGeometry(QRect(520, 30, 110, 24));
        TodoListJumpToDateSelector->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_2 = new QLabel(TodoListsTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, -10, 661, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Papyrus"));
        font2.setPointSize(25);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_2->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(TodoListsTab, QString());
        TimeStatsTab = new QWidget();
        TimeStatsTab->setObjectName(QStringLiteral("TimeStatsTab"));
        weeklyStats = new QPushButton(TimeStatsTab);
        weeklyStats->setObjectName(QStringLiteral("weeklyStats"));
        weeklyStats->setGeometry(QRect(160, 20, 113, 32));
        monthlyStats = new QPushButton(TimeStatsTab);
        monthlyStats->setObjectName(QStringLiteral("monthlyStats"));
        monthlyStats->setGeometry(QRect(370, 20, 113, 32));
        gridLayoutWidget = new QWidget(TimeStatsTab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 110, 621, 271));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(TimeStatsTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 60, 331, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Papyrus"));
        font3.setPointSize(22);
        label_4->setFont(font3);
        tabWidget->addTab(TimeStatsTab, QString());
        AddEventTab = new QWidget();
        AddEventTab->setObjectName(QStringLiteral("AddEventTab"));
        DateStart_Box = new QDateEdit(AddEventTab);
        DateStart_Box->setObjectName(QStringLiteral("DateStart_Box"));
        DateStart_Box->setGeometry(QRect(60, 70, 81, 24));
        DateStart_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);"));
        DateStart_Box->setDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        DateStart_Box->setCalendarPopup(true);
        AddEvent_CategoryLabel = new QLabel(AddEventTab);
        AddEvent_CategoryLabel->setObjectName(QStringLiteral("AddEvent_CategoryLabel"));
        AddEvent_CategoryLabel->setGeometry(QRect(330, 30, 71, 16));
        AddEvent_CategoryLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Category_Box = new QComboBox(AddEventTab);
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->addItem(QString());
        Category_Box->setObjectName(QStringLiteral("Category_Box"));
        Category_Box->setGeometry(QRect(400, 30, 221, 26));
        Category_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        TimeEnd_Box = new QTimeEdit(AddEventTab);
        TimeEnd_Box->setObjectName(QStringLiteral("TimeEnd_Box"));
        TimeEnd_Box->setGeometry(QRect(140, 110, 91, 24));
        TimeEnd_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        AddEvent_CityLabel = new QLabel(AddEventTab);
        AddEvent_CityLabel->setObjectName(QStringLiteral("AddEvent_CityLabel"));
        AddEvent_CityLabel->setGeometry(QRect(0, 330, 60, 16));
        QFont font4;
        font4.setPointSize(17);
        AddEvent_CityLabel->setFont(font4);
        AddEvent_CityLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Note_Box = new QTextEdit(AddEventTab);
        Note_Box->setObjectName(QStringLiteral("Note_Box"));
        Note_Box->setGeometry(QRect(340, 60, 281, 91));
        Note_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        TimeStart_Box = new QTimeEdit(AddEventTab);
        TimeStart_Box->setObjectName(QStringLiteral("TimeStart_Box"));
        TimeStart_Box->setGeometry(QRect(140, 70, 91, 24));
        TimeStart_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame = new QFrame(AddEventTab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 64, 70, 71));
        frame->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_FromToDateLabels = new QVBoxLayout(frame);
        AddEvent_FromToDateLabels->setObjectName(QStringLiteral("AddEvent_FromToDateLabels"));
        AddEvent_FromDateTimeLabel = new QLabel(frame);
        AddEvent_FromDateTimeLabel->setObjectName(QStringLiteral("AddEvent_FromDateTimeLabel"));
        AddEvent_FromDateTimeLabel->setFont(font4);
        AddEvent_FromDateTimeLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));

        AddEvent_FromToDateLabels->addWidget(AddEvent_FromDateTimeLabel);

        AddEvent_ToDateTimeLabel = new QLabel(frame);
        AddEvent_ToDateTimeLabel->setObjectName(QStringLiteral("AddEvent_ToDateTimeLabel"));
        AddEvent_ToDateTimeLabel->setFont(font4);
        AddEvent_ToDateTimeLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));

        AddEvent_FromToDateLabels->addWidget(AddEvent_ToDateTimeLabel);

        AddEvent_AcceptDeclineButton = new QDialogButtonBox(AddEventTab);
        AddEvent_AcceptDeclineButton->setObjectName(QStringLiteral("AddEvent_AcceptDeclineButton"));
        AddEvent_AcceptDeclineButton->setGeometry(QRect(240, 420, 164, 32));
        AddEvent_AcceptDeclineButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        AddEvent_AcceptDeclineButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        State_Box = new QTextEdit(AddEventTab);
        State_Box->setObjectName(QStringLiteral("State_Box"));
        State_Box->setGeometry(QRect(130, 350, 81, 21));
        State_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        Street_Box = new QTextEdit(AddEventTab);
        Street_Box->setObjectName(QStringLiteral("Street_Box"));
        Street_Box->setGeometry(QRect(0, 300, 321, 21));
        Street_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        AddEvent_TitleLabel = new QLabel(AddEventTab);
        AddEvent_TitleLabel->setObjectName(QStringLiteral("AddEvent_TitleLabel"));
        AddEvent_TitleLabel->setGeometry(QRect(0, 30, 60, 16));
        AddEvent_TitleLabel->setFont(font4);
        AddEvent_TitleLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Lcation_Box = new QTextEdit(AddEventTab);
        Lcation_Box->setObjectName(QStringLiteral("Lcation_Box"));
        Lcation_Box->setGeometry(QRect(0, 250, 321, 21));
        Lcation_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        AddEvent_LocationNameLabel = new QLabel(AddEventTab);
        AddEvent_LocationNameLabel->setObjectName(QStringLiteral("AddEvent_LocationNameLabel"));
        AddEvent_LocationNameLabel->setGeometry(QRect(0, 230, 131, 16));
        AddEvent_LocationNameLabel->setFont(font4);
        AddEvent_LocationNameLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        Zip_Box = new QTextEdit(AddEventTab);
        Zip_Box->setObjectName(QStringLiteral("Zip_Box"));
        Zip_Box->setGeometry(QRect(240, 350, 81, 21));
        Zip_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        AddEvent_ZipCodeLabel = new QLabel(AddEventTab);
        AddEvent_ZipCodeLabel->setObjectName(QStringLiteral("AddEvent_ZipCodeLabel"));
        AddEvent_ZipCodeLabel->setGeometry(QRect(240, 330, 60, 16));
        AddEvent_ZipCodeLabel->setFont(font4);
        AddEvent_ZipCodeLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        DateEnd_Box = new QDateEdit(AddEventTab);
        DateEnd_Box->setObjectName(QStringLiteral("DateEnd_Box"));
        DateEnd_Box->setGeometry(QRect(60, 110, 81, 24));
        DateEnd_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);"));
        DateEnd_Box->setDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        DateEnd_Box->setCalendarPopup(true);
        City_Box = new QTextEdit(AddEventTab);
        City_Box->setObjectName(QStringLiteral("City_Box"));
        City_Box->setGeometry(QRect(0, 350, 101, 21));
        City_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        AddEvent_StreetNameLabel = new QLabel(AddEventTab);
        AddEvent_StreetNameLabel->setObjectName(QStringLiteral("AddEvent_StreetNameLabel"));
        AddEvent_StreetNameLabel->setGeometry(QRect(0, 280, 60, 16));
        AddEvent_StreetNameLabel->setFont(font4);
        AddEvent_StreetNameLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0))"));
        AddEvent_StateLabel = new QLabel(AddEventTab);
        AddEvent_StateLabel->setObjectName(QStringLiteral("AddEvent_StateLabel"));
        AddEvent_StateLabel->setGeometry(QRect(130, 330, 60, 16));
        AddEvent_StateLabel->setFont(font4);
        AddEvent_StateLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_NotesLabel = new QLabel(AddEventTab);
        AddEvent_NotesLabel->setObjectName(QStringLiteral("AddEvent_NotesLabel"));
        AddEvent_NotesLabel->setGeometry(QRect(290, 60, 60, 16));
        AddEvent_NotesLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_SaveThisLocationButton = new QPushButton(AddEventTab);
        AddEvent_SaveThisLocationButton->setObjectName(QStringLiteral("AddEvent_SaveThisLocationButton"));
        AddEvent_SaveThisLocationButton->setGeometry(QRect(70, 380, 151, 32));
        AddEvent_SaveThisLocationButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2 = new QFrame(AddEventTab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 190, 484, 53));
        frame_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AddEvent_LoadSavedLabel = new QLabel(frame_2);
        AddEvent_LoadSavedLabel->setObjectName(QStringLiteral("AddEvent_LoadSavedLabel"));
        AddEvent_LoadSavedLabel->setFont(font4);
        AddEvent_LoadSavedLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));

        horizontalLayout->addWidget(AddEvent_LoadSavedLabel);

        AddEvent_LoadSavedLocationComboBox = new QComboBox(frame_2);
        AddEvent_LoadSavedLocationComboBox->setObjectName(QStringLiteral("AddEvent_LoadSavedLocationComboBox"));
        AddEvent_LoadSavedLocationComboBox->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        horizontalLayout->addWidget(AddEvent_LoadSavedLocationComboBox);

        label_3 = new QLabel(AddEventTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-1, -11, 661, 61));
        QFont font5;
        font5.setFamily(QStringLiteral("Papyrus"));
        font5.setPointSize(24);
        label_3->setFont(font5);
        label_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_3->setAlignment(Qt::AlignCenter);
        Title_Box = new QTextEdit(AddEventTab);
        Title_Box->setObjectName(QStringLiteral("Title_Box"));
        Title_Box->setGeometry(QRect(50, 30, 211, 21));
        Title_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        tabWidget->addTab(AddEventTab, QString());
        label_3->raise();
        DateStart_Box->raise();
        AddEvent_CategoryLabel->raise();
        Category_Box->raise();
        TimeEnd_Box->raise();
        AddEvent_CityLabel->raise();
        Note_Box->raise();
        TimeStart_Box->raise();
        frame->raise();
        AddEvent_AcceptDeclineButton->raise();
        State_Box->raise();
        Street_Box->raise();
        AddEvent_TitleLabel->raise();
        Lcation_Box->raise();
        AddEvent_LocationNameLabel->raise();
        Zip_Box->raise();
        AddEvent_ZipCodeLabel->raise();
        DateEnd_Box->raise();
        City_Box->raise();
        AddEvent_StreetNameLabel->raise();
        AddEvent_StateLabel->raise();
        AddEvent_NotesLabel->raise();
        AddEvent_SaveThisLocationButton->raise();
        frame_2->raise();
        Title_Box->raise();
        AppSettingsTab = new QWidget();
        AppSettingsTab->setObjectName(QStringLiteral("AppSettingsTab"));
        verticalLayout_2 = new QVBoxLayout(AppSettingsTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_29 = new QLabel(AppSettingsTab);
        label_29->setObjectName(QStringLiteral("label_29"));
        QFont font6;
        font6.setFamily(QStringLiteral("Papyrus"));
        font6.setPointSize(20);
        label_29->setFont(font6);
        label_29->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_29->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_29);

        label_30 = new QLabel(AppSettingsTab);
        label_30->setObjectName(QStringLiteral("label_30"));
        QFont font7;
        font7.setPointSize(15);
        label_30->setFont(font7);
        label_30->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));

        verticalLayout_2->addWidget(label_30);

        Settings_ = new QComboBox(AppSettingsTab);
        Settings_->setObjectName(QStringLiteral("Settings_"));

        verticalLayout_2->addWidget(Settings_);

        label_31 = new QLabel(AppSettingsTab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setFont(font7);
        label_31->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));

        verticalLayout_2->addWidget(label_31);

        fontComboBox = new QFontComboBox(AppSettingsTab);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout_2->addWidget(fontComboBox);

        label_32 = new QLabel(AppSettingsTab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setFont(font7);
        label_32->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));

        verticalLayout_2->addWidget(label_32);

        textEdit_15 = new QTextEdit(AppSettingsTab);
        textEdit_15->setObjectName(QStringLiteral("textEdit_15"));
        textEdit_15->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(202, 202, 202, 255), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout_2->addWidget(textEdit_15);

        pushButton_10 = new QPushButton(AppSettingsTab);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout_2->addWidget(pushButton_10);

        tabWidget->addTab(AppSettingsTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(mainWindowTabbed);

        tabWidget->setCurrentIndex(2);
        SelectTodoListTab->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(mainWindowTabbed);
    } // setupUi

    void retranslateUi(QDialog *mainWindowTabbed)
    {
        mainWindowTabbed->setWindowTitle(QApplication::translate("mainWindowTabbed", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = UpcomingEventsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("mainWindowTabbed", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = UpcomingEventsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("mainWindowTabbed", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = UpcomingEventsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("mainWindowTabbed", "Start Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = UpcomingEventsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("mainWindowTabbed", "End Time", nullptr));
        label->setText(QApplication::translate("mainWindowTabbed", "Upcoming Events ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(OverViewTab), QApplication::translate("mainWindowTabbed", "Overview", nullptr));
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
        label_2->setText(QApplication::translate("mainWindowTabbed", "Todo Lists", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TodoListsTab), QApplication::translate("mainWindowTabbed", "Todo Lists", nullptr));
        weeklyStats->setText(QApplication::translate("mainWindowTabbed", "Weekly", nullptr));
        monthlyStats->setText(QApplication::translate("mainWindowTabbed", "Monthly", nullptr));
        label_4->setText(QApplication::translate("mainWindowTabbed", "Activity Breakdown by Category", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TimeStatsTab), QApplication::translate("mainWindowTabbed", "Time Stats", nullptr));
        AddEvent_CategoryLabel->setText(QApplication::translate("mainWindowTabbed", "Category :", nullptr));
        Category_Box->setItemText(0, QApplication::translate("mainWindowTabbed", "Work", nullptr));
        Category_Box->setItemText(1, QApplication::translate("mainWindowTabbed", "School", nullptr));
        Category_Box->setItemText(2, QApplication::translate("mainWindowTabbed", "Exercise", nullptr));
        Category_Box->setItemText(3, QApplication::translate("mainWindowTabbed", "Free Time", nullptr));
        Category_Box->setItemText(4, QApplication::translate("mainWindowTabbed", "Appointment", nullptr));
        Category_Box->setItemText(5, QApplication::translate("mainWindowTabbed", "Meetings", nullptr));
        Category_Box->setItemText(6, QApplication::translate("mainWindowTabbed", "Study", nullptr));
        Category_Box->setItemText(7, QApplication::translate("mainWindowTabbed", "Vacation", nullptr));
        Category_Box->setItemText(8, QApplication::translate("mainWindowTabbed", "New Item", nullptr));

        AddEvent_CityLabel->setText(QApplication::translate("mainWindowTabbed", "City :", nullptr));
        AddEvent_FromDateTimeLabel->setText(QApplication::translate("mainWindowTabbed", "From :", nullptr));
        AddEvent_ToDateTimeLabel->setText(QApplication::translate("mainWindowTabbed", "    To :", nullptr));
        AddEvent_TitleLabel->setText(QApplication::translate("mainWindowTabbed", " Title :", nullptr));
        AddEvent_LocationNameLabel->setText(QApplication::translate("mainWindowTabbed", "Location Name :", nullptr));
        AddEvent_ZipCodeLabel->setText(QApplication::translate("mainWindowTabbed", "Zip :", nullptr));
        AddEvent_StreetNameLabel->setText(QApplication::translate("mainWindowTabbed", "Street :", nullptr));
        AddEvent_StateLabel->setText(QApplication::translate("mainWindowTabbed", "State :", nullptr));
        AddEvent_NotesLabel->setText(QApplication::translate("mainWindowTabbed", "Notes :", nullptr));
        AddEvent_SaveThisLocationButton->setText(QApplication::translate("mainWindowTabbed", "Save This Location", nullptr));
        AddEvent_LoadSavedLabel->setText(QApplication::translate("mainWindowTabbed", "Load a saved location :", nullptr));
        label_3->setText(QApplication::translate("mainWindowTabbed", "Add Event", nullptr));
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
