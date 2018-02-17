#include "gamewindow.h"
#include "mainwindow.h"
#include "ui_gamewindow.h"
#include <QMovie>
#include <QLabel>

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    connect(ui->actionMenu_Principal,SIGNAL(triggered(bool)),this,SLOT(backToMainWin()));
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
