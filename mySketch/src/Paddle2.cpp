//
//  paddle.cpp
//  mySketch
//
//  Created by Andrew Genualdi on 11/10/15.
//
//

#include "Paddle2.hpp"




void paddle2::setup(){
    
    
    xPos = 750;
    yPos = 250;
    yVel = 0;
    
}

void paddle2::update(){
    
    yPos = yPos + yVel;
    
    
    
}


void paddle2::draw(){
    
    
    ofRect(xPos, yPos, 10, 50);
    
    
}

