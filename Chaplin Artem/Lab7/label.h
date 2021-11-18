#ifndef LABEL_H
#define LABEL_H

#include <QObject>
#include <QWidget>
#include <QMouseEvent>

class Label : public QWidget
{
public:
    Label();

private:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
};

#endif // LABEL_H
