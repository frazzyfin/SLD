#ifndef SECTIONLABELSWIDGET_H
#define SECTIONLABELSWIDGET_H

#include <QWidget>

namespace Ui {
class SectionLabelsWidget;
}

class SectionLabelsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SectionLabelsWidget(QWidget *parent = 0);
    ~SectionLabelsWidget();

private:
    Ui::SectionLabelsWidget *ui;
};

#endif // SECTIONLABELSWIDGET_H
