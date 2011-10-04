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
//        QMessageBox::critical(0, qApp->tr("Cannot open database"),
//            qApp->tr("Unable to establish a database connection.\n"
//                     "This example needs SQLite support. Please read "
//                     "the Qt SQL driver documentation for information how "
//                     "to build it.\n\n"
//                     "Click Cancel to exit."), QMessageBox::Cancel);
       // return false;
    }
   QSqlTableModel *model;
    model = new QSqlTableModel(this);
    model->setTable("tablica");
   // model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    //model->setHeaderData(0, Qt::Horizontal, tr("ID"));
  //  model->setHeaderData(1, Qt::Horizontal, tr("First name"));
   // model->setHeaderData(2, Qt::Horizontal, tr("Last name"));

    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}
