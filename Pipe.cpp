#include "Pipe.h"
#include "Game.h"
#include <QBrush>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <iostream>

extern Game* game;


Pipe::Pipe(QGraphicsItem* parent)
{
    // draw rect
    srand (time(NULL));
    int width = std::rand() % 100 + 10;
    int height = std::rand() % 250+ 25;
    setRect(500,0,width,height);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::green);
    setBrush(brush);

    // make focusable
    setFlag(QGraphicsItem::ItemIsFocusable,true);

}

Pipe::~Pipe(){};


string Pipe::getPos(){
    string xPos = to_string(x());
    string yPos = to_string(y());
    string pos = "(" + xPos + ", " + yPos + ")";
    return pos;
}


bool Pipe::isAlive(){
    if(x() < -600)
        return false;
    return true;
}


void Pipe::doSomething(){
    int xPos = x() - 50;
    int yPos = y();
    setPos(xPos,yPos);
}















