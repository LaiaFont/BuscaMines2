#ifndef BUSCAMINAS_H
#define BUSCAMINAS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Buscaminas; }
QT_END_NAMESPACE

class Buscaminas : public QMainWindow
{
    Q_OBJECT

public:
    Buscaminas(QWidget *parent = nullptr);
    ~Buscaminas();

private:
    Ui::Buscaminas *ui;
};
#endif // BUSCAMINAS_H
