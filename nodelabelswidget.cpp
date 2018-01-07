#include "nodelabelswidget.h"
#include "ui_nodelabelswidget.h"

NodeLabelsWidget::NodeLabelsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NodeLabelsWidget)
{
    ui->setupUi(this);
}

NodeLabelsWidget::~NodeLabelsWidget()
{
    delete ui;
}
