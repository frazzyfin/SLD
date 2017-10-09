#ifndef CABLEPROPS_H
#define CABLEPROPS_H

#include <QWidget>

namespace Ui {
class CableProps;
}

class CableProps : public QWidget
{
    Q_OBJECT

public:
    explicit CableProps(QWidget *parent = 0);
    ~CableProps();

private:
    Ui::CableProps *ui;
};

#endif // CABLEPROPS_H
