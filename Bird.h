#ifndef BIRD_H
#define BIRD_H
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPointF>


class Bird:public QGraphicsRectItem{
public:
    Bird(QGraphicsItem* parent=nullptr);
    virtual ~Bird() override;

    // events
    void keyPressEvent(QKeyEvent* event) override;


private:
};

#endif // BIRD_H
