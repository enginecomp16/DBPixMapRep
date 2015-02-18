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
    pointblue.setWidth(50);
    pointblue.setColor("blue");
    pointyellow.setColor("yellow");
    pointyellow.setWidth(50);
    pointpurple.setColor("purple");
    pointpurple.setWidth(50);

    //QPen  beacon(Qt::blue);
    beacon = new QPen(Qt::blue);
    beacon->setWidth(20);
    path1.setWidth(6);
    QPixmap pix("C://Users/Elaine/Downloads/CoordExtrap.jpg");
    scene->addPixmap(pix);

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
    l28 = scene->addLine(15,1175,15,225,path1);
    l29 = scene->addLine(75,257,252,78,path1);
    l30 = scene->addLine(252,78,600,78,path1);

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


    timer = new QTimer(this);
    timer->setInterval(5000);
    timer->start();

    testtimer = new QTimer(this);
    testtimer->setInterval(1000);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(rotateup()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(rotatedown()));
    connect(ui->Zoom, SIGNAL(clicked()),this, SLOT(zoomIn()));
    connect(ui->OutButton,SIGNAL(clicked()),this,SLOT(zoomOut()));
    connect(timer,SIGNAL(timeout()),this,SLOT(beaconn()));
   // connect(ui->pushButton_3,SIGNAL(clicked()),SLOT(activationtoggle()));
   // connect(testtimer,SIGNAL(timeout()),this,SLOT(nodehop()));

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
     q.exec("Drop table dummytrain");//prevent duplicate tables
     q.exec("CREATE TABLE dummytrain (node INTEGER, xpos INTEGER, ypos INTEGER)");
     q.exec("INSERT INTO dummytrain VALUES( 0,163,850)");
     q.exec("INSERT INTO dummytrain VALUES( 1,163,1028)");
     q.exec("INSERT INTO dummytrain VALUES( 2,310,1175)");
     q.exec("INSERT INTO dummytrain VALUES( 3,488,1175)");
     q.exec("INSERT INTO dummytrain VALUES( 4,635,1028)");
     q.exec("INSERT INTO dummytrain VALUES( 5,635,850)");
     q.exec("INSERT INTO dummytrain VALUES( 6,400,610)");

     q.exec("Drop table loco");
     q.exec("CREATE TABLE loco (node INTEGER, train INTEGER)");
     q.exec("INSERT INTO loco VALUES( 0,0)");
     q.exec("INSERT INTO loco VALUES( 1,1)");
     q.exec("INSERT INTO loco VALUES( 2,0)");
     q.exec("INSERT INTO loco VALUES( 3,2)");
     q.exec("INSERT INTO loco VALUES( 4,0)");
     q.exec("INSERT INTO loco VALUES( 5,3)");
     q.exec("INSERT INTO loco VALUES( 6,0)");
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
    this->sendinfo();
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
//    map["Node4"]= Node4;
//    map["Node5"]= Node5;
//    map["Node6"]= Node6;
//    map["Node7"]= Node7;
//    map["Node8"]= Node8;

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
    for(int j = 0; j<numTrains; j++)
    {
        if(train[j] != 0)
        {
            if(train[j] == 1)
            {
                if(Node1)
                {
                    Node1->setVisible(false);
                }
                Node1 = scene->addLine(xpos[j],ypos[j],xpos[j],ypos[j],pointblue);
                continue;
            }
            else if(train[j] == 2)
            {
                if(Node2)
                {
                    Node2->setVisible(false);
                }
                Node2 = scene->addLine(xpos[j],ypos[j],xpos[j],ypos[j],pointyellow);
                continue;
            }
            else if(train[j] == 3)
            {
                if(Node3)
                {
                    Node3->hide();
                }
                Node3 = scene->addLine(xpos[j],ypos[j],xpos[j],ypos[j],pointpurple);
            }
        }
    }
    scene->update();
    ui->lineEdit->clear();
}


