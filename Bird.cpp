
#include "Bird.h"
#include "Game.h"
#include <QBrush>

extern Game* game;

Bird::Bird(QWidget *parent)
{
    // draw rect
    setRect(0,0,30,30);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::blue);
    setBrush(brush);

    // make focusable
    setFlag(QGraphicsItem::ItemIsFocusable,true);

    myTimer->start(6000);

    //QObject::connect(myTimer, SIGNAL(timeout()), this, SLOT(gravity()))

}

Bird::~Bird(){};


void Bird::keyPressEvent(QKeyEvent* event){
    if (event->key() == Qt::Key_Space){
        if(y() >= 0 & y() <= 600){
            int xPos = x();
            int yPos = y() - boundingRect().height();
            setPos(xPos,yPos);
        }
    }
    //gravity();
}


void Bird::gravity(){
    if(y() >= 0 & y() <= 600){
        int xPos = x();
        int yPos = y() + 50;
        setPos(xPos,yPos);
    }
}




