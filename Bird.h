#ifndef BIRD_H
#define BIRD_H
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPointF>
#include <QTimer>



class Bird:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bird(QGraphicsItem* parent=nullptr);
    virtual ~Bird() override;

    // events
    void keyPressEvent(QKeyEvent* event) override;
    bool isAlive();
    void doSomething();

public slots:
    void gravity();

};

#endif // BIRD_H
