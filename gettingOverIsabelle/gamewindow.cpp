#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QMovie>
#include <QLabel>

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
}

GameWindow::~GameWindow()
{
    delete ui;
}
