#include "Game.h"
#include "Bird.h"
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <iostream>

Game::Game(QGraphicsScene *parent):QGraphicsView(parent){
    // set scene size and window
    //QGraphicsScene* scene = new QGraphicsScene(0, 0, 400, 300);
    setScene(scene);
    pipeCount = 0;
}

void Game::start(){
   bird->setPos(0,125);
   bird->setFlag(QGraphicsItem::ItemIsFocusable);
   bird->setFocus();

   // add the item to the scene
   scene->addItem(bird);

   //addPipe();
   //if(pipeCount < 3){
       //Pipe* pipe = new Pipe(nullptr);
       pipe->setPos(400,0);
       pipe->setFlag(QGraphicsItem::ItemIsFocusable);
       pipe->setFocus();
       scene->addItem(pipe);
       ++pipeCount;
   //}

}

void Game::addPipe(){
    if(pipeCount < 3){
        pipe->setPos(800,600);
        pipe->setFlag(QGraphicsItem::ItemIsFocusable);
        pipe->setFocus();
        scene->addItem(pipe);
        ++pipeCount;
    }
    //std::cout << "add pipe";
}
