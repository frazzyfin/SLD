#include "sectionlabelswidget.h"
#include "ui_sectionlabelswidget.h"

SectionLabelsWidget::SectionLabelsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SectionLabelsWidget)
{
    ui->setupUi(this);
}

SectionLabelsWidget::~SectionLabelsWidget()
{
    delete ui;
}
