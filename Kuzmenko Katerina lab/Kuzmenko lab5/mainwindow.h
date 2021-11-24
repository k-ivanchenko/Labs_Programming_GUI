#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLCDNumber>
#include <QSlider>
#include <QStringListModel>
#include <QComboBox>
#include <QPushButton>
#include <QListView>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_horizontalSlider_valueChanged(int value);
    void on_comboBox_returnPressed();

private:
    Ui::MainWindow *ui;
    QStringListModel *model;
    QLCDNumber *lcdNumber;
    QSlider *horizontalSlider;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QListView *listView;

};
#endif // MAINWINDOW_H
