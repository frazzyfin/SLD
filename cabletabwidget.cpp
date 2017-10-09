#include "cabletabwidget.h"
#include "ui_cabletabwidget.h"

CableTabWidget::CableTabWidget(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::CableTabWidget)
{
    ui->setupUi(this);
}

CableTabWidget::~CableTabWidget()
{
    delete ui;
}
