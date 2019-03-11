#include "Pipe.h"
#include "Game.h"
#include <QBrush>
<<<<<<< HEAD
#include <cstdlib>
=======
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
>>>>>>> motion

extern Game* game;


Pipe::Pipe(QWidget *parent)
{
    // draw rect
<<<<<<< HEAD
    int width = std::rand() % (100 + 1 - 25) + 25;
    int height = std::rand() % (350 + 1 - 100) + 100;
=======
    srand (time(NULL));
    int width = std::rand() % 100 + 10;
    int height = std::rand() % 300 + 25;
>>>>>>> motion
    setRect(0,0,width,height);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::green);
    setBrush(brush);

    // make focusable
    setFlag(QGraphicsItem::ItemIsFocusable,true);

}

Pipe::~Pipe(){};
