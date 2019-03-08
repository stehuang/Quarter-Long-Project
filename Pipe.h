#ifndef PIPE_H
#define PIPE_H
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPointF>
#include <QTimer>

class Pipe:public QGraphicsRectItem
{

public:
    Pipe(QWidget *parent=nullptr);
    virtual ~Pipe() override;

private:
    bool isAlive = true;
};

#endif // PIPE_H
