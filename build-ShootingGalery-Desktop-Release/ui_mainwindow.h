/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLCDNumber *lcdNumber;
    QComboBox *comboBox;
    QPushButton *ButtonConnectCam;
    QGraphicsView *LiveView;
    QComboBox *TargetsComboBox;
    QPushButton *ButtonConnectTarget;
    QPushButton *buttonDown;
    QPushButton *buttonUp;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(809, 612);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(320, 40, 64, 23));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(0, 0, 85, 27));
        ButtonConnectCam = new QPushButton(centralWidget);
        ButtonConnectCam->setObjectName(QStringLiteral("ButtonConnectCam"));
        ButtonConnectCam->setGeometry(QRect(90, 0, 91, 27));
        LiveView = new QGraphicsView(centralWidget);
        LiveView->setObjectName(QStringLiteral("LiveView"));
        LiveView->setGeometry(QRect(10, 40, 711, 491));
        LiveView->setMinimumSize(QSize(0, 192));
        LiveView->setSceneRect(QRectF(0, 0, 640, 480));
        TargetsComboBox = new QComboBox(centralWidget);
        TargetsComboBox->setObjectName(QStringLiteral("TargetsComboBox"));
        TargetsComboBox->setGeometry(QRect(290, 0, 171, 27));
        ButtonConnectTarget = new QPushButton(centralWidget);
        ButtonConnectTarget->setObjectName(QStringLiteral("ButtonConnectTarget"));
        ButtonConnectTarget->setGeometry(QRect(470, 0, 131, 27));
        buttonDown = new QPushButton(centralWidget);
        buttonDown->setObjectName(QStringLiteral("buttonDown"));
        buttonDown->setEnabled(false);
        buttonDown->setGeometry(QRect(620, 0, 51, 27));
        buttonUp = new QPushButton(centralWidget);
        buttonUp->setObjectName(QStringLiteral("buttonUp"));
        buttonUp->setEnabled(false);
        buttonUp->setGeometry(QRect(670, 0, 41, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 809, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        ButtonConnectCam->setText(QApplication::translate("MainWindow", "Connect Cam", 0));
        ButtonConnectTarget->setText(QApplication::translate("MainWindow", "Connect Targets", 0));
        buttonDown->setText(QApplication::translate("MainWindow", "Down", 0));
        buttonUp->setText(QApplication::translate("MainWindow", "Up", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
