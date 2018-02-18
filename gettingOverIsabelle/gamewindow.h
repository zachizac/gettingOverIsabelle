#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();

public slots:
    void backToMainWin();
    void yolo();

private:
    Ui::GameWindow *ui;
    QRectF *benji;
    QGraphicsScene *scene;
};

#endif // GAMEWINDOW_H
