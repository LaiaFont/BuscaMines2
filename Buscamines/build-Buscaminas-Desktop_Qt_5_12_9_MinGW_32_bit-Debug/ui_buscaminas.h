/********************************************************************************
** Form generated from reading UI file 'buscaminas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCAMINAS_H
#define UI_BUSCAMINAS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Buscaminas
{
public:
    QWidget *centralwidget;
    QLCDNumber *compt_temps;
    QLCDNumber *compt_mines;
    QPushButton *smile;

    void setupUi(QMainWindow *Buscaminas)
    {
        if (Buscaminas->objectName().isEmpty())
            Buscaminas->setObjectName(QString::fromUtf8("Buscaminas"));
        Buscaminas->resize(400, 500);
        Buscaminas->setMinimumSize(QSize(400, 500));
        Buscaminas->setMaximumSize(QSize(400, 500));
        centralwidget = new QWidget(Buscaminas);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        compt_temps = new QLCDNumber(centralwidget);
        compt_temps->setObjectName(QString::fromUtf8("compt_temps"));
        compt_temps->setGeometry(QRect(270, 20, 101, 61));
        compt_mines = new QLCDNumber(centralwidget);
        compt_mines->setObjectName(QString::fromUtf8("compt_mines"));
        compt_mines->setGeometry(QRect(20, 20, 101, 61));
        smile = new QPushButton(centralwidget);
        smile->setObjectName(QString::fromUtf8("smile"));
        smile->setGeometry(QRect(160, 10, 80, 80));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Material/Icons/smile.png"), QSize(), QIcon::Normal, QIcon::Off);
        smile->setIcon(icon);
        smile->setIconSize(QSize(50, 50));
        Buscaminas->setCentralWidget(centralwidget);

        retranslateUi(Buscaminas);

        QMetaObject::connectSlotsByName(Buscaminas);
    } // setupUi

    void retranslateUi(QMainWindow *Buscaminas)
    {
        Buscaminas->setWindowTitle(QApplication::translate("Buscaminas", "Buscaminas", nullptr));
        smile->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Buscaminas: public Ui_Buscaminas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCAMINAS_H
