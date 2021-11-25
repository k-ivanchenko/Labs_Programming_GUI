#include "widget.h"
#include<QtWidgets>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.resize(200,200);
    w.show();
    return a.exec();
}
