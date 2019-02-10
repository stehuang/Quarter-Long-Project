//
//  Bird.h
//  Final Project
//
//  Created by Stella Huang on 2/9/19.
//  Copyright © 2019 Stella Huang. All rights reserved.
//

#ifndef Bird_h
#define Bird_h
class Bird{
public:
    Bird(){
        alive = TRUE;
        score = 0;
    }
    
    void up();
    void doSomething();
    bool isAlive();
    void checkCollide();
    void increaseScore(int x);
    
private:
    bool alive;
    int score;
};

#endif /* Bird_h */
