#include "widget.h"

#include <QApplication>
#include <QWidget>
#include <QPushButton>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
Widget w;
 w.resize(500,450);
// w.showMaximized();

w.show();

    return a.exec();
}
