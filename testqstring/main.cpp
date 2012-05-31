#include <QtGui/QApplication>
#include "testqstring.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testqstring w;
    w.show();
    
    return a.exec();
}
