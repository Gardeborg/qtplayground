#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    d()
{
    ui->setupUi(this);

    dumpObjectInfo ();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init() {
   d.show();
   connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
   connect(&d, SIGNAL(sendPlayer(QString)), this, SLOT(setButtonText(QString)));
}

void MainWindow::on_pushButton_clicked()
{
    std::cout<<"Push button clicked"<<std::endl;
}

void MainWindow::on_pushButton_2_clicked()
{
    std::cout<<"Push button 2 clicked"<<std::endl;
}

void MainWindow::setButtonText(QString s) {
    ui->pushButton->setText(s);
}
