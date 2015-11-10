//
//  Ball.hpp
//  mySketch
//
//  Created by Andrew Genualdi on 11/3/15.
//
//

#ifndef Ball_hpp
#define Ball_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Ball_hpp */

class Ball : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void contact();
    
    int xPos;
    int yPos;
    int xVel;
    int yVel;
    
    

};
