#include "Bird.h"
#include "Game.h"
#include <QBrush>

extern Game* game;

Bird::Bird(QGraphicsItem* parent)
{
    // draw rect
    //setRect(0,0,30,30);
    setPixmap(QPixmap(":/images/bird.png"));
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::blue);
    //setBrush(brush);

    // make focusable
    setFlag(QGraphicsItem::ItemIsFocusable,true);

}

Bird::~Bird(){};

void Bird::keyPressEvent(QKeyEvent* event){
    if (event->key() == Qt::Key_Space){
        if(y() >= 10 & isAlive()){
            int xPos = x();
            int yPos = y() - boundingRect().height();
            setPos(xPos,yPos);
        }
    }

    if (event->key() == Qt::Key_Right){
        if(y() >= 10 & isAlive()){
            int xPos = x() + 20;
            int yPos = y();
            setPos(xPos,yPos);
        }
    }

    if (event->key() == Qt::Key_Left){
        if(y() >= 10 & isAlive()){
            int xPos = x() - 20;
            int yPos = y();
            setPos(xPos,yPos);
        }
    }
}

bool Bird::isAlive(){
    if(y() > 600)
        return false;
    return true;
}


void Bird::gravity(){
   if(isAlive()){
       int xPos = x();
       int yPos = y() + 50;
       setPos(xPos,yPos);
   }
}











