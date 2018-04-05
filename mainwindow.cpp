#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_zero,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_one,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_two,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_three,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_four,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_five,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_six,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_seven,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_eight,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_nine,SIGNAL(released()),this,SLOT(digit_pressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    qDebug() << "test";
}
