//
//  duck.hpp
//  ofFinal
//
//  Created by Andrew Genualdi on 11/27/15.
//
//

#ifndef duck_hpp
#define duck_hpp

#include <stdio.h>
#include "ofMain.h"


class Duck : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();

  
    
    
    
    
    
    
    ofImage duck;
    float posX = 50;
    float xVel = 2.0;
    float posY = 250;
    
    
};





#endif /* duck_hpp */
