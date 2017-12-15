#ifndef NODEWIDGET_H
#define NODEWIDGET_H

#include <QWidget>

namespace Ui {
class NodeWidget;
}

class NodeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NodeWidget(QWidget *parent = 0);
    ~NodeWidget();

private:
    Ui::NodeWidget *ui;
};

#endif // NODEWIDGET_H
