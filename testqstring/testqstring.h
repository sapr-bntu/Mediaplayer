#ifndef TESTQSTRING_H
#define TESTQSTRING_H

#include <QMainWindow>

namespace Ui {
class testqstring;
}

class testqstring : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit testqstring(QWidget *parent = 0);
    ~testqstring();
    
private:
    Ui::testqstring *ui;
};

#endif // TESTQSTRING_H
