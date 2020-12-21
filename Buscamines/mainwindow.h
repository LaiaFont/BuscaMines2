#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();




public slots:
    void Contador();
    void True();
    void CrearMatriu();



private:
    Ui::MainWindow *ui;
    bool pols;
    int cont;

    Cell minefield[9][9];
};


//incloure classe en un altre .h
class Cell : public QPushButton{
    Q_OBJECT

private:


protected Q_SLOTS:
    void mouseLeftClick(QMouseEvent*);

signals:
    void leftclick();

};

#endif // MAINWINDOW_H
