#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("Single Line Diagram"));

    connect(ui->radCable1, SIGNAL(toggled(bool)), ui->cableTabWidget, SLOT(tab1Clicked(bool)));
    connect(ui->radCable2, SIGNAL(toggled(bool)), ui->cableTabWidget, SLOT(tab2Clicked(bool)));
    connect(ui->radCable3, SIGNAL(toggled(bool)), ui->cableTabWidget, SLOT(tab3Clicked(bool)));


}

MainWindow::~MainWindow()
{
    delete ui;
}
