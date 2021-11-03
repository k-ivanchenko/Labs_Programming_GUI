#include "widget.h"
#include <QApplication>
#include<QtWidgets>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.resize(300,370);
    w.show();
    return a.exec();
}
