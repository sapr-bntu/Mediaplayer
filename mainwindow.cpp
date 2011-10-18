#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("tab.s3db");
    if (!db.open()) {

    }
   QSqlTableModel *model;
    model = new QSqlTableModel(this);
    model->setTable("tablica");

    model->select();



    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}
