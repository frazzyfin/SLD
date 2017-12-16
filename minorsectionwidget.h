#ifndef MINORSECTIONWIDGET_H
#define MINORSECTIONWIDGET_H

#include <QWidget>

namespace Ui {
class MinorSectionWidget;
}

class MinorSectionWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MinorSectionWidget(QWidget *parent = 0);
    ~MinorSectionWidget();

private:
    Ui::MinorSectionWidget *ui;
};

#endif // MINORSECTIONWIDGET_H
