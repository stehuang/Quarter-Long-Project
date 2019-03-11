#ifndef GAME_H
#define GAME_H

#include "Bird.h"
#include "Pipe.h"
#include <QGraphicsView>
#include <QObject>
#include <QGraphicsScene>
#include <QTimer>


class Game:public QGraphicsView {
<<<<<<< HEAD
=======
    Q_OBJECT
>>>>>>> motion
public:
    // constructor; parent is initialized to null
    Game(QGraphicsScene* parent = nullptr);

    void start();

    void addPipe();

private:
    Bird* bird = new Bird(nullptr);
    Pipe* pipe = new Pipe(nullptr);
    QGraphicsScene *scene = new QGraphicsScene(0, 0, 600, 400);
    int pipeCount;
<<<<<<< HEAD
    //QTimer *myTimer = new QTimer;
=======
>>>>>>> motion
};

#endif // GAME_H
