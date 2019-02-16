#include "Game.h"
#include "Bird.h"


Game::Game(QWidget *parent):QGraphicsView(parent){
    // set scene size and window
    scene = new QGraphicsScene(0, 0, 400, 300);
    setScene(scene);
}

void Game::start(){
    return;
}
