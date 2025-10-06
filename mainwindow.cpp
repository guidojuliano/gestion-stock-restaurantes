#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnProductos, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(0);  // Página Productos
    });

    connect(ui->btnMenus, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(1);  // Página Menús
    });

    connect(ui->btnConsumo, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(2);  // Página Consumo Menú
    });

    connect(ui->btnReportes, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(3);  // Página Reportes
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
