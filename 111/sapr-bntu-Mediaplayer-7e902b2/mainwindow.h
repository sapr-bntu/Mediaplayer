#ifndef MAINWINDOW_H
#define MAINWINDOW_H

 #include <QMainWindow>
  #include <QtSql>
#include <phonon>
#include <phonon/audiooutput.h>
 #include <phonon/seekslider.h>
 #include <phonon/mediaobject.h>
 #include <phonon/volumeslider.h>
 #include <phonon/backendcapabilities.h>
 #include <QList>
 #include <QtGui>

class QAction;
 class QTableWidget;
 class QLCDNumber;
namespace Ui {
    class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QModelIndex index;
    int curentIndex;

public slots:

    void delete1();

public slots:
    void on_pushButton_clicked();
    void on_ButtonPrev_clicked();
    void on_ButtonNext_clicked();
    void on_tableView_clicked(QModelIndex index);
   int next();
      QString play();
    int prev();
   // int pause();
    void tableClicked(int row, int column);
    QModelIndex current();
        int stop();

public:
   int currentid;
    int id ;
    Ui::MainWindow *ui;
    Phonon::SeekSlider *seekSlider;
    Phonon::MediaObject *mediaObject;
    Phonon::MediaObject *metaInformationResolver;
    Phonon::AudioOutput *audioOutput;
    Phonon::VolumeSlider *volumeSlider;
    QSqlTableModel *model;


QList<Phonon::MediaSource> sources;
};

#endif // MAINWINDOW_H
