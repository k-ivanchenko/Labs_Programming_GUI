#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtWidgets>
#include <QLabel>
#include <QPoint>
#include <QMoveEvent>
#include <QResizeEvent>
#include <QMouseEvent>
#include <QKeyEvent>



QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

    QLineEdit *edit1;
    QLineEdit *edit2;


    QLineEdit *edit3;
    QLineEdit *edit4;

    QLineEdit *edit5;
    QLineEdit *edit6;
    QLineEdit *edit7;
    QLineEdit *edit8;

    QLabel *lbl1;
    QLabel *lbl2;
    QBoxLayout *layout;

    int btL;
    int btR;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
protected:
    void resizeEvent(QResizeEvent *e);
    void moveEvent(QMoveEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);
};
#endif // WIDGET_H
