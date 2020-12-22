#include "buscaminas.h"
#include "ui_buscaminas.h"

Buscaminas::Buscaminas(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Buscaminas)
{
    ui->setupUi(this);
}

Buscaminas::~Buscaminas()
{
    delete ui;
}

