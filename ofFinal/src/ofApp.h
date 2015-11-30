#pragma once

#include "ofMain.h"
#include "duck.hpp"
#include "target.hpp"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofImage bg;
    ofImage booth;
    ofImage cloud;
    ofImage rifle;
   
    ofImage trees;
    ofImage water1;
    ofImage water2;
  
    ofImage curtain;
    ofImage crosshair;
    
    ofImage bullet1;
    ofImage bullet2;
    ofImage bullet3;
    ofImage bullet4;
    ofImage bullet5;
    
    
    ofImage empty1;
    ofImage empty2;
    ofImage empty3;
    ofImage empty4;
    ofImage empty5;

    ofImage gameOver;
    ofImage Go;
    ofImage ready;
    
    
    ofSoundPlayer bgmusic;
    ofSoundPlayer gunshot;
    ofSoundPlayer ping;
    
    float xPos = 50;
    float yPos = 20;
    float xVel = 0.3;
    float yVel = 0.1;
    
    float xWat1 = 0;
    float xWat1Vel = 0.5;
    
    float xWat2 = 0;
    float xWat2Vel = 0.3;
    
    Duck duck;
    Target target;
    
    
    float targetX = 599;
    float targetVel = -0.3;
    
    bool shotFired;
    
    int slot1, slot2, slot3, slot4, slot5;
    
    int bullets = 5;
    
    
    int timer = 5000;
    int delay;
   
    
    
		
};
