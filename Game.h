#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>


class Game:public QGraphicsView{
public:
    // constructor; parent is initialized to null
    Game(QGraphicsScene* parent = nullptr);

    void start();

//    QGraphicsScene *scene;

private:
    QGraphicsScene *scene = new QGraphicsScene(0, 0, 400, 300);
};

#endif // GAME_H
