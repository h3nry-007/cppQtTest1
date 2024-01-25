#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->continueBtn, &QPushButton::clicked, this, &MainWindow::loginCheck);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::loginCheck(){
    QString username = ui->unameField->text();
    QString password = ui->pwdField->text();

    if (username == "admin" && password == "admin"){
        QMessageBox::information(this,"Login Success", "Welcome to Admin Panel");
    }else{
        QMessageBox::warning(this, "Login Failed", "Username or Password is incorrect!");
    }
}
