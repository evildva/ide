#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("abc");
    //w.setWindowOpacity(1);
    //w.setWindowFlags(Qt::FramelessWindowHint);
    //w.setWindowFlags(Qt::CustomizeWindowHint);
    //w.setAttribute(Qt::WA_TranslucentBackground);
    w.show();

    return a.exec();
}
