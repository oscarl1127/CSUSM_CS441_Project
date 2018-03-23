#include "thedb.h"

using namespace std;

theDB::theDB()
{
    connectToDb();
}

bool theDB::connectToDb()
{
    bool retvalue = false;

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setHostName("13.58.23.131");
    db.setDatabaseName("DRIVER={SQL Server};SERVER=13.58.23.131;DATABASE=TestWithQT");
    db.setUserName("sa");
    db.setPassword("S!mpl3P@ss");
    db.setPort(1433);

    retvalue = db.open();

    cout << "**************" << retvalue << "*************"<<endl;

    return retvalue;
}

bool theDB::addEventInDb()
{
    return false;
}




