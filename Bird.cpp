
#include "Bird.h"
#include "Game.h"
#include <QBrush>

extern Game* game;

Bird::Bird(QGraphicsItem* parent)
{
    // draw rect
    setRect(0,0,30,30);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::blue);
    setBrush(brush);

    // make focusable
    setFlag(QGraphicsItem::ItemIsFocusable,true);

    // set timer to change motion
    //Game::connect(myTimer, SIGNAL(timeout()), this, SLOT(gravity()));
    myTimer->start(1000);

}

Bird::~Bird(){};


void Bird::keyPressEvent(QKeyEvent* event){
    if (event->key() == Qt::Key_Space){
        int xPos = x();
        int yPos = y() - boundingRect().height();
        setPos(xPos,yPos);
    }
    gravity();
}


void Bird::gravity(){
    if(y() < 400){
        int xPos = x();
        int yPos = y() + 100;
        setPos(xPos,yPos);
    }
}




