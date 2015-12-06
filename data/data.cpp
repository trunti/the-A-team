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
        query.prepare("SELECT * FROM Persons ORDER BY Name");
        query.bindValue("Name", QString::fromStdString("*"));
        query.bindValue("Gender", QString::fromStdString("*"));
        query.bindValue("Born", QString::fromStdString("*"));
        query.bindValue("Died", QString::fromStdString("*"));
        query.exec();
        while(query.next())
            {
                // qDebug() << query.lastQuery();
                // int id = query.value(0).toUInt();
                string nafn = query.value("Name").toString().toStdString();
                string gender = query.value("Gender").toString().toStdString();
                int born = query.value("Born").toUInt();
                int died = query.value("Died").toUInt();

                if (died == 0)
                {

                    cout << "Name: " << nafn << endl << "Gender: " << gender << endl << "Born: " << born
                         << endl << "Died: Alive!" << endl << endl;
                }
                else
                {
                    cout << "Name: " << nafn << endl << "Gender: " << gender << endl << "Born: " << born
                         << endl << "Died: " << died  << " " << endl << endl;
                }
            }
    cout << endl << "##### THE END #####" << endl;
}
