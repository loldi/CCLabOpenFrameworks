//
//  target.cpp
//  ofFinal
//
//  Created by Andrew Genualdi on 11/28/15.
//
//

#include "target.hpp"


void Target::setup(){
    
    target.loadImage("target.png");
    
    
}


void Target::update(){
    
    if (posX >= 800 || posX < 20){
        xVel = -xVel;
      
    }
    
    
}


void Target::draw(){
    
    
    posX = posX + xVel;
    
    target.draw(posX, posY);
    
    
    
}