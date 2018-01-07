#ifndef NODELABELSWIDGET_H
#define NODELABELSWIDGET_H

#include <QWidget>

namespace Ui {
class NodeLabelsWidget;
}

class NodeLabelsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NodeLabelsWidget(QWidget *parent = 0);
    ~NodeLabelsWidget();

private:
    Ui::NodeLabelsWidget *ui;
};

#endif // NODELABELSWIDGET_H
