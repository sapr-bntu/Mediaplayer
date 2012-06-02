#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QFile file("Playlist.s3db") ;
    QSqlDatabase db;
    if (file.exists())
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("Playlist.s3db");
        db.open();
                QSqlQuery query;
                query.exec("CREATE TABLE tablica ("
                           "ID INTEGER  NOT NULL PRIMARY KEY AUTOINCREMENT,"
                           "Artist TEXT  NULL,"
                           "Title  TEXT NULL,"
                           "Location TEXT  NULL)");

    }

    else
        {
            db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("Playlist.s3db");
            db.open();
        }

     audioOutput = new Phonon::AudioOutput(Phonon::MusicCategory, this);
     mediaObject = new Phonon::MediaObject(this);
     metaInformationResolver = new Phonon::MediaObject(this);
     Phonon::createPath(mediaObject, audioOutput);
     Phonon::MediaSource source("Kalimba.mp3");
     mediaObject->setCurrentSource(source);
         seekSlider = new Phonon::SeekSlider(this);
         seekSlider->setMediaObject(mediaObject);

         volumeSlider = new Phonon::VolumeSlider(this);
         volumeSlider->setAudioOutput(audioOutput);
         volumeSlider->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
         ui->verticalLayout->addWidget(seekSlider);
         ui->verticalLayout->addWidget(volumeSlider);

//         ui->centralWidget->layout()->addChildWidget(volumeSlider);
     connect(ui->ButtonPlay, SIGNAL(clicked()), this, SLOT(play()));
     connect(ui->ButtonStop, SIGNAL(clicked()), mediaObject, SLOT(stop()));
     connect(ui->ButtonPause, SIGNAL(clicked()), mediaObject, SLOT(pause()));
     connect(ui->ButtonPrev, SIGNAL(clicked()), this, SLOT(prev()));
     connect(ui->ButtonNext, SIGNAL(clicked()), this, SLOT(next()));
     connect(mediaObject,SIGNAL(finished()),this,SLOT(next()));
     connect(ui->pushButton_2,SIGNAL(clicked()), this,SLOT(delete1()));


      //  QSqlQuery quer;
   //   quer.exec("INSERT INTO tablica (ID, Artist, Title, Location)  VALUES ('5',Nana','Taaaaa','1000');");


    model = new QSqlTableModel(this);
    model->setTable("tablica");
    model->select();
    model->setFilter("");
    ui->tableView->selectRow(0);
    ui->tableView->setModel(model);


}


void MainWindow::delete1()
{
QSqlQuery quer;
//qDebug()<<currentid;
quer.exec(QString("DELETE FROM tablica WHERE ID = %1").arg(currentid));
//qDebug()<<quer.lastError();
model->select();

}
MainWindow::~MainWindow()

{
    delete ui;
}
int MainWindow::next()
{
    curentIndex++;
    MainWindow::play();
    return curentIndex;
}
int MainWindow::prev()
{
    curentIndex--;
    MainWindow::play();
    return curentIndex;
}
QString MainWindow::play()
{
    QString str;

    str = model->record(curentIndex).value(1).toString();

    //qDebug()<<"row="<<curentIndex<< str;
    Phonon::MediaSource source(str);
    mediaObject->setCurrentSource(source);
    mediaObject->play();

   ui->tableView->selectRow(curentIndex);
return str;
}
int MainWindow::stop()
{
mediaObject->stop();
return mediaObject->state();
}
int MainWindow::pause()
{
mediaObject->pause();
return mediaObject->state();
}
void MainWindow::tableClicked(int row, int /* column */)
 {
     bool wasPlaying = mediaObject->state() == Phonon::PlayingState;

     mediaObject->stop();

     if (row >= sources.size())
         return;

     mediaObject->setCurrentSource(sources[row]);
qDebug()<<sources.size();

 }
QString MainWindow::on_tableView_clicked()
{
    QModelIndex index;
    QString str;
    id = model-> record(index.row()).value("ID").toInt();
    currentid = id;
    index = ui->tableView->selectionModel()->currentIndex();
    str = model->record(index.row()).value("Location").toString();
    curentIndex=index.row();
    qDebug()<<str;
    Phonon::MediaSource source(str);
return str;
}


void MainWindow::on_ButtonNext_clicked()
{

}

void MainWindow::on_ButtonPrev_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
       tr("Open Image"), "", tr("Musik Files (*.mp3 *.wav *.ogg)"));
       qDebug()<<fileName;
         QSqlQuery quer;
         QString query;

       //quer.exec("INSERT INTO tablica (Artist, Title, Location)  VALUES ('rr','Tata','rr');");
       //  quer.exec("INSERT INTO tablica (ID, Artist, Title, Location)  VALUES ('5',Nana','Taaaaa','jhh');");


       query ="INSERT INTO tablica (Artist, Title, Location)  VALUES ('','','"+fileName+"')";
       qDebug()<<query;
         quer.exec(query);
         model->select();

}

void MainWindow::on_ButtonPlay_clicked()
{

}
