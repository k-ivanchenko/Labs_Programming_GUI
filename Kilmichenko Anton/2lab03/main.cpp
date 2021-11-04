#include "mainwindow.h"
#include "pushbtn.h"
#include <QtWidgets>
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pushbtn w;
    w.show();
    a.connect (&a, SIGNAL (lastWindowClosed()), &a, SLOT (quit()));
    return a.exec();
}
