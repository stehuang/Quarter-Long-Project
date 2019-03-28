
#include "Score.h"
#include <QFont>


Score::Score(QGraphicsItem* parent):QGraphicsTextItem (parent){
    // initialize score to 0;
    score = 0;

    // set text item
    setPlainText("Score: " + QString::number(score));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times", 18));
}


void Score::increase(){
    ++score;
    setPlainText("Score: " + QString::number(score));
}
