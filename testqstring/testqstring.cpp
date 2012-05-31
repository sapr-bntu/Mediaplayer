#include <QtTest/QtTest>
#include <D:\ferz\tmp\qt\TEST\111\sapr-bntu-Mediaplayer-7e902b2\mainwindow.h>

class TestQString: public QObject
{
    Q_OBJECT
private slots:
    void toUpper();
    void test1();
    void test2();
    void test3();
    void test4();
    void test5();
    void test6();
    void test7();
  void test8();
    void test9();
};

void TestQString::test1()
{
 MainWindow testik;
testik.curentIndex = 1;
testik.next();
QCOMPARE(testik.curentIndex,2);
}
void TestQString::test2()
{ MainWindow testik2;
    testik2.curentIndex=1;
        testik2.play();
    QCOMPARE(testik2.curentIndex,1);

}

void TestQString::test3()
{ MainWindow testik3;
    testik3.currentid=2;
     testik3.delete1();
    QCOMPARE(testik3.currentid,2);
}
void TestQString::test4()
{
    MainWindow testik4;
    QModelIndex ind;
    ind=testik4.current();
    testik4.on_tableView_clicked(ind);
   QCOMPARE(testik4.curentIndex,-1);
}
void TestQString::test5()
{
 MainWindow testik5;
testik5.curentIndex = 2;
testik5.prev();
QCOMPARE(testik5.curentIndex,1);
}
void TestQString::test6()
{ MainWindow testik6;
        testik6.play();
int state = testik6.mediaObject->state();
    QCOMPARE(state,0);
}
void TestQString::test7()
{ MainWindow testik7;
    testik7.stop();
int state = testik7.mediaObject->state();
    QCOMPARE(state,0);
}
void TestQString::test8()
{ MainWindow testik8;
    testik8.next();
    int state = testik8.mediaObject->state();
    QCOMPARE(state,0);
}
void TestQString::test9()
{ MainWindow testik9;
    testik9.prev();
    int state = testik9.mediaObject->state();
    QCOMPARE(state,0);
}
void TestQString::toUpper()
{
    QString str = "Hello";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}

QTEST_MAIN(TestQString)
#include "testqstring.moc"
