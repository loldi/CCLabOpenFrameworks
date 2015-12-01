//
//  target.hpp
//  ofFinal
//
//  Created by Andrew Genualdi on 11/28/15.
//
//

#ifndef target_hpp
#define target_hpp

#include <stdio.h>
#include "ofMain.h"


class Target : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    
    
    
    
    
    
    
    ofImage target;
    float posX = ofRandom(100,800);
    float xVel = ofRandom(-1, 3);
    float posY = 250;
    
    
};




#endif /* target_hpp */
