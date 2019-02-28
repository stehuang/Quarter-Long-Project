
#include <QApplication>
#include "mainwindow.h"
#include "Game.h"
#include "Bird.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Game* game = new Game();
    game->start();
    game->show();


    return a.exec();
}


//#include <QApplication>
//#include <QGraphicsScene>
//#include <QGraphicsView>
//#include <QGraphicsRectItem>

///*
//Tutorial Topics:
//-events (keyPressEvent() and QKeyEvent)
//-event propogation system
//-QDebug
//*/

//int main(int argc, char *argv[]){
//    QApplication a(argc, argv);

//    // create a scene
//    QGraphicsScene * scene = new QGraphicsScene();

//    // create an item to add to the scene
//    QGraphicsRectItem * rect = new QGraphicsRectItem();
//    rect->setRect(0,0,100,100); // change the rect from 0x0 (default) to 100x100 pixels

//    Bird* bird = new Bird(nullptr);

//    // add the item to the scene
//    scene->addItem(rect);
//    scene->addItem(bird);

//    // make rect focusable
//    rect->setFlag(QGraphicsItem::ItemIsFocusable);
//    rect->setFocus();

//    bird->setFlag(QGraphicsItem::ItemIsFocusable);
//    bird->setFocus();

//    // create a view to visualize the scene
//    Game* view = new Game(scene);

//    // show the view
//    view->show();

//    return a.exec();
//}
