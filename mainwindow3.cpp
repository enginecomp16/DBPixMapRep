#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPalette>
#include <QColor>
#include <QBrush>
#include <QLabel>
#include <QPen>
#include <qmath.h>
#include <qglobal.h>
#include <QTime>
#include <stdio.h>
#include <QGraphicsSceneHoverEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtSql>
//#include <qr
//#include <QColor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
  //  ui->graphicsView->setScene(scene);
    QPen  path1(Qt::black);
    QPen  point;
    point.setColor("brown");
    //QPen  beacon(Qt::blue);
    beacon = new QPen(Qt::blue);
    point.setWidth(23);
    beacon->setWidth(20);
    path1.setWidth(6);
    QPixmap pix("C://Users/Jacob/Desktop/CoordExtrap.jpg");
    scene->addPixmap(pix);
    //Node1 = new QGraphicsItem;
    Node1 = scene->addLine(163,850,163,850,point);
//    Node2 = scene->addLine(1065,565,1065,565,point);
//    Node3 = scene->addLine(1115,513,1115,513,point);
//    Node4 = scene->addLine(1335,521,1335,521,point);
//    Node5 = scene->addLine(1300,563,1300,563,point);
//    Node6 = scene->addLine(1450,563,1450,563,point);
   // Node7 = scene->addLine(1475,520,1475,520,point);
  //  Node8 = scene->addLine(1700,480,1700,480,point);
    //Node9 = scene->addLine(1800,225,1800,225,point);

    testnode = Node1;
    QBrush  paint;
    paint.setColor(Qt::blue);
    QPen clear(Qt::green);
    clear.setWidth(6);
    scene->setBackgroundBrush(paint);
    ui->graphicsView->setStyleSheet("background-color: white;");
   // ui->graphicsView->fitInView(pix.rect().d,Qt::KeepAspectRatio);


    ui->graphicsView->setScene(scene);
    ui->graphicsView->setMouseTracking(true);
    //scene->mouseMoveEvent(QGraphicsSceneMouseEvent* hover1);
  //  setMouseTracking(true);
   //virtual void ui->graphicsView->mouseMoveEvent(QGraphicsSceneMouseEvent* hover2);
   // virtual void ui->graphicsView->mouseMoveEvent(QGraphicsSceneMouseEvent* hover2);

    /*
    Section1line1a = scene->addLine(100,100,100,750,path1);
    Section1line1b = scene->addLine(100,100,250,25,path1);
    Section1line1c = scene->addLine(250,25,2500,25,path1);
    Section1Line1d = scene->addLine(2500,25,2650,100,path1);
    Section1Line1e = scene->addLine(2650,100,2650,750,path1);
    Section1Line1f = scene->addLine(2650,750,2500,1050,path1);
    Section1Line1g = scene->addLine(2500,1050,2100,1050,path1);
    Section1Line1h = scene->addLine(2100,1050,1950,750,path1);
    Section1Line1i = scene->addLine(1950,750,1950,650,path1);
    Section1Line1j = scene->addLine(1950,650,1850,475,path1);
    Section1Line1k = scene->addLine(1850,475,1750,475,path1);
    Section1Line1L = scene->addLine(1750,475,1740,505,path1);
    Section1Line1m = scene->addLine(1740,505,1140,505,path1);
    Section1Line1n = scene->addLine(1140,505,1130,475,path1);
*/

    l1 = scene->addLine(15,225,195,45,path1);
    l2 = scene->addLine(195,45,503,45,path1);
    l3 = scene->addLine(503,45,608,78,path1);
    l4 = scene->addLine(608,78,932,78,path1);
    l5 = scene->addLine(932,78,2312,78,path1);
    l6 = scene->addLine(2312,78,2585,78,path1);
    l7 = scene->addLine(2585,78,2697,45,path1);
    l8 = scene->addLine(2697,45,3007,45,path1);
    l9 = scene->addLine(3007,45,3184,225,path1);
    l10 = scene->addLine(3184,225,3184,1175,path1);
    l11 = scene->addLine(3184,1175,2978,1382,path1);
    l12 = scene->addLine(2978,1382,2505,1382,path1);
    l13 = scene->addLine(2505,1382,2325,1204,path1);
    l14 = scene->addLine(2325,1204,2325,950,path1);
    l15 = scene->addLine(2325,950,2325,704,path1);
    l16 = scene->addLine(2325,704,2235,610,path1);
    l17 = scene->addLine(2235,610,2030,610,path1);
    l18 = scene->addLine(2030,610,1927,641,path1);
    l19 = scene->addLine(1927,641,1274,641,path1);
    l20 = scene->addLine(1274,641,1167,610,path1);
    l21 = scene->addLine(1167,610,964,610,path1);
    l22 = scene->addLine(964,610,875,700,path1);
    l23 = scene->addLine(875,700,875,950,path1);
    l24 = scene->addLine(875,950,875,1195,path1);
    l25 = scene->addLine(875,1195,697,1382,path1);
    l26 = scene->addLine(697,1382, 221,1382,path1);
    l27 = scene->addLine(221,1382,15,1175,path1);
   // l28 = scene->addLine(15,1175,75,257,path1);
    l28 = scene->addLine(15,1175,15,225,path1);
    l29 = scene->addLine(75,257,252,78,path1);
    l30 = scene->addLine(252,78,600,78,path1);
   // l29 = scene->addLine(75,257,252,78,path1);
   // l30 = scene->addLine(252,78,952,75,path1);
    l31 = scene->addLine(75,952,105,1085,path1);
    l32 = scene->addLine(105,1085,310,1292,path1);
    l33 = scene->addLine(310,1292,635,1292,path1);
    l35 = scene->addLine(75,1145,252,1325,path1);
    l41 = scene->addLine(815,580,845,610,path1);
    l42 = scene->addLine(845,610,740,507,path1);
    l43 = scene->addLine(740,507,635,405,path1);
    l44 = scene->addLine(635,405,635,315,path1);
    l45 = scene->addLine(635,315,458,137,path1);
    l46 = scene->addLine(458,137,280,137,path1);
    l47 = scene->addLine(280,137,133,288,path1);
    l48 = scene->addLine(133,288,133,345,path1);
    l49 = scene->addLine(133,345,400,610,path1);
    l50 = scene->addLine(400,610,635,850,path1);
    l51 = scene->addLine(635,850,635,1028,path1);
    l52 = scene->addLine(635,1028,488,1175,path1);
    l53 = scene->addLine(488,1175,310,1175,path1);
    l54 = scene->addLine(310,1175,163,1028, path1);
    l55 = scene->addLine(163,1028,163,850,path1);
    l56 = scene->addLine(163,850,392,611,clear);
    l62 = scene->addLine(1198,228,2013,228,path1);
    l64 = scene->addLine(1303,258,1893,258,path1);
    l66 = scene->addLine(1423,288,2268,288,path1);
    l68 = scene->addLine(1543,318,1573,318,path1);
    l71 = scene->addLine(1573,318,2285,318,path1);
    l69 = scene->addLine(1573,318,1663,348,path1);
    l70 = scene->addLine(1663,348,2312,348,path1);

 //   l71 = scene->addLine(1663,348,1693,378,path1);
    l72 = scene->addLine(815,288,964,138,path1);
    l73 = scene->addLine(964,138,1142,138,path1);
    l74 = scene->addLine(1142,138,2117,138,path1);
    l75 = scene->addLine(2117,138,2237,138,path1);

    l76 = scene->addLine(2237,138,2387,288,path1);
    l77 = scene->addLine(2387,288,2387,498,path1);
   // l78 = scene->addLine(2387,498,1723,423,path1);
  //  l79 = scene->addLine(1723,423,1723,348,path1);
    //l71 =
   l84 = scene->addLine(2567,408,2567,318,path1);
   l85 = scene->addLine(2567,318,2747,138,path1);
   l86 = scene->addLine(2747,138,2927,138,path1);
   l87 = scene->addLine(2927,138,3077,288,path1);
   l88 = scene->addLine(3077,288,3077,348,path1);
   l89 = scene->addLine(3077,348,2807,618,path1);
   l90 = scene->addLine(2807,618,2567,858,path1);
   l91 = scene->addLine(2567,858,2567,1038,path1);
   l92 = scene->addLine(2567,1038,2717,1188,path1);
   l93 = scene->addLine(2717,1188,2899,1188,path1);
   l94 = scene->addLine(2899,1188,3047,1038,path1);
   l95 = scene->addLine(3047,1038,3049,858,path1);
   l96 = scene->addLine(3049,858,2687,498,path1);
  // l97 = scene->addLine(2687,498,2387,723,path1);
   l98 = scene->addLine(2387,723,2387,1188,path1);
   l99 = scene->addLine(2387,1188,2537,1338,path1);
   l100 = scene->addLine(2537,1338,2957,1338,path1);
   l101 = scene->addLine(2957,1338,3137,1158,path1);
   l102 = scene->addLine(3137,1158,3137,978,path1);
   l103 = scene->addLine(3137,978,3107,1098,path1);
   l104 = scene->addLine(3107,1098,2899,1308,path1);
   l105 = scene->addLine(2899,1308,2567,1308,path1);
  // l106 = scene->addLine(2367,1308,3137,258,path1);
   l107 = scene->addLine(3137,258,2947,75,path1);
  // l108 = scene->addLine(2947,75,2357,618,path1);
   l110 = scene->addLine(2089,464,1912,464,path1);
   l111 = scene->addLine(1912,464,1230,464,path1);
   l112 = scene->addLine(1230,464,1110,464,path1);
   l113 = scene->addLine(1230,464,1334,492,path1);
   l114 = scene->addLine(1334,492,1807,492,path1);
   //l115 = scene->addLine(1807,492,1690,424,path1);
   //l116 = scene->addLine(1690,424,1570,555,path1);
   //l117 = scene->addLine(1570,555,1110,424,path1);
   //l118 = scene->addLine(1110,424,1082,555,path1);
   //l119 = scene->addLine(1082,555,518,492,path1);
   l115 = scene->addLine(1912,462,1570,550,path1);
   l116 = scene->addLine(1570,550,1082,550,path1);
   l117 = scene->addLine(1670,520,1120,520,path1);

   // l56 = scene->addLine(163,850,815,495,path1);
   // l57 = scene->addLine(815,495,845,420,path1);
   // l58 = scene->addLine(815,420,845,315,path1);
   // l36 = scene->addLine(252,1325,65,1325,path1);
   // l37 = scene->addLine(65,1325,815,1175,path1);
  //  l37 = scene->addLine()
 //   l32 = scene->addLine(75,952,105,1085,path1);
 //   l33 = scene->addLine(105,1085,310,1292,path1);
 //   l34 = scene->addLine(310,1292,635,1292,path1);
  //  l35 = scene->addLine(635,1292,75,1145,path1);


    timer = new QTimer(this);
    timer->setInterval(1000);
    timer->start();

    testtimer = new QTimer(this);
    testtimer->setInterval(1000);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(rotateup()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(rotatedown()));
    connect(ui->Zoom, SIGNAL(clicked()),this, SLOT(zoomIn()));
    connect(ui->OutButton,SIGNAL(clicked()),this,SLOT(zoomOut()));
    connect(timer,SIGNAL(timeout()),this,SLOT(beaconn()));
    connect(ui->pushButton_3,SIGNAL(clicked()),SLOT(activationtoggle()));
    connect(testtimer,SIGNAL(timeout()),this,SLOT(nodehop()));

    setMouseTracking(true);
    scene->installEventFilter(this);


  //*****************************************************************************
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("team3a.db");
     if(!db.open())
     {
         qDebug() << db.lastError();
         qDebug() << "Error: unable to connect due to above error";
     }
     QSqlQuery q;
     q.exec("Drop table dummytrain");
     q.exec("CREATE TABLE dummytrain (node INTEGER, xpos INTEGER, ypos INTEGER)");
     q.exec("INSERT INTO dummytrain VALUES( 0,1500,700)");
     q.exec("INSERT INTO dummytrain VALUES( 1,980,500)");
     q.exec("INSERT INTO dummytrain VALUES( 2,1115,513)");
     q.exec("INSERT INTO dummytrain VALUES( 3,1335,521)");
     q.exec("INSERT INTO dummytrain VALUES( 4,1335,400)");
     q.exec("INSERT INTO dummytrain VALUES( 5,1200,521)");
     q.exec("INSERT INTO dummytrain VALUES( 6,1200,621)");

     q.exec("Drop table loco");
     q.exec("CREATE TABLE loco (node INTEGER, train INTEGER)");
     q.exec("INSERT INTO loco VALUES( 0,0)");
     q.exec("INSERT INTO loco VALUES( 1,1)");
     q.exec("INSERT INTO loco VALUES( 2,0)");
     q.exec("INSERT INTO loco VALUES( 3,2)");
     q.exec("INSERT INTO loco VALUES( 4,0)");
     q.exec("INSERT INTO loco VALUES( 5,3)");
     q.exec("INSERT INTO loco VALUES( 6,0)");
    // connect(ui->clearButton, SIGNAL(clicked()), ui->lineEdit, SLOT(clear()));
     connect(ui->sendButton, SIGNAL(clicked()), this, SLOT(sendinfo()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::rotateup()
{
    ui->graphicsView->rotate(10);
    //ui->graphicsView->centerOn(); pass in section number for live feed
}

void MainWindow::rotatedown()
{
    ui->graphicsView->rotate(-10);
}

void MainWindow::zoomIn()
{
    ui->graphicsView->scale(1.1,1.1);
}
void MainWindow::zoomOut()
{
    ui->graphicsView->scale(.8,.8);
}

void MainWindow::beaconn()
{
    if (tmp == true)
    {
    Node1->hide();
    Node1->setPen(*beacon);
    //Node1->setPen(QPen temp(Qt::blue));
    tmp = false;
    scene->update();
    }
    else
    {
        Node1->show();
        scene->update();
        tmp = true;
    }
}

void MainWindow::activationtoggle()
{
    testnode->hide();
    scene->update();
    timer->stop();
    testtimer->stop();
    QPen testpen;
    testpen.setColor("brown");
    testpen.setWidth(23);
    //testnode = Node1;
    testnode->show();
    testnode->setPen(testpen);
    if (toggle == true)
    {
       toggle = false;
       //testtimer->start();
       activationtester();
    }
    else
    {
        toggle = true;
    }
}

void MainWindow::activationtester()
{
    QString myarray[] = {"Node2","Node3","Node4","Node5","Node6","Node7","Node8"};
    QString ran;
    int random = qrand() % 8;
   // ran = rand(myarray);
    std::map<QString,QGraphicsLineItem*> map;
    map["Node2"]= Node2;
    map["Node3"]= Node3;
    map["Node4"]= Node4;
    map["Node5"]= Node5;
    map["Node6"]= Node6;
    map["Node7"]= Node7;
    map["Node8"]= Node8;

    testnode = map[myarray[random]];
    QPen bluepen(Qt::blue);
    bluepen.setWidth(23);
    testnode->setPen(bluepen);
    testtimer->start();
    nodehop();
}

void MainWindow::nodehop()
{
    if (tmp2 == true)
    {
    testnode->hide();
    testnode->setPen(*beacon);
    //Node1->setPen(QPen temp(Qt::blue));
    tmp2 = false;
    scene->update();
    }
    else
    {
        testnode->show();
        scene->update();
        tmp2 = true;
    }
}

bool MainWindow::eventFilter(QObject* s,QEvent* h)
{
    scene->update();
    int xval;
    int yval;
    if (s == ui->graphicsView->scene())
   {
        if (h->type() == QEvent::GraphicsSceneMouseMove)
        {
           QGraphicsSceneMouseEvent* move = static_cast<QGraphicsSceneMouseEvent*>(h);
           xval = move->scenePos().toPoint().x();
           yval = move->scenePos().toPoint().y();
           ui->pushButton_4->setText("XCoor: "+QString::number(xval));
           ui->pushButton_5->setText("YCoor: "+QString::number(yval));
           return false;
        }
    }
    //return (s,h);
    return false;
}

//*********************************************************************

void MainWindow::sendinfo()
{
    QSqlQuery q;

    if(ui->lineEdit->text() == NULL)
    {
        QString defaultcommand = "select train,xpos,ypos from dummytrain natural join loco where train<>0";
        q.exec(defaultcommand);
        qDebug() << "default select: " << defaultcommand << endl;
    }
    else
    {
        q.prepare(ui->lineEdit->text());
        q.exec(ui->lineEdit->text());
        qDebug() << ui->lineEdit->text();
    }
    int i = 0;
    const int numTrains = 5;
    int train[numTrains] = {0};//max number of trains, init to zeros, can retain 0 or train number
    int xpos[numTrains] = {0};
    int ypos[numTrains] = {0};
    while(q.next())
    {

        train[i] = q.value(0).toInt();
        xpos[i] = q.value(1).toInt();
        ypos[i] = q.value(2).toInt();
        qDebug() << q.value(0).toInt() << q.value(1).toInt() << q.value(2).toInt();
        i++;
    }
    qDebug() << endl;
    for(int j = 0; j<5; j++)
    {
        if(train[j] != 0)
        {
            if(train[j] == 1)
            {
                if(Node1)
                {
                    Node1->setVisible(false);
                }
                Node1 = scene->addLine(xpos[j],ypos[j],xpos[j],ypos[j],point);
                continue;
            }
            else if(train[j] == 2)
            {
                if(Node2)
                {
                    Node2->setVisible(false);
                }
                Node2 = scene->addLine(xpos[j],ypos[j],xpos[j],ypos[j],point);
                continue;
            }
            else if(train[j] == 3)
            {
                if(Node3)
                {
                    Node3->hide();
                }
                Node3 = scene->addLine(xpos[j],ypos[j],xpos[j],ypos[j],point);
            }
        }
    }
    scene->update();
    ui->lineEdit->clear();
}


