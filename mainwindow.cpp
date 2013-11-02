#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}


void MainWindow::on_pushButton_3_pressed()
{
    std::cout << "pushing button 3!" << std::endl;
}

void MainWindow::on_pushButton_2_released()
{
    std::cout << "let go of button 2!" << std::endl;
}
