#include "mainwindow.h"
#include "mainwindowtabbed.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainWindowTabbed w;
    w.show();

    return a.exec();
}
