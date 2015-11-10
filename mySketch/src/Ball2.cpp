//
//  Ball2.cpp
//  mySketch
//
//  Created by Andrew Genualdi on 11/10/15.
//
//

#include "Ball2.hpp"


void Ball2::setup(){
    ofNoFill();
    ofSetFrameRate(30);
    ofBackground(0);
    
    //this slows down the rotate a little bit
    dampen = .4;
    
    int xPos = 400;
    int yPos = 400;
    int zPos = 40;
    
    int xVel = 5;
    int yVel = ofRandom(-5,5);
    int zVel = 5;
}

//--------------------------------------------------------------
void Ball2::update(){
    
    ofVec2f mouse(ofRandom(5),ofRandom(5));
    ofQuaternion yRot((ofRandom(-5,5))*dampen, ofVec3f(0,1,0));
    ofQuaternion xRot((ofRandom(-5,5))*dampen, ofVec3f(-1,0,0));

    curRot *= yRot*xRot;
    lastMouse = mouse;
    
    if (yPos >= ofGetHeight()){
        yVel = -yVel;
    }
    
    if(yPos < -1){
        yVel = -yVel;
    }
    
    xPos = xPos + xVel;
    yPos = yPos + yVel;
    
}

//--------------------------------------------------------------
void Ball2::draw(){
    
    //translate so that 0,0 is the center of the screen
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,  ofGetHeight()/2, 40);
    //Extract the rotation from the current rotation
    ofVec3f axis;
    float angle;
    curRot.getRotate(angle, axis);
    
    //apply the quaternion's rotation to the viewport and draw the sphere
    ofRotate(angle, axis.x, axis.y, axis.z);
    ofDrawSphere(xPos, yPos, zPos, 75);
    

    
    
    ofPopMatrix();
    

  
}