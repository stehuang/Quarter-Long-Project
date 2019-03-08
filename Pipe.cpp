#include "Pipe.h"
#include "Game.h"
#include <QBrush>
#include <cstdlib>

extern Game* game;


Pipe::Pipe(QWidget *parent)
{
    // draw rect
    int width = std::rand() % (100 + 1 - 25) + 25;
    int height = std::rand() % (350 + 1 - 100) + 100;
    setRect(0,0,width,height);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::green);
    setBrush(brush);

    // make focusable
    setFlag(QGraphicsItem::ItemIsFocusable,true);

}

Pipe::~Pipe(){};
