#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "heroes.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(generateHeroes()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generateHeroes() {
    QList<Heroes*> hero_list;
    ui->tableWidget->setRowCount(0);
    //Heroes *a = new Heroes();
    for(int i=0; i<5; i++) {
        hero_list.append(new Heroes());
        ui->tableWidget->setRowCount(5);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(hero_list[i]->hero_name));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(hero_list[i]->hero_race));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(hero_list[i]->hero_class));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(hero_list[i]->hero_ideology));
    }
    //output
}
