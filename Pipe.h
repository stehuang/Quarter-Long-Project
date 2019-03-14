#ifndef PIPE_H
#define PIPE_H
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPointF>
#include <QTimer>
#include <iostream>
#include <string>

using namespace std;
class Pipe:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    Pipe(QGraphicsItem* parent=nullptr);
    virtual ~Pipe() override;

    string getPos();

    bool isAlive();
    void addPipe();

public slots:
    void doSomething();

};

#endif // PIPE_H
