#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "heroes.h"
#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(generateHeroes()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)), this, SLOT(buyHeroes()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generateHeroes() {
    QList<Heroes*> hero_list;
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setRowCount(5);
    for(int i=0; i<5; i++) {
        hero_list.append(new Heroes());
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(hero_list[i]->hero_name));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(hero_list[i]->hero_race));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(hero_list[i]->hero_class));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(hero_list[i]->hero_ideology));
    }
}

void MainWindow::buyHeroes() {
    QList<QTableWidgetItem*> selected = ui->tableWidget->selectedItems();
    /*if (!selected.length() || selected.length() > 1) {
        return;
    }*/
    //приходится выделять всю строку

    ui->tableWidget_2->setColumnCount(selected.length());
    int my_hero_count = ui->tableWidget_2->rowCount();
    int column_count = ui->tableWidget_2->columnCount();
    ui->tableWidget_2->setRowCount(my_hero_count + 1);

    for (int i=0; i<column_count; i++) {
        ui->tableWidget_2->setItem(my_hero_count, i, new QTableWidgetItem(*selected[i]));
    }
}
