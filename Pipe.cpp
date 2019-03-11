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
    int height = std::rand() % 300 + 25;
    setRect(500,0,width,height);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::green);
    setBrush(brush);

    // make focusable
    setFlag(QGraphicsItem::ItemIsFocusable,true);

}

Pipe::~Pipe(){};


void Pipe::doSomething(){
    int xPos = x() - 100;
    int yPos = y();
    setPos(xPos,yPos);
    std::cout << "function working";
}
















