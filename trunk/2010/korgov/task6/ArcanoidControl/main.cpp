#include "ArconidControl.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ArconidControl w;
    w.show();
    return a.exec();
}