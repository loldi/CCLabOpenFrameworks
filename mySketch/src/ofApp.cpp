#include "ofApp.h"


int player1Score = 0;
int player2Score = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofSetWindowShape(800,500);
    

    
    ofPushMatrix();
    particles.setup();
    ofPopMatrix();
    
    ballhit.loadSound("/Users/andrew/Desktop/hit.wav");
    ballhit.setMultiPlay(true);
    ballhit.setVolume(1.0f);
    
    ball.setup();
    ball2.setup();
    
    paddle.setup();
    paddle2.setup();

    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofSoundUpdate();
    
    ofPushMatrix();
    particles.update();
    ofPopMatrix();
    
    ball.update();
    ball2.update();
    
    paddle.update();
    
    paddle2.update();
    
    if (ball.xPos > paddle.xPos - 5 && ball.xPos < paddle.xPos + 5) {
        if (ball.yPos > paddle.yPos - 15 && ball.yPos < paddle.yPos + 60) {
            ball.contact();
            ballhit.play();
            

        }
    }
    
    
    if (ball.xPos > paddle2.xPos - 5 && ball.xPos < paddle2.xPos + 5) {
        if (ball.yPos > paddle2.yPos - 15 && ball.yPos < paddle2.yPos + 60) {
            ball.contact();
            ballhit.play();
           
            
        }
    }
    
    
    if (ball.xPos >= ofGetWidth()){
        ball.xPos = 400;
        ball.yPos = 250;
        ball.yVel = ofRandom(-3,3);
        player1Score++;

        
    }
    
    if(ball.xPos < -1){
        ball.xPos = 400;
        ball.yPos = 250;
        ball.yVel = ofRandom(-3,3);
        player2Score++;
    }
    
    if (paddle.yPos > ofGetHeight()){
        paddle.yPos = ofGetHeight();
    }
    
    if (paddle2.yPos > ofGetHeight()){
        paddle2.yPos = ofGetHeight();
    }
    
    if (paddle.yPos < 0){
        paddle.yPos = 0;
    }
    
    if (paddle2.yPos < 0){
        paddle2.yPos = 0;
    }

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    

    
    ofPushMatrix();
    particles.draw();
    ofPopMatrix();
    
    
    ball.draw();
    ball2.draw();
    
    paddle.draw();
    
    paddle2.draw();

    
    ofDrawBitmapString("Player 1: ", 50, 50);

    
    ofDrawBitmapString("Player 2: ", 650, 50);
    
    ofDrawBitmapString(ofToString(player1Score), 125,50);
    ofDrawBitmapString(ofToString(player2Score), 725,50);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'w'){
        paddle.yVel = -10;
    }
    
    if (key == 's'){
        paddle.yVel = 10;
        
    }
    
    if (key == 'o'){
        paddle2.yVel = -10;
    }
    
    if (key == 'l'){
        paddle2.yVel = 10;
        
    }
  
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 'w'){
        paddle.yVel = 0;
    }
    
    if (key == 's'){
        paddle.yVel = 0;
    }
    
    if (key == 'o'){
        paddle2.yVel = 0;
    }
    
    if (key == 'l'){
        paddle2.yVel = 0;
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
