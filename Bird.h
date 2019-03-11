#ifndef BIRD_H
#define BIRD_H
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPointF>
#include <QTimer>



class Bird:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    Bird(QGraphicsItem* parent=nullptr);
    virtual ~Bird() override;

    // events
    void keyPressEvent(QKeyEvent* event) override;

public slots:
    void gravity();

};

#endif // BIRD_H
