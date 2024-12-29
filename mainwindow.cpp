#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGANL(clicked()), this,SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString flights[] = {"flight101", "fligt102", "flight103"};
    int seats[] = {20, 50, 30};

    QString uFlight = ui->lineEdit->text();
    QString uFlight = ui->lineEdit_2->text();

}

