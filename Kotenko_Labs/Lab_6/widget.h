#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QBoxLayout>
#include <QLCDNumber>
#include <QMoveEvent>
#include <QResizeEvent>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QString>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLabel *lbl_rasmer1;
    QLabel *lbl_rasmer2;
    QLabel *lbl_okno3;
    QLabel *lbl_okno4;
    QLabel *lbl_oknokoord5;
    QLabel *lbl_oknokoord6;
    QLabel *lbl_ekrankoord7;
    QLabel *lbl_ekrankoord8;
    QLCDNumber *lcdlevo;
    QLCDNumber *lcdpravo;
    QBoxLayout *layout;
protected:
    void resizeEvent (QResizeEvent *e);
    void moveEvent (QMoveEvent *e);
    void mouseMoveEvent (QMouseEvent *e);
    void keyPressEvent (QKeyEvent *e);
    void mousePressEvent(QMouseEvent *e);

};
#endif // WIDGET_H
