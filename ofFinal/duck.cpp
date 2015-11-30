//
//  duck.cpp
//  ofFinal
//
//  Created by Andrew Genualdi on 11/27/15.
//
//

#include "duck.hpp"


void Duck::setup(){
    
    
    duck.loadImage("yellowduck.png");
    
    
    
    
}


void Duck::update(){
    
    if (posX >= 800 || posX < 20){
        xVel = -xVel;
        duck.mirror(false, true);
    } else {
      
        duck.mirror(false, false);
    }
    
    
}

void Duck::draw(){
    
    posX = posX + xVel;
    
    duck.draw(posX, posY);
    
    
}


