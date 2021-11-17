#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QSpinBox>
#include <QTimer>
#include <QPainter>
#include <QPushButton>

QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT
    QSpinBox *spin;
    QPushButton *butt;
public:
    Window(QWidget *parent = nullptr);
    ~Window();
public slots:
    void interval(int);
    void Move();
    void activate();
private:
    int h=0, w=0, j=1;
    QTimer *timer;

protected:
    void paintEvent(QPaintEvent *e);

};
#endif // WINDOW_H
