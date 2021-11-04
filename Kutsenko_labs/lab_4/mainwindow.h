#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QSpinBox>
#include <QLabel>
#include <QIntValidator>

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
  QLineEdit *lne;
  QSpinBox *spb1, *spb2;
  QLabel *lbl1, *lbl2, *lbl3;
  QIntValidator *vld;

public slots:
  void setSpb(const QString &text);
  void setTop(int max);
  void setTit(int a);
  void setLne(int a);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
