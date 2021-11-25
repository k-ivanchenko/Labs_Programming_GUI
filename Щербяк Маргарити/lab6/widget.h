#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtWidgets>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLabel *X_Window;
    QLabel *Y_Window;

    QLabel *Window_width;
    QLabel *Window_height;

    QLabel *X_Mouse;
    QLabel *Y_Mouse;

    QLabel *X_MouseWindow;
    QLabel *Y_MouseWindow;

    QLCDNumber *LeftClick;
    QLCDNumber *RightClick;

    QBoxLayout *layout;

    int L, R;

protected:
    void resizeEvent(QResizeEvent *e);
    void moveEvent(QMoveEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);
};
#endif // WIDGET_H
