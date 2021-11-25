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
    QLineEdit *text1;
    QLineEdit *text2;
    QSpinBox *counter;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QPushButton *btnHorizontal;
    QPushButton *btnVertical;
    QBoxLayout *layout;
    QPixmap img;
    QWidget form;
private slots:
    void slotBtnOpen();
    void slotBtnSave();
    void slotBtnHorizontal();
    void slotBtnVertical();
    void slotCounter(int);

protected:
    void paintEvent(QPaintEvent* e);
};
#endif // WIDGET_H
