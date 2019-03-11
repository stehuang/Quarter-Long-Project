#ifndef BIRD_H
#define BIRD_H
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPointF>
#include <QTimer>
<<<<<<< HEAD

=======
>>>>>>> motion



class Bird:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    Bird(QWidget *parent=nullptr);
    virtual ~Bird() override;

    // events
    void keyPressEvent(QKeyEvent* event) override;
<<<<<<< HEAD

public slots:
    void gravity();

private:
    QTimer *myTimer = new QTimer;

=======

public slots:
    void gravity();

//private:
//    QTimer *myTimer = new QTimer;

>>>>>>> motion
};

#endif // BIRD_H
