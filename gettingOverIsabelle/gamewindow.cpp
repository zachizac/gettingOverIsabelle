#include "gamewindow.h"
#include "mainwindow.h"
#include "ui_gamewindow.h"
#include <QMovie>
#include <QLabel>
#include <QGraphicsView>


GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);

    connect(ui->actionMenu_Principal,SIGNAL(triggered(bool)),this,SLOT(backToMainWin()));

    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->addRect(QRectF(0,0,200,100));

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
