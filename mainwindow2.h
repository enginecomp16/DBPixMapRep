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
    QPen point;
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
    QGraphicsLineItem *l80;
    QGraphicsLineItem *l81;
    QGraphicsLineItem *l82;
    QGraphicsLineItem *l83;
    QGraphicsLineItem *l84;
    QGraphicsLineItem *l85;
    QGraphicsLineItem *l86;
    QGraphicsLineItem *l87;
    QGraphicsLineItem *l88;
    QGraphicsLineItem *l89;
    QGraphicsLineItem *l90;
    QGraphicsLineItem *l91;
    QGraphicsLineItem *l92;
    QGraphicsLineItem *l93;
    QGraphicsLineItem *l94;
    QGraphicsLineItem *l95;
    QGraphicsLineItem *l96;
    QGraphicsLineItem *l97;
    QGraphicsLineItem *l98;
    QGraphicsLineItem *l99;
    QGraphicsLineItem *l100;
    QGraphicsLineItem *l101;
    QGraphicsLineItem *l102;
    QGraphicsLineItem *l103;
    QGraphicsLineItem *l104;
    QGraphicsLineItem *l105;
    QGraphicsLineItem *l106;
    QGraphicsLineItem *l107;
    QGraphicsLineItem *l108;
    QGraphicsLineItem *l109;
    QGraphicsLineItem *l110;
    QGraphicsLineItem *l111;
    QGraphicsLineItem *l112;
    QGraphicsLineItem *l113;
    QGraphicsLineItem *l114;
    QGraphicsLineItem *l115;
    QGraphicsLineItem *l116;
    QGraphicsLineItem *l117;
    QGraphicsLineItem *l118;
    QGraphicsLineItem *l119;
    QGraphicsLineItem *l120;
    QGraphicsLineItem *l121;
    QGraphicsLineItem *l122;





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
