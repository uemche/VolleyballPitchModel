/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *widget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *angleSpin;
    QLabel *label_3;
    QSlider *angleSlider;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *veloSpin;
    QSlider *veloSlider;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QSlider *heightSlider;
    QLabel *label;
    QDoubleSpinBox *heightSpin;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1200, 600));
        MainWindow->setMaximumSize(QSize(1200, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 1011, 541));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(1030, 202, 151, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        angleSpin = new QDoubleSpinBox(gridLayoutWidget);
        angleSpin->setObjectName(QString::fromUtf8("angleSpin"));
        angleSpin->setDecimals(2);
        angleSpin->setMinimum(0.000000000000000);
        angleSpin->setMaximum(90.000000000000000);
        angleSpin->setValue(0.000000000000000);

        gridLayout->addWidget(angleSpin, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        angleSlider = new QSlider(gridLayoutWidget);
        angleSlider->setObjectName(QString::fromUtf8("angleSlider"));
        angleSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(angleSlider, 2, 0, 1, 1);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1030, 110, 151, 81));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        veloSpin = new QDoubleSpinBox(layoutWidget);
        veloSpin->setObjectName(QString::fromUtf8("veloSpin"));
        veloSpin->setDecimals(2);
        veloSpin->setMinimum(0.000000000000000);
        veloSpin->setMaximum(40.000000000000000);
        veloSpin->setValue(0.000000000000000);

        gridLayout_2->addWidget(veloSpin, 1, 0, 1, 1);

        veloSlider = new QSlider(layoutWidget);
        veloSlider->setObjectName(QString::fromUtf8("veloSlider"));
        veloSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(veloSlider, 2, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(1030, 20, 151, 81));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        heightSlider = new QSlider(layoutWidget1);
        heightSlider->setObjectName(QString::fromUtf8("heightSlider"));
        heightSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(heightSlider, 2, 1, 1, 1);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 1, 1, 1);

        heightSpin = new QDoubleSpinBox(layoutWidget1);
        heightSpin->setObjectName(QString::fromUtf8("heightSpin"));
        heightSpin->setDecimals(2);
        heightSpin->setMinimum(1.000000000000000);
        heightSpin->setMaximum(4.000000000000000);
        heightSpin->setValue(1.000000000000000);

        gridLayout_3->addWidget(heightSpin, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GraphStuff", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 \321\203\320\263\320\276\320\273, \320\263\321\200\320\260\320\264", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214, \320\274/\321\201", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\321\213\321\201\320\276\321\202\320\260, \320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
