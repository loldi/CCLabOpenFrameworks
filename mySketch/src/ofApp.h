#pragma once

#include "ofMain.h"
#include "Ball.hpp"
#include "Ball2.hpp"
#include "Paddle.hpp"
#include "Paddle2.hpp"
#include "Particles.hpp"

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
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    Ball ball;
    
    paddle paddle;
    
    paddle2 paddle2;
    
    Ball2 ball2;
    
    Particle particles;
    
    int player1Score;
    int player2Score;
		
    ofSoundPlayer ballhit;

};
