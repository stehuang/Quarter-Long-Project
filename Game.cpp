#include "Game.h"
#include "Bird.h"
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <iostream>
#include <QTimer>
#include <list>

Game::Game(QGraphicsScene *parent):QGraphicsView(parent){
    // set scene size and window
    //QGraphicsScene* scene = new QGraphicsScene(0, 0, 400, 300);
    setScene(scene);
    pipeCount = 0;
    for(int i=0; i<1; i++){
        pipes.push_back(new Pipe(nullptr));
    }
}

Game::~Game(){
    vector<Pipe*>::iterator i;
    i = pipes.begin();
    for(; i != pipes.end(); i++){
//            delete *i; // deletes the actor object and pointer to the actor
//            actors.erase(i);
//            --i;
       Pipe* object = *i;
       delete object;
       i = pipes.erase(i);
     }
}

void Game::start(){
   bird->setPos(0,125);
   bird->setFlag(QGraphicsItem::ItemIsFocusable);


   // add the item to the scene
   scene->addItem(bird);

   for(int i=0; i<1; i++){
       pipes[i]->setPos(600,300);
       pipes[i]->setFlag(QGraphicsItem::ItemIsFocusable);
       scene->addItem(pipe);
       ++pipeCount;
       pipes[i] -> setFocus();
   }

//       pipe->setPos(400,0);
//       pipe->setFlag(QGraphicsItem::ItemIsFocusable);
//       scene->addItem(pipe);
//       ++pipeCount;
   // pipe->setFocus();
    bird->setFocus();
    bool test = true;
    for(int i = 0; i< 40; ++i){
        QTimer::singleShot(6000, bird, SLOT(gravity()));
        QTimer::singleShot(2000, pipe, SLOT(doSomething()));
    }
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
