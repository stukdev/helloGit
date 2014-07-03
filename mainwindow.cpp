#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_released()
{
    QMessageBox::information(this,"Hi","This is only a git test!");
}

void MainWindow::on_pushButton_2_released()
{
   QMessageBox::information(this,"Hi","This is another git test!");
}
