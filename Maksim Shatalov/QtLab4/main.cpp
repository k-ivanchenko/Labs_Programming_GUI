#include "widget.h"

#include <QApplication>
#include<QtWidgets>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle(QDir::currentPath());
    w.show();
    return a.exec();
}
