#include "dialog.h"
#include "ui_dialog.h"
#include <iostream>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::accept() {
    std::cout<<"Accept dialogbox" << std::endl;
    QString qs(ui->lineEdit->text());
    emit sendPlayer(ui->lineEdit->text());
}

