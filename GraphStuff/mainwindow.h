#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double minh=1.0;
    double maxh=4.0;
    double hs=0.01;
    double minv=0.0;
    double maxv=40.0;
    double vs=0.1;
    double mina=0.0;
    double maxa=90.0;
    double as=0.1;
    double length = 18.0;
    double step = 0.01;
    double weight = 0.28;
    double mu = 0.5 * 1.2754 * 0.675 * 0.675 /4/3.14*0.45;
    double g = 9.80665;

private slots:

    void on_heightSpin_valueChanged(double arg1);

    void on_veloSpin_valueChanged(double arg1);

    void on_angleSpin_valueChanged(double arg1);

    void drawGraph(double height, double velo, double angle);

public:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
