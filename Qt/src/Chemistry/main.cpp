#include <QtGui/QApplication>
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(670,328);
    w.setWindowFlags(Qt::FramelessWindowHint);
    //w.setWindowOpacity(1);
    w.setAttribute(Qt::WA_TranslucentBackground, true);
    w.show();
    
    return a.exec();
}
