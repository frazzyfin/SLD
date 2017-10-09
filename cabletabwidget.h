#ifndef CABLETABWIDGET_H
#define CABLETABWIDGET_H

#include <QTabWidget>

namespace Ui {
class CableTabWidget;
}

class CableTabWidget : public QTabWidget
{
    Q_OBJECT

public:
    explicit CableTabWidget(QWidget *parent = 0);
    ~CableTabWidget();

private:
    Ui::CableTabWidget *ui;
};

#endif // CABLETABWIDGET_H
