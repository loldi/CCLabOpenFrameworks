//
//  Ball2.hpp
//  mySketch
//
//  Created by Andrew Genualdi on 11/10/15.
//
//

#ifndef Ball2_hpp
#define Ball2_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Ball2_hpp */


class Ball2 : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void contact();
    
    int xPos;
    int yPos;
    int xVel;
    int yVel;
    int zPos;
    int zVel;
    
    //current state of the rotation
    ofQuaternion curRot;
    
    //a place to store the mouse position so we can measure incremental change
    ofVec2f lastMouse;
    
    //slows down the rotation 1 = 1 degree per pixel
    float dampen;
    
    
};
