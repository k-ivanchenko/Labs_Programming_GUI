#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QMouseEvent>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
        QLineEdit *edit1;
        QLineEdit *edit2;

private slots:
        void slotEdit1(QString);
        void slotEdit2(QString);

protected:
        void mouseMoveEvent(QMouseEvent *e);
};
#endif // WIDGET_H
