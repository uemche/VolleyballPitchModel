#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->heightSlider->setMaximum(int((maxh-minh)/hs));
    ui->heightSpin->setDecimals(2);
    ui->heightSpin->setMinimum(minh);
    ui->heightSpin->setMaximum(maxh);
    connect(ui->heightSlider, &QSlider::valueChanged, [=](int value){
       double val = minh + value*hs;
       ui->heightSpin->setValue(val);
    });
    ui->veloSlider->setMaximum(int((maxv-minv)/vs));
    ui->veloSpin->setDecimals(1);
    ui->veloSpin->setMinimum(minv);
    ui->veloSpin->setMaximum(maxv);
    connect(ui->veloSlider, &QSlider::valueChanged, [=](int value){
       double val = minv + value*vs;
       ui->veloSpin->setValue(val);
    });
    ui->angleSlider->setMaximum(int((maxa-mina)/as));
    ui->angleSpin->setDecimals(1);
    ui->angleSpin->setMinimum(mina);
    ui->angleSpin->setMaximum(maxa);
    connect(ui->angleSlider, &QSlider::valueChanged, [=](int value){
       double val = mina + value*as;
       ui->angleSpin->setValue(val);
    });
    QVector<double> setkax(2), setkay(2);
    setkax[0]=9.0;
    setkay[0]=0.0;
    setkax[1]=9.0;
    setkay[1]=2.4;
    ui->widget->addGraph();
    ui->widget->graph(0)->setData(setkax, setkay);
    ui->widget->replot();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::drawGraph(double height, double velo, double angle)
{
    double time = (velo*sin(M_PI*(angle)/180)+sqrt(pow(velo,2)*pow(sin(M_PI*(angle)/180),2)+19.6*height))/9.8;
    int N = int(time/step) + 2;
    QVector<double> x(N), y(N), u(N), v(N), V(N);
    int i=1;
    x[0]=0;
    y[0]=height;
    V[0]=velo;
    u[0]=velo * cos(M_PI*(angle)/180);
    v[0]=velo * sin(M_PI * (angle)/180);

    for(double t = 0.0; t<=time; t+=step)
    {
        u[i]=-mu*V[i-1]*u[i-1]*t/weight+u[i-1];
        x[i]=u[i]*t+x[i-1];
        v[i]=(-weight*g-mu*V[i-1]*v[i-1])*t/weight+v[i-1];
        y[i]=v[i]*t+y[i-1];
        V[i]=sqrt(u[i]*u[i]+v[i]*v[i]);
        i++;
    }
    ui->widget->clearGraphs();
    ui->widget->addGraph();
    ui->widget->graph(0)->setData(x, y);
    ui->widget->xAxis->setRange(0, length);
    ui->widget->yAxis->setRange(0, 6.5);
    QVector<double> setkax(2), setkay(2);
    setkax[0]=9.0;
    setkay[0]=0.0;
    setkax[1]=9.0;
    setkay[1]=2.4;
    ui->widget->addGraph();
    ui->widget->graph(1)->setData(setkax, setkay);
    ui->widget->replot();
}
void MainWindow::on_heightSpin_valueChanged(double arg1)
{
    double velocity = ui->veloSpin->value();
    double angle = ui->angleSpin->value();
    drawGraph(arg1,velocity,angle);
}

void MainWindow::on_veloSpin_valueChanged(double arg1)
{
    double height = ui->heightSpin->value();
    double angle = ui->angleSpin->value();
    drawGraph(height,arg1,angle);
}

void MainWindow::on_angleSpin_valueChanged(double arg1)
{
    double height = ui->heightSpin->value();
    double velocity = ui->veloSpin->value();
    drawGraph(height,velocity,arg1);
}
