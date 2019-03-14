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
    for(int i=0; i<2; i++){
        pipes.push_back(new Pipe(nullptr));
    }
}

Game::~Game(){
    vector<Pipe*>::iterator i;
    i = pipes.begin();
    for(; i != pipes.end(); i++){
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

  // for(int i=0; i<2; i++){
       pipes[0]->setPos(300,100);
       scene->addItem(pipes[0]);
       ++pipeCount;
       pipes[1]->setPos(300,300);
       scene->addItem(pipes[1]);
       ++pipeCount;
  // }

//       pipe->setPos(400,0);
//       pipe->setFlag(QGraphicsItem::ItemIsFocusable);
//       scene->addItem(pipe);
//       ++pipeCount;
   // pipe->setFocus();
        bird->setFocus();
   // while(bird->isAlive()){
        QTimer *myTimer = new QTimer(this);
        QObject::connect(myTimer, SIGNAL(timeout()), this, SLOT(move()));
        //QObject::connect(myTimer, SIGNAL(timeout()), this, SLOT(addPipe()));
        bird->setFocus();
        myTimer->start(500);


}


void Game::move(){
    bird->setFocus();
    bird->gravity();
    for(int i=0; i<pipeCount; i++){
        //if(pipes[i] -> isAlive())
            pipes[i]->doSomething();
            std::cout << "Pipe"<< ": " << pipes[i] ->getPos() << endl;
    }
    cleanObjects();
    // addPipe();
}



void Game::addPipe(){
//    if(pipeCount <= 3){
        pipes.push_back(new Pipe(nullptr));
        ++pipeCount;
        pipes[pipeCount-1]->setPos(800,600);
        scene->addItem(pipes[pipeCount-1]);
        std::cout << "pipe count: " << pipeCount << endl;
//    }

//    Pipe* pipe = new Pipe(nullptr);
//    pipe->setPos(700,300);
//    scene->addItem(pipe);
}


void Game::cleanObjects(){
    for(int i=0; i < pipeCount; ++i){
        if(pipes[i]->isAlive() == false){
            --pipeCount;
        }
    }
}




// bird:
// - gravity
// - check for collisions
// - check alive
// - change window
// - turn off gravity
// - show restart button


// print out full list of vector address; print out their current position too;




