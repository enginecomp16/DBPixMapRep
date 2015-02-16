#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsColorizeEffect>
#include <QLabel>
#include <QBrush>
#include <QTimer>
#include <QGraphicsItem>
#include <QPen>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int numTrains = 5;
    QLabel label;
    QGraphicsScene *scene;
    QGraphicsLineItem *Node1 = NULL;
    QGraphicsLineItem *Node2 = NULL;
    QGraphicsLineItem *Node3 = NULL;
    QGraphicsLineItem *Node4;
    QGraphicsLineItem *Node5;
    QGraphicsLineItem *Node6;
    QGraphicsLineItem *Node7;
    QGraphicsLineItem *Node8;
    QGraphicsLineItem *Node9;
    QTimer* timer;
    QTimer* testtimer;
    QPen * beacon;
    bool toggle = true;
    bool tmp = true;
    bool tmp2 = true;
    QGraphicsLineItem * testnode;
    QPen  point;
   // scene->setBackgroundBrush();
    /*
    QGraphicsLineItem *Section1line1a;
    QGraphicsLineItem *Section1line1b;
    QGraphicsLineItem *Section1line1c;
    QGraphicsLineItem *Section1Line1d;
    QGraphicsLineItem *Section1Line1e;
    QGraphicsLineItem *Section1Line1f;
    QGraphicsLineItem *Section1Line1g;
    QGraphicsLineItem *Section1Line1h;
    QGraphicsLineItem *Section1Line1i;
    QGraphicsLineItem *Section1Line1j;
    QGraphicsLineItem *Section1Line1k;
    QGraphicsLineItem *Section1Line1L;
    QGraphicsLineItem *Section1Line1m;
    QGraphicsLineItem *Section1Line1n;
    //QGraphicsLineItem

    //
    QGraphicsLineItem *Section1line2a;
    QGraphicsLineItem *Section1line2b;
    QGraphicsLineItem *Section1line3a;
    QGraphicsLineItem *Section1line3b;
    QGraphicsLineItem *Section1line3c;
    QGraphicsLineItem *Node1;
*/
public slots:
    void rotateup();
    void rotatedown();
    void zoomIn();
    void zoomOut();
    void beaconn();
    void activationtoggle();
    void activationtester();
    void nodehop();
    void sendinfo();
};

#endif // MAINWINDOW_H
