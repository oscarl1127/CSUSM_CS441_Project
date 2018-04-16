#include <QCoreApplication>
#include <iostream>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QDate>
#include <QString>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDate x(2018,04,12);
    QString y = x.toString();
    qDebug() <<y;

}
