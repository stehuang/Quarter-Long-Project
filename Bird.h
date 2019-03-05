#ifndef BIRD_H
#define BIRD_H
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPointF>
#include <QTimer>


class Bird:public QGraphicsRectItem{
public:
    Bird(QGraphicsItem* parent=nullptr);
    virtual ~Bird() override;

    // events
    void keyPressEvent(QKeyEvent* event) override;

    void gravity();


private:
    QTimer *myTimer = new QTimer;
};

#endif // BIRD_H
