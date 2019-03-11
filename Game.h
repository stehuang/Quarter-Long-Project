#ifndef GAME_H
#define GAME_H

#include "Bird.h"
#include "Pipe.h"
#include <QGraphicsView>
#include <QObject>
#include <QGraphicsScene>
#include <QTimer>
#include <vector>

using namespace std;

class Game:public QGraphicsView {
    Q_OBJECT
public:
    // constructor; parent is initialized to null
    Game(QGraphicsScene* parent = nullptr);
    virtual ~Game() override;
    void start();

    void addPipe();

private:
    Bird* bird = new Bird(nullptr);
    Pipe* pipe = new Pipe(nullptr);
    QGraphicsScene *scene = new QGraphicsScene(0, 0, 600, 400);
    int pipeCount;
    vector <Pipe*> pipes;

};

#endif // GAME_H
