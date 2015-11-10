//
//  paddle.cpp
//  mySketch
//
//  Created by Andrew Genualdi on 11/10/15.
//
//

#include "Paddle.hpp"

int player;


void paddle::setup(){
    
    
    xPos = 50;
    yPos = 250;
    yVel = 0;
    
}

void paddle::update(){
    
    yPos = yPos + yVel;
    

    
}


void paddle::draw(){
    
    
    ofRect(xPos, yPos, 10, 50);
    
    
}


void paddle::keyPressed(int key){

    
}

//--------------------------------------------------------------
void paddle::keyReleased(int key){


    
}