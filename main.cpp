
#include <QApplication>
#include "mainwindow.h"
#include "Game.h"
#include "Bird.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Game* game = new Game();
    game->start();
    game->show();


    return a.exec();
}

