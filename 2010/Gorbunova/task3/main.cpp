#include "ball.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ball w;
    w.show();
    return a.exec();
}

