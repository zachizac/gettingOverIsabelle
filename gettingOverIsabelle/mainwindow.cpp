#include "mainwindow.h"
#include "gamewindow.h"
#include <QMovie>
#include <QPixmap>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this, SLOT(openGameWin()));
    afficheGif();
}

MainWindow::~MainWindow()
{
delete ui;
}

void MainWindow::afficheGif()
{
    QMovie *movie= new QMovie(":/sources/Isagif.gif");
    QLabel *isaLabel = ui->isaGif_label;
    isaLabel->setMovie(movie);
    movie->start();
    isaLabel->show();
}

void MainWindow::openGameWin()
{
    GameWindow *gw = new GameWindow(this);
    gw->show();
}
