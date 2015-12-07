// Hefur samskipti við gagnagrunn og les inn í computers- og scientists klasana.
#ifndef DATA_H
#define DATA_H
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QFileInfo>
#include <QString>
#include <iostream>

using namespace std;


class Data
{
public:
    Data();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "database.sqlite";
    void SortByName();
    void SortByNameB();
    void SortByGenderF();
    void SortByGenderM();
    void SortByCpuName();
private:
    void openDatabase();
    int born, died, year;
    string name, gender, type;

};

#endif // DATA_H


