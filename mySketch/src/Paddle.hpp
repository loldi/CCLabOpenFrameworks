//
//  paddle.hpp
//  mySketch
//
//  Created by Andrew Genualdi on 11/10/15.
//
//

#ifndef Paddle_hpp
#define Paddle_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Paddle_hpp */

class paddle : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    void keyReleased(int key);
    
    int xPos;
    int yPos;
    int yVel;
    
    
    
};
