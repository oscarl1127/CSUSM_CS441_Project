#include <QCoreApplication>
#include <iostream>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QDate>
#include <QTime>
#include <QString>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QDate date= QDate::fromString("2018-04-15","yyyy-MM-dd");



    QTime theTime= QTime::fromString("12:10:00", "hh:mm:ss");


    qDebug() <<theTime.toString();

}
