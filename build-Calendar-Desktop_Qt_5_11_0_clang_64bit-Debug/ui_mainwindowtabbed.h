/********************************************************************************
** Form generated from reading UI file 'mainwindowtabbed.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWTABBED_H
#define UI_MAINWINDOWTABBED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTableWidget *UpcomingEventsTable;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QWidget *TodoListsTab;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_5;
    QDialogButtonBox *TodoListAcceptDeclineButtons;
    QSpacerItem *horizontalSpacer;
    QPushButton *Month_AddTask;
    QPushButton *Month_DeleteTask;
    QListWidget *Month_TodoListViewWindow;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QWidget *TimeStatsTab;
    QWidget *widget1;
    QGridLayout *gridLayout_4;
    QPushButton *weeklyStats;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QPushButton *monthlyStats;
    QWidget *AddEventTab;
    QFrame *frame;
    QVBoxLayout *AddEvent_FromToDateLabels;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_10;
    QLabel *label_3;
    QGridLayout *gridLayout_6;
    QDateEdit *DateEnd_Box;
    QLabel *AddEvent_NotesLabel;
    QLabel *AddEvent_TitleLabel;
    QDateEdit *DateStart_Box;
    QLabel *AddEvent_CategoryLabel;
    QLabel *AddEvent_FromDateTimeLabel;
    QLabel *AddEvent_ToDateTimeLabel;
    QTimeEdit *TimeStart_Box;
    QTimeEdit *TimeEnd_Box;
    QComboBox *Category_Box;
    QTextEdit *Title_Box;
    QTextEdit *Note_Box;
    QDialogButtonBox *AddEvent_AcceptDeclineButton;
    QGridLayout *gridLayout_9;
    QLabel *AddEvent_StreetNameLabel;
    QSpacerItem *verticalSpacer;
    QTextEdit *State_Box;
    QLabel *AddEvent_ZipCodeLabel;
    QTextEdit *Street_Box;
    QTextEdit *Lcation_Box;
    QPushButton *AddEvent_SaveThisLocationButton;
    QLabel *AddEvent_StateLabel;
    QTextEdit *City_Box;
    QTextEdit *Zip_Box;
    QLabel *AddEvent_CityLabel;
    QLabel *AddEvent_LocationNameLabel;
    QLabel *AddEvent_LoadSavedLabel;
    QComboBox *AddEvent_LoadSavedLocationComboBox;
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
        mainWindowTabbed->resize(703, 560);
        mainWindowTabbed->setFocusPolicy(Qt::NoFocus);
        mainWindowTabbed->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:1, y2:0, stop:1 rgba(99, 197, 240, 255));"));
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
        widget = new QWidget(OverViewTab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 651, 501));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 5, 0, 0);
        UpcomingEventsTable = new QTableWidget(widget);
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
        UpcomingEventsTable->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255));"));
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

        calendarWidget = new QCalendarWidget(widget);
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

        label = new QLabel(widget);
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

        gridLayout_2->setColumnMinimumWidth(0, 330);
        tabWidget->addTab(OverViewTab, QString());
        TodoListsTab = new QWidget();
        TodoListsTab->setObjectName(QStringLiteral("TodoListsTab"));
        gridLayoutWidget_2 = new QWidget(TodoListsTab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 641, 505));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 1, 0, 0);
        TodoListAcceptDeclineButtons = new QDialogButtonBox(gridLayoutWidget_2);
        TodoListAcceptDeclineButtons->setObjectName(QStringLiteral("TodoListAcceptDeclineButtons"));
        TodoListAcceptDeclineButtons->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255));"));
        TodoListAcceptDeclineButtons->setStandardButtons(QDialogButtonBox::Save);
        TodoListAcceptDeclineButtons->setCenterButtons(true);

        gridLayout_5->addWidget(TodoListAcceptDeclineButtons, 3, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 3, 1, 1);

        Month_AddTask = new QPushButton(gridLayoutWidget_2);
        Month_AddTask->setObjectName(QStringLiteral("Month_AddTask"));
        Month_AddTask->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_5->addWidget(Month_AddTask, 2, 1, 1, 1);

        Month_DeleteTask = new QPushButton(gridLayoutWidget_2);
        Month_DeleteTask->setObjectName(QStringLiteral("Month_DeleteTask"));
        Month_DeleteTask->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_5->addWidget(Month_DeleteTask, 2, 2, 1, 1);

        Month_TodoListViewWindow = new QListWidget(gridLayoutWidget_2);
        Month_TodoListViewWindow->setObjectName(QStringLiteral("Month_TodoListViewWindow"));
        Month_TodoListViewWindow->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_5->addWidget(Month_TodoListViewWindow, 1, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Papyrus"));
        font2.setPointSize(36);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 4);

        gridLayout_5->setRowMinimumHeight(1, 380);
        tabWidget->addTab(TodoListsTab, QString());
        TimeStatsTab = new QWidget();
        TimeStatsTab->setObjectName(QStringLiteral("TimeStatsTab"));
        widget1 = new QWidget(TimeStatsTab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 10, 631, 489));
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        weeklyStats = new QPushButton(widget1);
        weeklyStats->setObjectName(QStringLiteral("weeklyStats"));
        weeklyStats->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 9px;\n"
"border: 1px solid black;\n"
"padding: 0 8px;\n"
"margin: 2px;"));
        weeklyStats->setIconSize(QSize(16, 16));

        gridLayout_4->addWidget(weeklyStats, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));

        gridLayout_4->addLayout(gridLayout_3, 3, 0, 1, 2);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font3;
        font3.setFamily(QStringLiteral("Papyrus"));
        font3.setPointSize(43);
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_4, 1, 0, 1, 2);

        monthlyStats = new QPushButton(widget1);
        monthlyStats->setObjectName(QStringLiteral("monthlyStats"));
        monthlyStats->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 9px;\n"
"border: 1px solid black;\n"
"padding: 0 8px;\n"
"margin: 2px;"));

        gridLayout_4->addWidget(monthlyStats, 2, 1, 1, 1);

        gridLayout_4->setRowMinimumHeight(3, 370);
        tabWidget->addTab(TimeStatsTab, QString());
        AddEventTab = new QWidget();
        AddEventTab->setObjectName(QStringLiteral("AddEventTab"));
        frame = new QFrame(AddEventTab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 64, 70, 71));
        frame->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_FromToDateLabels = new QVBoxLayout(frame);
        AddEvent_FromToDateLabels->setObjectName(QStringLiteral("AddEvent_FromToDateLabels"));
        gridLayoutWidget_5 = new QWidget(AddEventTab);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(0, 0, 675, 501));
        gridLayout_10 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font4;
        font4.setFamily(QStringLiteral("Papyrus"));
        font4.setPointSize(35);
        label_3->setFont(font4);
        label_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_3, 0, 0, 1, 2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        DateEnd_Box = new QDateEdit(gridLayoutWidget_5);
        DateEnd_Box->setObjectName(QStringLiteral("DateEnd_Box"));
        DateEnd_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);"));
        DateEnd_Box->setDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        DateEnd_Box->setCalendarPopup(true);

        gridLayout_6->addWidget(DateEnd_Box, 4, 1, 1, 1);

        AddEvent_NotesLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_NotesLabel->setObjectName(QStringLiteral("AddEvent_NotesLabel"));
        QFont font5;
        font5.setPointSize(17);
        AddEvent_NotesLabel->setFont(font5);
        AddEvent_NotesLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_NotesLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_6->addWidget(AddEvent_NotesLabel, 5, 0, 1, 1);

        AddEvent_TitleLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_TitleLabel->setObjectName(QStringLiteral("AddEvent_TitleLabel"));
        AddEvent_TitleLabel->setFont(font5);
        AddEvent_TitleLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_TitleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(AddEvent_TitleLabel, 1, 0, 1, 1);

        DateStart_Box = new QDateEdit(gridLayoutWidget_5);
        DateStart_Box->setObjectName(QStringLiteral("DateStart_Box"));
        DateStart_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);"));
        DateStart_Box->setDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        DateStart_Box->setCalendarPopup(true);

        gridLayout_6->addWidget(DateStart_Box, 3, 1, 1, 1);

        AddEvent_CategoryLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_CategoryLabel->setObjectName(QStringLiteral("AddEvent_CategoryLabel"));
        QFont font6;
        font6.setPointSize(16);
        AddEvent_CategoryLabel->setFont(font6);
        AddEvent_CategoryLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));

        gridLayout_6->addWidget(AddEvent_CategoryLabel, 2, 0, 1, 1);

        AddEvent_FromDateTimeLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_FromDateTimeLabel->setObjectName(QStringLiteral("AddEvent_FromDateTimeLabel"));
        AddEvent_FromDateTimeLabel->setFont(font5);
        AddEvent_FromDateTimeLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_FromDateTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(AddEvent_FromDateTimeLabel, 3, 0, 1, 1);

        AddEvent_ToDateTimeLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_ToDateTimeLabel->setObjectName(QStringLiteral("AddEvent_ToDateTimeLabel"));
        AddEvent_ToDateTimeLabel->setFont(font5);
        AddEvent_ToDateTimeLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_ToDateTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(AddEvent_ToDateTimeLabel, 4, 0, 1, 1);

        TimeStart_Box = new QTimeEdit(gridLayoutWidget_5);
        TimeStart_Box->setObjectName(QStringLiteral("TimeStart_Box"));
        TimeStart_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);"));

        gridLayout_6->addWidget(TimeStart_Box, 3, 2, 1, 1);

        TimeEnd_Box = new QTimeEdit(gridLayoutWidget_5);
        TimeEnd_Box->setObjectName(QStringLiteral("TimeEnd_Box"));
        TimeEnd_Box->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(173, 173, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(52, 141, 180);\n"
"alternate-background-color: rgb(102, 102, 102);"));

        gridLayout_6->addWidget(TimeEnd_Box, 4, 2, 1, 1);

        Category_Box = new QComboBox(gridLayoutWidget_5);
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
        QFont font7;
        font7.setPointSize(15);
        Category_Box->setFont(font7);
        Category_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_6->addWidget(Category_Box, 2, 1, 1, 3);

        Title_Box = new QTextEdit(gridLayoutWidget_5);
        Title_Box->setObjectName(QStringLiteral("Title_Box"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Title_Box->sizePolicy().hasHeightForWidth());
        Title_Box->setSizePolicy(sizePolicy);
        Title_Box->setMaximumSize(QSize(16777215, 26));
        Title_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_6->addWidget(Title_Box, 1, 1, 1, 3);

        Note_Box = new QTextEdit(gridLayoutWidget_5);
        Note_Box->setObjectName(QStringLiteral("Note_Box"));
        Note_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_6->addWidget(Note_Box, 5, 1, 1, 3);


        gridLayout_10->addLayout(gridLayout_6, 2, 0, 1, 1);

        AddEvent_AcceptDeclineButton = new QDialogButtonBox(gridLayoutWidget_5);
        AddEvent_AcceptDeclineButton->setObjectName(QStringLiteral("AddEvent_AcceptDeclineButton"));
        AddEvent_AcceptDeclineButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
""));
        AddEvent_AcceptDeclineButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        AddEvent_AcceptDeclineButton->setCenterButtons(true);

        gridLayout_10->addWidget(AddEvent_AcceptDeclineButton, 3, 0, 1, 2);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        AddEvent_StreetNameLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_StreetNameLabel->setObjectName(QStringLiteral("AddEvent_StreetNameLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(AddEvent_StreetNameLabel->sizePolicy().hasHeightForWidth());
        AddEvent_StreetNameLabel->setSizePolicy(sizePolicy1);
        AddEvent_StreetNameLabel->setFont(font5);
        AddEvent_StreetNameLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0))"));
        AddEvent_StreetNameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(AddEvent_StreetNameLabel, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer, 10, 0, 1, 1);

        State_Box = new QTextEdit(gridLayoutWidget_5);
        State_Box->setObjectName(QStringLiteral("State_Box"));
        State_Box->setMaximumSize(QSize(16777215, 26));
        State_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_9->addWidget(State_Box, 8, 1, 1, 1);

        AddEvent_ZipCodeLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_ZipCodeLabel->setObjectName(QStringLiteral("AddEvent_ZipCodeLabel"));
        sizePolicy1.setHeightForWidth(AddEvent_ZipCodeLabel->sizePolicy().hasHeightForWidth());
        AddEvent_ZipCodeLabel->setSizePolicy(sizePolicy1);
        AddEvent_ZipCodeLabel->setFont(font5);
        AddEvent_ZipCodeLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_ZipCodeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(AddEvent_ZipCodeLabel, 7, 2, 1, 1);

        Street_Box = new QTextEdit(gridLayoutWidget_5);
        Street_Box->setObjectName(QStringLiteral("Street_Box"));
        Street_Box->setMaximumSize(QSize(16777215, 26));
        Street_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_9->addWidget(Street_Box, 6, 0, 1, 3);

        Lcation_Box = new QTextEdit(gridLayoutWidget_5);
        Lcation_Box->setObjectName(QStringLiteral("Lcation_Box"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Lcation_Box->sizePolicy().hasHeightForWidth());
        Lcation_Box->setSizePolicy(sizePolicy2);
        Lcation_Box->setMaximumSize(QSize(16777215, 26));
        Lcation_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_9->addWidget(Lcation_Box, 4, 0, 1, 3);

        AddEvent_SaveThisLocationButton = new QPushButton(gridLayoutWidget_5);
        AddEvent_SaveThisLocationButton->setObjectName(QStringLiteral("AddEvent_SaveThisLocationButton"));
        AddEvent_SaveThisLocationButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 10px;\n"
"border: 1px solid black;\n"
"padding: 0 8px;\n"
"margin: 2px;"));

        gridLayout_9->addWidget(AddEvent_SaveThisLocationButton, 9, 0, 1, 2);

        AddEvent_StateLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_StateLabel->setObjectName(QStringLiteral("AddEvent_StateLabel"));
        sizePolicy1.setHeightForWidth(AddEvent_StateLabel->sizePolicy().hasHeightForWidth());
        AddEvent_StateLabel->setSizePolicy(sizePolicy1);
        AddEvent_StateLabel->setFont(font5);
        AddEvent_StateLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_StateLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(AddEvent_StateLabel, 7, 1, 1, 1);

        City_Box = new QTextEdit(gridLayoutWidget_5);
        City_Box->setObjectName(QStringLiteral("City_Box"));
        City_Box->setMaximumSize(QSize(16777215, 26));
        City_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_9->addWidget(City_Box, 8, 0, 1, 1);

        Zip_Box = new QTextEdit(gridLayoutWidget_5);
        Zip_Box->setObjectName(QStringLiteral("Zip_Box"));
        Zip_Box->setMaximumSize(QSize(16777215, 26));
        Zip_Box->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_9->addWidget(Zip_Box, 8, 2, 1, 1);

        AddEvent_CityLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_CityLabel->setObjectName(QStringLiteral("AddEvent_CityLabel"));
        sizePolicy1.setHeightForWidth(AddEvent_CityLabel->sizePolicy().hasHeightForWidth());
        AddEvent_CityLabel->setSizePolicy(sizePolicy1);
        AddEvent_CityLabel->setFont(font5);
        AddEvent_CityLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_CityLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(AddEvent_CityLabel, 7, 0, 1, 1);

        AddEvent_LocationNameLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_LocationNameLabel->setObjectName(QStringLiteral("AddEvent_LocationNameLabel"));
        sizePolicy1.setHeightForWidth(AddEvent_LocationNameLabel->sizePolicy().hasHeightForWidth());
        AddEvent_LocationNameLabel->setSizePolicy(sizePolicy1);
        AddEvent_LocationNameLabel->setFont(font5);
        AddEvent_LocationNameLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        AddEvent_LocationNameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(AddEvent_LocationNameLabel, 3, 0, 1, 1);

        AddEvent_LoadSavedLabel = new QLabel(gridLayoutWidget_5);
        AddEvent_LoadSavedLabel->setObjectName(QStringLiteral("AddEvent_LoadSavedLabel"));
        sizePolicy1.setHeightForWidth(AddEvent_LoadSavedLabel->sizePolicy().hasHeightForWidth());
        AddEvent_LoadSavedLabel->setSizePolicy(sizePolicy1);
        AddEvent_LoadSavedLabel->setFont(font5);
        AddEvent_LoadSavedLabel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));

        gridLayout_9->addWidget(AddEvent_LoadSavedLabel, 1, 0, 1, 2);

        AddEvent_LoadSavedLocationComboBox = new QComboBox(gridLayoutWidget_5);
        AddEvent_LoadSavedLocationComboBox->setObjectName(QStringLiteral("AddEvent_LoadSavedLocationComboBox"));
        AddEvent_LoadSavedLocationComboBox->setMaximumSize(QSize(16777215, 30));
        AddEvent_LoadSavedLocationComboBox->setFont(font7);
        AddEvent_LoadSavedLocationComboBox->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));
        AddEvent_LoadSavedLocationComboBox->setEditable(true);

        gridLayout_9->addWidget(AddEvent_LoadSavedLocationComboBox, 2, 0, 1, 3);


        gridLayout_10->addLayout(gridLayout_9, 2, 1, 1, 1);

        gridLayout_10->setColumnMinimumWidth(0, 350);
        tabWidget->addTab(AddEventTab, QString());
        AppSettingsTab = new QWidget();
        AppSettingsTab->setObjectName(QStringLiteral("AppSettingsTab"));
        verticalLayout_2 = new QVBoxLayout(AppSettingsTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_29 = new QLabel(AppSettingsTab);
        label_29->setObjectName(QStringLiteral("label_29"));
        QFont font8;
        font8.setFamily(QStringLiteral("Papyrus"));
        font8.setPointSize(20);
        label_29->setFont(font8);
        label_29->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.458128 rgba(32, 131, 174, 0));"));
        label_29->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_29);

        label_30 = new QLabel(AppSettingsTab);
        label_30->setObjectName(QStringLiteral("label_30"));
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
        textEdit_15->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout_2->addWidget(textEdit_15);

        pushButton_10 = new QPushButton(AppSettingsTab);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout_2->addWidget(pushButton_10);

        tabWidget->addTab(AppSettingsTab, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);


        retranslateUi(mainWindowTabbed);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(mainWindowTabbed);
    } // setupUi

    void retranslateUi(QDialog *mainWindowTabbed)
    {
        mainWindowTabbed->setWindowTitle(QApplication::translate("mainWindowTabbed", "My Time", nullptr));
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
        Month_AddTask->setText(QApplication::translate("mainWindowTabbed", "Add task", nullptr));
        Month_DeleteTask->setText(QApplication::translate("mainWindowTabbed", "Delete selected task", nullptr));
        label_2->setText(QApplication::translate("mainWindowTabbed", "Todo List", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TodoListsTab), QApplication::translate("mainWindowTabbed", "Todo Lists", nullptr));
        weeklyStats->setText(QApplication::translate("mainWindowTabbed", "View Last Week Activity", nullptr));
        label_4->setText(QApplication::translate("mainWindowTabbed", "Activity Breakdown by Category", nullptr));
        monthlyStats->setText(QApplication::translate("mainWindowTabbed", "View Current Month Activity", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TimeStatsTab), QApplication::translate("mainWindowTabbed", "Time Stats", nullptr));
        label_3->setText(QApplication::translate("mainWindowTabbed", "Add Event", nullptr));
        AddEvent_NotesLabel->setText(QApplication::translate("mainWindowTabbed", "Notes :", nullptr));
        AddEvent_TitleLabel->setText(QApplication::translate("mainWindowTabbed", " Title :", nullptr));
        AddEvent_CategoryLabel->setText(QApplication::translate("mainWindowTabbed", "Category :", nullptr));
        AddEvent_FromDateTimeLabel->setText(QApplication::translate("mainWindowTabbed", "From :", nullptr));
        AddEvent_ToDateTimeLabel->setText(QApplication::translate("mainWindowTabbed", "    To :", nullptr));
        Category_Box->setItemText(0, QApplication::translate("mainWindowTabbed", "Work", nullptr));
        Category_Box->setItemText(1, QApplication::translate("mainWindowTabbed", "School", nullptr));
        Category_Box->setItemText(2, QApplication::translate("mainWindowTabbed", "Exercise", nullptr));
        Category_Box->setItemText(3, QApplication::translate("mainWindowTabbed", "Free Time", nullptr));
        Category_Box->setItemText(4, QApplication::translate("mainWindowTabbed", "Appointment", nullptr));
        Category_Box->setItemText(5, QApplication::translate("mainWindowTabbed", "Meetings", nullptr));
        Category_Box->setItemText(6, QApplication::translate("mainWindowTabbed", "Study", nullptr));
        Category_Box->setItemText(7, QApplication::translate("mainWindowTabbed", "Vacation", nullptr));
        Category_Box->setItemText(8, QApplication::translate("mainWindowTabbed", "New Item", nullptr));

        AddEvent_StreetNameLabel->setText(QApplication::translate("mainWindowTabbed", "Street :", nullptr));
        AddEvent_ZipCodeLabel->setText(QApplication::translate("mainWindowTabbed", "Zip :", nullptr));
        AddEvent_SaveThisLocationButton->setText(QApplication::translate("mainWindowTabbed", "Save This Location", nullptr));
        AddEvent_StateLabel->setText(QApplication::translate("mainWindowTabbed", "State :", nullptr));
        AddEvent_CityLabel->setText(QApplication::translate("mainWindowTabbed", "City :", nullptr));
        AddEvent_LocationNameLabel->setText(QApplication::translate("mainWindowTabbed", "Location Name :", nullptr));
        AddEvent_LoadSavedLabel->setText(QApplication::translate("mainWindowTabbed", "Load a saved location :", nullptr));
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
