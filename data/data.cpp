#include "data/data.h"
#include "data/scientists.h"
#include "data/computers.h"


Data::Data()
{

}

void Data::openDatabase()
{
    db.setDatabaseName(dbName);
    db.open();
}
void Data::SortByName()
{
    openDatabase();
        QSqlQuery query(db);
        query.prepare("SELECT * FROM Persons ORDER BY Name DESC");
        query.bindValue("Name", QString::fromStdString("*"));
        query.bindValue("Gender", QString::fromStdString("*"));
        query.bindValue("Born", QString::fromStdString("*"));
        query.bindValue("Died", QString::fromStdString("*"));
        query.exec();
        while(query.next())
            {
                name = query.value("Name").toString().toStdString();
                gender = query.value("Gender").toString().toStdString();
                born = query.value("Born").toUInt();
                died = query.value("Died").toUInt();
            }
}
void Data::SortByNameB()
{
    openDatabase();
        QSqlQuery query(db);
        query.prepare("SELECT * FROM Persons ORDER BY Name");
        query.bindValue("Name", QString::fromStdString("*"));
        query.bindValue("Gender", QString::fromStdString("*"));
        query.bindValue("Born", QString::fromStdString("*"));
        query.bindValue("Died", QString::fromStdString("*"));
        query.exec();
        while(query.next())
            {
                name = query.value("Name").toString().toStdString();
                gender = query.value("Gender").toString().toStdString();
                born = query.value("Born").toUInt();
                died = query.value("Died").toUInt();
            }
}
void Data::SortByGenderF()
{
    openDatabase();
        QSqlQuery query(db);
        query.prepare("SELECT * FROM Persons ORDER BY Gender");
        query.bindValue("Name", QString::fromStdString("*"));
        query.bindValue("Gender", QString::fromStdString("*"));
        query.bindValue("Born", QString::fromStdString("*"));
        query.bindValue("Died", QString::fromStdString("*"));
        query.exec();
        while(query.next())
            {
                name = query.value("Name").toString().toStdString();
                gender = query.value("Gender").toString().toStdString();
                born = query.value("Born").toUInt();
                died = query.value("Died").toUInt();
            }
}
void Data::SortByGenderM()
{
    openDatabase();
        QSqlQuery query(db);
        query.prepare("SELECT * FROM Persons ORDER BY Gender DESC");
        query.bindValue("Name", QString::fromStdString("*"));
        query.bindValue("Gender", QString::fromStdString("*"));
        query.bindValue("Born", QString::fromStdString("*"));
        query.bindValue("Died", QString::fromStdString("*"));
        query.exec();
        while(query.next())
            {
            cout << "hello";
                name = query.value("Name").toString().toStdString();
                gender = query.value("Gender").toString().toStdString();
                born = query.value("Born").toUInt();
                died = query.value("Died").toUInt();
            }
}
void Data::SortByCpuName()
{
    openDatabase();
        QSqlQuery query(db);
        query.prepare("SELECT * FROM Computers ORDER BY Name");
        query.bindValue("Name", QString::fromStdString("*"));
        query.bindValue("Year", QString::fromStdString("*"));
        query.bindValue("Type", QString::fromStdString("*"));
        while(query.next())
        {
            cout << "Hello";
            name = query.value("Name").toString().toStdString();
            year = query.value("Year").toUInt();
            type = query.value("Type").toString().toStdString();
            cout << name << " ";
        }

}
