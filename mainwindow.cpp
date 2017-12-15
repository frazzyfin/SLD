#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nodewidget.h"
#include <vector>
#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("Single Line Diagram"));

    connect(ui->radCable1, SIGNAL(toggled(bool)), ui->cableTabWidget, SLOT(tab1Clicked(bool)));
    connect(ui->radCable2, SIGNAL(toggled(bool)), ui->cableTabWidget, SLOT(tab2Clicked(bool)));
    connect(ui->radCable3, SIGNAL(toggled(bool)), ui->cableTabWidget, SLOT(tab3Clicked(bool)));

    // Setup the initial nodes list
    auto nodesVLayout = new QVBoxLayout;
    auto nodesList = new vector<NodeWidget*>();
    for (int i = 0; i < 20; i++)
    {
        auto node = new NodeWidget();
        // Change the node label to the position in the array
        node->findChild<QLabel*>("lblNodeName")->setText(QString::number(i + 1));
        nodesList->push_back(node);
        nodesVLayout->addWidget(node);
    }

    // Add a spacer so the nodes are neatly placed at the top
    auto spacer = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Expanding);
    nodesVLayout->addSpacerItem(spacer);

    // And finally add the layout to parent scroll box
    ui->scrlNodesList->setLayout(nodesVLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}
