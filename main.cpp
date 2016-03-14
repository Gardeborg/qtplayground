#include "mainwindow.h"
#include <QApplication>
#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //QObject::connect(&d, SIGNAL(sendPlayer(QString)), &w, SLOT(apa(QString)));
    w.init();
    w.show();

    return a.exec();
}
