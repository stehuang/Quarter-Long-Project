#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QgraphicsScene>


class Game:public QGraphicsView
{
public:
    // constructor; parent is initialized to null
    Game(QWidget* parent = NULL);

    void start();

    QGraphicsScene *scene;

private:

};

#endif // GAME_H
