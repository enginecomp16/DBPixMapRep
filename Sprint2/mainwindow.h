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
#include <QGraphicsSceneEvent>
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

    QTimer* timer;
    QTimer* testtimer;
    QPen * beacon;
    bool toggle = true;
    bool tmp = true;
    bool tmp2 = true;
    QPen pointyellow;
    QPen pointblue;
    QPen pointpurple;
    QGraphicsLineItem * testnode;
  //  virtual void mouseMoveEvent(QMouseEvent *hover);

    bool eventFilter(QObject *, QEvent*);

    // scene->mouseMoveEvent();
   // void setMouseTracking(bool);
    //QGraphicsSceneEvent *hover;
   // scene->setBackgroundBrush();
   //void eventmaker(QEvent*);
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
    QGraphicsLineItem *l1;
    QGraphicsLineItem *l2;
    QGraphicsLineItem *l3;
    QGraphicsLineItem *l4;
    QGraphicsLineItem *l5;
    QGraphicsLineItem *l6;
    QGraphicsLineItem *l7;
    QGraphicsLineItem *l8;
    QGraphicsLineItem *l9;
    QGraphicsLineItem *l10;
    QGraphicsLineItem *l11;
    QGraphicsLineItem *l12;
    QGraphicsLineItem *l13;
    QGraphicsLineItem *l14;
    QGraphicsLineItem *l15;
    QGraphicsLineItem *l16;
    QGraphicsLineItem *l17;
    QGraphicsLineItem *l18;
    QGraphicsLineItem *l19;
    QGraphicsLineItem *l20;
    QGraphicsLineItem *l21;
    QGraphicsLineItem *l22;
    QGraphicsLineItem *l23;
    QGraphicsLineItem *l24;
    QGraphicsLineItem *l25;
    QGraphicsLineItem *l26;
    QGraphicsLineItem *l27;
    QGraphicsLineItem *l28;
    QGraphicsLineItem *l29;
    QGraphicsLineItem *l30;
    QGraphicsLineItem *l31;
    QGraphicsLineItem *l32;
    QGraphicsLineItem *l33;
    QGraphicsLineItem *l34;
    QGraphicsLineItem *l35;
    QGraphicsLineItem *l36;
    QGraphicsLineItem *l37;
    QGraphicsLineItem *l38;
    QGraphicsLineItem *l39;
    QGraphicsLineItem *l40;
    QGraphicsLineItem *l41;
    QGraphicsLineItem *l42;
    QGraphicsLineItem *l43;
    QGraphicsLineItem *l44;
    QGraphicsLineItem *l45;
    QGraphicsLineItem *l46;
    QGraphicsLineItem *l47;
    QGraphicsLineItem *l48;
    QGraphicsLineItem *l49;
    QGraphicsLineItem *l50;
    QGraphicsLineItem *l51;
    QGraphicsLineItem *l52;
    QGraphicsLineItem *l53;
    QGraphicsLineItem *l54;
    QGraphicsLineItem *l55;
    QGraphicsLineItem *l56;
    QGraphicsLineItem *l57;
    QGraphicsLineItem *l58;
    QGraphicsLineItem *l59;
    QGraphicsLineItem *l60;
    QGraphicsLineItem *l61;
    QGraphicsLineItem *l62;
    QGraphicsLineItem *l63;
    QGraphicsLineItem *l64;
    QGraphicsLineItem *l65;
    QGraphicsLineItem *l66;
    QGraphicsLineItem *l67;
    QGraphicsLineItem *l68;
    QGraphicsLineItem *l69;
    QGraphicsLineItem *l70;
    QGraphicsLineItem *l71;
    QGraphicsLineItem *l72;
    QGraphicsLineItem *l73;
    QGraphicsLineItem *l74;
    QGraphicsLineItem *l75;
    QGraphicsLineItem *l76;
    QGraphicsLineItem *l77;
    QGraphicsLineItem *l78;
    QGraphicsLineItem *l79;
//    QGraphicsLineItem *l31;
//   QGraphicsLineItem *l32;
//   QGraphicsLineItem *l33;
//   QGraphicsLineItem *l34;
//   QGraphicsLineItem *l35;
//   QGraphicsLineItem *l36;
//   QGraphicsLineItem *l37;
//   QGraphicsLineItem *l38;
//   QGraphicsLineItem *l39;
//   QGraphicsLineItem *l40;
//   QGraphicsLineItem *l41;
//   QGraphicsLineItem *l42;
//   QGraphicsLineItem *l43;
//   QGraphicsLineItem *l44;
//   QGraphicsLineItem *l45;
//   QGraphicsLineItem *l46;
//   QGraphicsLineItem *l47;
//   QGraphicsLineItem *l48;
//   QGraphicsLineItem *l49;
//   QGraphicsLineItem *l50;
//   QGraphicsLineItem *l51;
//   QGraphicsLineItem *l52;
//   QGraphicsLineItem *l53;
//   QGraphicsLineItem *l54;
//   QGraphicsLineItem *l55;
//   QGraphicsLineItem *l56;
//   QGraphicsLineItem *l57;
//   QGraphicsLineItem *l58;
//   QGraphicsLineItem *l59;
//   QGraphicsLineItem *l60;
//   QGraphicsLineItem *l61;
//   QGraphicsLineItem *l62;
//   QGraphicsLineItem *l63;
//   QGraphicsLineItem *l64;
//   QGraphicsLineItem *l65;
//   QGraphicsLineItem *l66;
//   QGraphicsLineItem *l67;
//   QGraphicsLineItem *l68;
//   QGraphicsLineItem *l69;
//   QGraphicsLineItem *l70;
//   QGraphicsLineItem *l71;
//   QGraphicsLineItem *l72;
//   QGraphicsLineItem *l73;
//   QGraphicsLineItem *l74;
//   QGraphicsLineItem *l75;
//   QGraphicsLineItem *l76;
//   QGraphicsLineItem *l77;
//   QGraphicsLineItem *l78;
//   QGraphicsLineItem *l79;



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

signals:

};

#endif // MAINWINDOW_H
