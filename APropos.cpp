#include "APropos.h"
#include "ui_APropos.h"

APropos::APropos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::APropos)
{
    ui->setupUi(this);
}

APropos::~APropos()
{
    delete ui;
}
