#include "Game.h"
#include "Bird.h"
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>

Game::Game(QGraphicsScene *parent):QGraphicsView(parent){
    // set scene size and window
    //QGraphicsScene* scene = new QGraphicsScene(0, 0, 400, 300);
    setScene(scene);
}

void Game::start(){
   Bird* bird = new Bird(nullptr);
   scene->addItem(bird);
   bird->setFlag(QGraphicsItem::ItemIsFocusable);
   bird->setFocus();

   QGraphicsRectItem * rect = new QGraphicsRectItem();
       rect->setRect(0,0,200,200); // change the rect from 0x0 (default) to 100x100 pixels

       // add the item to the scene
       scene->addItem(bird);
       scene->addItem(rect);

       // make rect focusable
       rect->setFlag(QGraphicsItem::ItemIsFocusable);
       rect->setFocus();
}
