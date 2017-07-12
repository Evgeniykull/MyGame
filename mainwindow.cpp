#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generateHeroes() {
    for(int i=0; i<5; i++) {

    }
}
