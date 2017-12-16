#include "minorsectionwidget.h"
#include "ui_minorsectionwidget.h"

MinorSectionWidget::MinorSectionWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MinorSectionWidget)
{
    ui->setupUi(this);
}

MinorSectionWidget::~MinorSectionWidget()
{
    delete ui;
}
