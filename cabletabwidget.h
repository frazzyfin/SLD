#ifndef CABLETABWIDGET_H
#define CABLETABWIDGET_H

#include <QTabWidget>
#include "cableprops.h"

namespace Ui {
class CableTabWidget;
}

class CableTabWidget : public QTabWidget
{
    Q_OBJECT

public:
    explicit CableTabWidget(QWidget *parent = 0);
    ~CableTabWidget();

public slots:
    void tab1Clicked(bool toggled);
    void tab2Clicked(bool toggled);
    void tab3Clicked(bool toggled);

private:
    Ui::CableTabWidget *ui;
    int NoOfTabs;
    CableProps* cable1;
    CableProps* cable2;
    CableProps* cable3;
};

#endif // CABLETABWIDGET_H
