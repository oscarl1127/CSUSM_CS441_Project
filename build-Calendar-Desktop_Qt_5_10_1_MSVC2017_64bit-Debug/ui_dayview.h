/********************************************************************************
** Form generated from reading UI file 'dayview.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAYVIEW_H
#define UI_DAYVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DayView
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *TimeTable;

    void setupUi(QDialog *DayView)
    {
        if (DayView->objectName().isEmpty())
            DayView->setObjectName(QStringLiteral("DayView"));
        DayView->resize(456, 755);
        horizontalLayout = new QHBoxLayout(DayView);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        TimeTable = new QTableWidget(DayView);
        if (TimeTable->columnCount() < 1)
            TimeTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TimeTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (TimeTable->rowCount() < 24)
            TimeTable->setRowCount(24);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(9, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(10, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(11, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(12, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(13, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(14, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(15, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(16, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(17, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(18, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(19, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(20, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(21, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(22, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        TimeTable->setVerticalHeaderItem(23, __qtablewidgetitem24);
        TimeTable->setObjectName(QStringLiteral("TimeTable"));
        TimeTable->setFrameShape(QFrame::Box);
        TimeTable->setFrameShadow(QFrame::Sunken);
        TimeTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TimeTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TimeTable->setDragEnabled(false);
        TimeTable->setAlternatingRowColors(false);
        TimeTable->setSelectionBehavior(QAbstractItemView::SelectItems);
        TimeTable->setShowGrid(true);
        TimeTable->setRowCount(24);
        TimeTable->setColumnCount(1);
        TimeTable->horizontalHeader()->setVisible(true);
        TimeTable->horizontalHeader()->setCascadingSectionResizes(true);
        TimeTable->horizontalHeader()->setStretchLastSection(true);
        TimeTable->verticalHeader()->setVisible(true);

        horizontalLayout->addWidget(TimeTable);


        retranslateUi(DayView);

        QMetaObject::connectSlotsByName(DayView);
    } // setupUi

    void retranslateUi(QDialog *DayView)
    {
        DayView->setWindowTitle(QApplication::translate("DayView", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TimeTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DayView", "Events", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TimeTable->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("DayView", "12:00AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TimeTable->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("DayView", "1:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = TimeTable->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("DayView", "2:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = TimeTable->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("DayView", "3:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = TimeTable->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("DayView", "4:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = TimeTable->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("DayView", "5:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = TimeTable->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("DayView", "6:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = TimeTable->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QApplication::translate("DayView", "7:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = TimeTable->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QApplication::translate("DayView", "8:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = TimeTable->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QApplication::translate("DayView", "9:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = TimeTable->verticalHeaderItem(10);
        ___qtablewidgetitem11->setText(QApplication::translate("DayView", "10:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = TimeTable->verticalHeaderItem(11);
        ___qtablewidgetitem12->setText(QApplication::translate("DayView", "11:00 AM", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = TimeTable->verticalHeaderItem(12);
        ___qtablewidgetitem13->setText(QApplication::translate("DayView", "12:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = TimeTable->verticalHeaderItem(13);
        ___qtablewidgetitem14->setText(QApplication::translate("DayView", "1:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = TimeTable->verticalHeaderItem(14);
        ___qtablewidgetitem15->setText(QApplication::translate("DayView", "2:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = TimeTable->verticalHeaderItem(15);
        ___qtablewidgetitem16->setText(QApplication::translate("DayView", "3:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = TimeTable->verticalHeaderItem(16);
        ___qtablewidgetitem17->setText(QApplication::translate("DayView", "4:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = TimeTable->verticalHeaderItem(17);
        ___qtablewidgetitem18->setText(QApplication::translate("DayView", "5:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = TimeTable->verticalHeaderItem(18);
        ___qtablewidgetitem19->setText(QApplication::translate("DayView", "6:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = TimeTable->verticalHeaderItem(19);
        ___qtablewidgetitem20->setText(QApplication::translate("DayView", "7:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = TimeTable->verticalHeaderItem(20);
        ___qtablewidgetitem21->setText(QApplication::translate("DayView", "8:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = TimeTable->verticalHeaderItem(21);
        ___qtablewidgetitem22->setText(QApplication::translate("DayView", "9:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = TimeTable->verticalHeaderItem(22);
        ___qtablewidgetitem23->setText(QApplication::translate("DayView", "10:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = TimeTable->verticalHeaderItem(23);
        ___qtablewidgetitem24->setText(QApplication::translate("DayView", "11:00 PM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DayView: public Ui_DayView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAYVIEW_H
