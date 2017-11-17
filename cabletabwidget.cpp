#include "cabletabwidget.h"
#include "ui_cabletabwidget.h"
#include <QLayout>

CableTabWidget::CableTabWidget(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::CableTabWidget)
{
    ui->setupUi(this);
    NoOfTabs = 1;

    // Initialise the cable properties forms
    //cable1 = new CableProperties(this);
    //cable2 = new CableProperties(this);
    //cable3 = new CableProperties(this);
}

CableTabWidget::~CableTabWidget()
{
    delete ui;
}


void CableTabWidget::tab1Clicked(bool toggled)
{
    if (toggled)
    {
        if (NoOfTabs == 2)
        {
            this->removeTab(1);
            delete cable2;
        }
        else if (NoOfTabs == 3)
        {
            this ->removeTab(2);
            this->removeTab(1);
            delete cable1;
            delete cable2;
        }

        NoOfTabs = 1;
    }
}

void CableTabWidget::tab2Clicked(bool toggled)
{
    if (toggled)
    {
        if (NoOfTabs == 3)
        {
            this->removeTab(2);
            delete cable3;
        }
        else if (NoOfTabs == 1)
        {
            cable2 = new CableProps(this);
            this->addTab(cable2, "Cable 2");
        }

        NoOfTabs = 2;
    }
}

void CableTabWidget::tab3Clicked(bool toggled)
{
    if (toggled)
    {
        if (NoOfTabs == 1)
        {
            cable2 = new CableProps(this);
            cable3 = new CableProps(this);
            this->addTab(cable2, "Cable 2");
            this->addTab(cable3, "Cable 3");
        }
        else if (NoOfTabs == 2)
        {
            cable3 = new CableProps(this);
            this->addTab(cable3, "Cable 3");
        }

        NoOfTabs = 3;
    }
}
