//
//  Ball.cpp
//  mySketch
//
//  Created by Andrew Genualdi on 11/3/15.
//
//

#include "Ball.hpp"


void Ball::setup(){
    
    
    xPos = 250;
    yPos = 250;
    xVel = 9;
    yVel = ofRandom(-5,5);
    
}

void Ball::update(){
    
    if (yPos >= ofGetHeight()){
        yVel = -yVel;
    }
    
    if(yPos < -1){
        yVel = -yVel;
    }
    
    
}


void Ball::draw(){
    
    ofCircle(xPos, yPos, 10);
    
    xPos = xPos + xVel;
    yPos = yPos + yVel;
    
}

void Ball::contact(){
    
    xPos = xPos - xVel;
    xVel = -xVel;
    yVel = ofRandom(-5,5);
    
    
}




