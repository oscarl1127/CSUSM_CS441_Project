#include "mainwindowtabbed.h"
#include "ui_mainwindowtabbed.h"
#include "QDesktopWidget"
#include "QDebug"

mainWindowTabbed::mainWindowTabbed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainWindowTabbed)
{
    ui->setupUi(this);
    centerAndResize(0.9, 0.9);
}

mainWindowTabbed::~mainWindowTabbed()
{
    delete ui;
}

///Used to resize the window depending on the screen size
void mainWindowTabbed::centerAndResize(double width_perc, double height_perc)
{
    QSize availableSize = qApp->desktop()->availableGeometry().size();
    int width = availableSize.width();
    int height = availableSize.height();
    qDebug() << "Available dimensions " << width << "x" << height;
    width *=width_perc; //90% of screen size
    height *=height_perc;
    qDebug() << "Computed dimesions " << width << "x" << height;
    QSize newSize( width, height);

    setGeometry(QStyle::alignedRect(Qt::LeftToRight,
                                    Qt::AlignCenter,
                                    newSize,
                                    qApp->desktop()->availableGeometry()));
}
