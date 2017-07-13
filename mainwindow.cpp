#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "heroes.h"

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
    QList<Heroes*> hero_list;
    for(int i=0; i<5; i++) {
        hero_list.at(i) = new Heroes();
    }
    //output
}
