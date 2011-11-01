#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("tab.s3db");
    if (!db.open())
    {

    }

     audioOutput = new Phonon::AudioOutput(Phonon::MusicCategory, this);
     mediaObject = new Phonon::MediaObject(this);
     metaInformationResolver = new Phonon::MediaObject(this);
     Phonon::createPath(mediaObject, audioOutput);
     Phonon::MediaSource source("Kalimba.mp3");
     mediaObject->setCurrentSource(source);
 //    mediaObject->play();
     connect(ui->ButtonPlay, SIGNAL(clicked()), mediaObject, SLOT(play()));
      connect(ui->ButtonStop, SIGNAL(clicked()), mediaObject, SLOT(stop()));
       connect(ui->ButtonPause, SIGNAL(clicked()), mediaObject, SLOT(pause()));
// connect(ui->ButtonNext, SIGNAL(clicked()), mediaObject, SLOT(next()));
       connect(ui->ButtonNext, SIGNAL(clicked()), this, SLOT(next()));

   QSqlTableModel *model;
   QSqlQuery quer;
   quer.exec("INSERT INTO tablica (Number, Name, Ocenka)  VALUES ('10','Tata','40');");

    model = new QSqlTableModel(this);
    model->setTable("tablica");
    model->select();
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::next()
{
    qDebug()<<"uj67";
}
