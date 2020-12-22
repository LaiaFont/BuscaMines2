/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLCDNumber *Temps;
    QLCDNumber *Mineslcd;
    QFrame *taulell;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 500);
        MainWindow->setMinimumSize(QSize(400, 500));
        MainWindow->setMaximumSize(QSize(400, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 20, 60, 60));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/smile.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 50));
        Temps = new QLCDNumber(centralwidget);
        Temps->setObjectName(QString::fromUtf8("Temps"));
        Temps->setGeometry(QRect(270, 30, 101, 41));
        Mineslcd = new QLCDNumber(centralwidget);
        Mineslcd->setObjectName(QString::fromUtf8("Mineslcd"));
        Mineslcd->setGeometry(QRect(20, 30, 111, 41));
        taulell = new QFrame(centralwidget);
        taulell->setObjectName(QString::fromUtf8("taulell"));
        taulell->setGeometry(QRect(10, 90, 381, 401));
        taulell->setFrameShape(QFrame::NoFrame);
        taulell->setFrameShadow(QFrame::Plain);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "Reiniciar", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
