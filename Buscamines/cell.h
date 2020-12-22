#ifndef CELL_H
#define CELL_H

#include <QMainWindow>
#include <QTimer>
#include <QPushButton>

class Cell : public QPushButton{
    Q_OBJECT

private:
    QPushButton* cela;

public:
    Cell() {
        cela = new QPushButton(this);
    };
    ~Cell();

    void getCellInfo () {

    }

protected Q_SLOTS:
    void mouseLeftClick(QMouseEvent*);

signals:
    void leftclick();

};
#endif // CELL_H
