#include "gamewindow.h"
#include "mainwindow.h"
#include "ui_gamewindow.h"
#include <QMovie>
#include <QLabel>
#include <QGraphicsView>
#include <QDebug>


GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);

    connect(ui->actionMenu_Principal,SIGNAL(triggered(bool)),this,SLOT(backToMainWin()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(yolo()));

    scene = new QGraphicsScene(this);
    benji = new QRectF(0,0,100,100);
    scene->addRect(*benji);

    ui->graphicsView->setScene(scene);
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::backToMainWin()
{
    MainWindow *mw = new MainWindow(this);
    mw->show();
}

void GameWindow::yolo()
{
    benji->moveTo(50,50);
    printf("yyoyoyoy");
}
