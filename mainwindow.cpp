#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),SLOT(close()));
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
    QString uName = ui->lineEdit_2->text();
    bool found = false;

    for(int i = 0;i<flights->length();i++)
    {
        if(uFlight == flights[i] && seats[i] > 0)
        {
            QMessageBox::information(this, "Success!",
                "User Name: " +uName+"\n"
                "Flight: "+flights[i]+"\n"
                "Seat has been successfully reserved");
            found = true;
            break;
        }

    }
    if(!found)
    {
        QMessageBox::information(this, "Error!!", "Incorrect Flight number or seats are unavailable");
    }
}

