#include "mainmenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mainmenu w;
    w.show();

    return a.exec();
}
