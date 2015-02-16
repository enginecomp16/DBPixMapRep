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
#include <QtSql>
//#include <QColor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
  //  ui->graphicsView->setScene(scene);
    QPen  path1(Qt::black);
    point.setColor("brown");
    //QPen  beacon(Qt::blue);
    beacon = new QPen(Qt::blue);
    point.setWidth(50); //Make easier to view - testing only
    beacon->setWidth(20);
    path1.setWidth(6);
    QPixmap pix("C://Users/Elaine/Downloads/pix.jpg");  //insert file path to image here
    scene->addPixmap(pix);
    //Node0 = new QGraphicsItem;
//    Node1 = scene->addLine(980,500,980,500,point);
//    Node2 = scene->addLine(1065,565,1065,565,point);
//    Node3 = scene->addLine(1115,513,1115,513,point);
//    Node4 = scene->addLine(1335,521,1335,521,point);
//    Node5 = scene->addLine(1300,563,1300,563,point);
//    Node6 = scene->addLine(1450,563,1450,563,point);
//    Node7 = scene->addLine(1475,520,1475,520,point);
//    Node8 = scene->addLine(1700,480,1700,480,point);
    //Node9 = scene->addLine(1800,225,1800,225,point);


    testnode = Node1;
    QBrush  paint;
    paint.setColor(Qt::blue);
    scene->setBackgroundBrush(paint);
    ui->graphicsView->setStyleSheet("background-color: white;");
   // ui->graphicsView->fitInView(pix.rect().d,Qt::KeepAspectRatio);
    ui->graphicsView->setScene(scene);

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

    timer = new QTimer(this);
    timer->setInterval(1000);
    timer->start();

    testtimer = new QTimer(this);
    testtimer->setInterval(1000);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(rotateup()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(rotatedown()));
    connect(ui->Zoom, SIGNAL(clicked()),this, SLOT(zoomIn()));
    connect(ui->OutButton,SIGNAL(clicked()),this,SLOT(zoomOut()));
    //connect(timer,SIGNAL(timeout()),this,SLOT(beaconn()));
    connect(ui->pushButton_3,SIGNAL(clicked()),SLOT(activationtoggle()));
    //connect(testtimer,SIGNAL(timeout()),this,SLOT(nodehop()));


//************************************************************************

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
     connect(ui->clearButton, SIGNAL(clicked()), ui->lineEdit, SLOT(clear()));
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
