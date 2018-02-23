#include "dayview.h"
#include "ui_dayview.h"

DayView::DayView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DayView)
{
    ui->setupUi(this);
}

DayView::~DayView()
{
    delete ui;
}
