#include "Game.h"
#include "Bird.h"
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <iostream>
<<<<<<< HEAD
=======
#include <QTimer>
>>>>>>> motion

Game::Game(QGraphicsScene *parent):QGraphicsView(parent){
    // set scene size and window
    //QGraphicsScene* scene = new QGraphicsScene(0, 0, 400, 300);
    setScene(scene);
    pipeCount = 0;
<<<<<<< HEAD
=======
    //QObject::connect(myTimer, SIGNAL(timeout()), &bird, SLOT(gravity()));
>>>>>>> motion
}

void Game::start(){
   bird->setPos(0,125);
   bird->setFlag(QGraphicsItem::ItemIsFocusable);

<<<<<<< HEAD
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

=======

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
    bird->setFocus();
    bool test = true;
    for(int i = 0; i< 40; ++i){
        QTimer::singleShot(6000, bird, SLOT(gravity()));
        scene->addItem(bird);
    }
>>>>>>> motion
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
