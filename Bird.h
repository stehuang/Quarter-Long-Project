#ifndef BIRD_H
#define BIRD_H
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPointF>
#include <QTimer>



class Bird:public QGraphicsRectItem{
public:
    Bird(QWidget *parent=nullptr);
    virtual ~Bird() override;

    // events
    void keyPressEvent(QKeyEvent* event) override;

public slots:
    void gravity();

private:
    QTimer *myTimer = new QTimer;

};

#endif // BIRD_H
