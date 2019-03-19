#include "Game.h"
#include "Bird.h"
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <iostream>
#include <QTimer>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>


Game::Game(QWidget *parent):QGraphicsView(parent){
    // set scene size and window
    scene->setBackgroundBrush(Qt::black);
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
       Pipe* object = *i;
       delete object;
       i = pipes.erase(i);
     }
}

void Game::start(){
   bird->setPos(0,200);
   bird->setFlag(QGraphicsItem::ItemIsFocusable);

   // add the item to the scene
   scene->addItem(bird);

  for(int i=0; i<1; i++){
<<<<<<< HEAD
       pipes[i]->setPos(300,0);
=======
       pipes[i]->setPos(600,300);
>>>>>>> gameworld
       scene->addItem(pipes[i]);
       ++pipeCount;
   }

        bird->setFocus();

        QTimer *myTimer = new QTimer(this);
        QObject::connect(myTimer, SIGNAL(timeout()), this, SLOT(move()));
        bird->setFocus();
        myTimer->start(500);

        QTimer *pipeTimer = new QTimer(this);
        QObject::connect(pipeTimer, SIGNAL(timeout()), this, SLOT(addPipe()));
        pipeTimer->start(3000);


}


void Game::move(){
    bird->setFocus();
    bird->gravity();
    for(int i=0; i<pipeCount; i++){
        if(pipes[i] -> isAlive()){
            pipes[i]->doSomething();
            std::cout << "Pipe"<< ": " << pipes[i] ->getPos() << endl;
        }
    }
    //cleanObjects();
    //addPipe();
}



void Game::addPipe(){
<<<<<<< HEAD
    srand (time(NULL));
    int yPos = std::rand()%2;
    if(yPos == 1)
        yPos = 300;
    pipes.push_back(new Pipe(nullptr));
    ++pipeCount;
    pipes[pipeCount-1]->setPos(500,yPos);
    scene->addItem(pipes[pipeCount-1]);
    std::cout << "pipe count: " << pipeCount << endl;
=======
//    if(pipeCount <= 3){
        pipes.push_back(new Pipe(nullptr));
        ++pipeCount;
        pipes[pipeCount-1]->setPos(600,100);
        scene->addItem(pipes[pipeCount-1]);
        std::cout << "pipe count: " << pipeCount << endl;
//    }

//    Pipe* pipe = new Pipe(nullptr);
//    pipe->setPos(700,300);
//    scene->addItem(pipe);
>>>>>>> gameworld
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




