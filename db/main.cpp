#include <QCoreApplication>
#include <iostream>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");


    db.setHostName("13.58.39.133");
    db.setDatabaseName("DRIVER={SQL Server};SERVER=13.58.39.133;DATABASE=TestWithQT");
    db.setUserName("sa");
    db.setPassword("S!mpl3P@ss");
    db.setPort(1433);

    bool ok = db.open();

     QSqlQuery query;
     query.prepare("CREATE TABLE martinTEST(ProductID int, theDescription text)");
     query.exec();


    if(ok==true)
        cout << "Connected\n";
    else
        cout << "Failed to connect...\n";


    return a.exec();
}
