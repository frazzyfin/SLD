#include "cableprops.h"
#include "ui_cableprops.h"

CableProps::CableProps(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CableProps)
{
    ui->setupUi(this);
}

CableProps::~CableProps()
{
    delete ui;
}
