
#include "Bird.h"
#include "Game.h"
#include <QBrush>

extern Game* game;

Bird::Bird(QGraphicsItem* parent)
{
    // draw rect
    setRect(0,0,50,50);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::blue);
    setBrush(brush);

    // make focusable
    setFlag(QGraphicsItem::ItemIsFocusable,true);

}

Bird::~Bird(){};


//extern Game* game;

//Bird::Bird(QGraphicsItem *parent){
//    // draw
//    setRect(0,0,30,50);
//    QBrush brush;
//    brush.setStyle(Qt::SolidPattern);
//    brush.setColor(Qt::blue);
//    setBrush(brush);

//    // make focusable
//    setFlag(QGraphicsItem::ItemIsFocusable,true);
//}

//Bird::~Bird() {}




