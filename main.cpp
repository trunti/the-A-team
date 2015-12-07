#include <QCoreApplication>
#include "ui/ui.h"
#include "data/data.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Data data;
    //UI ui;
    data.SortByCpuName();
    data.SortByGenderM();
    //ui.mainMenu();

    return a.exec();
}

