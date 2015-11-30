#include "ofApp.h"
#include "duck.hpp"
#include "target.hpp"


//--------------------------------------------------------------
void ofApp::setup(){

    shotFired = false;
    
    
    ofSetWindowShape(1000, 600);
    ofHideCursor();
    
    bgmusic.loadSound("music.mp3");
    bgmusic.setMultiPlay(true);
    bgmusic.setVolume(0.7f);
    bgmusic.play();
    bgmusic.setLoop(true);
    
    gunshot.loadSound("gun.mp3");
    gunshot.setMultiPlay(true);
    gunshot.setVolume(0.7f);
    
    ping.loadSound("ping.mp3");
    ping.setMultiPlay(true);
    ping.setVolume(0.7f);
    
    slot1 = empty1.loadImage("empty.png");
    slot2 = empty2.loadImage("empty.png");
    slot3 = empty3.loadImage("empty.png");
    slot4 = empty4.loadImage("empty.png");
    slot5 = empty5.loadImage("empty.png");
    
    bullet1.loadImage("bullet.png");
    bullet2.loadImage("bullet.png");
    bullet3.loadImage("bullet.png");
    bullet4.loadImage("bullet.png");
    bullet5.loadImage("bullet.png");
    
    bg.loadImage("woodbg.png");
    cloud.loadImage("cloud2.png");
    
    booth.loadImage("booth.png");
    rifle.loadImage("rifle.png");

    trees.loadImage("trees.png");
    water1.loadImage("water1.png");
    water2.loadImage("water2.png");

    curtain.loadImage("curtain.png");
    crosshair.loadImage("crosshair.png");
    
    Go.loadImage("text_go.png");
    gameOver.loadImage("text_gameover.png");
    ready.loadImage("text_ready.png");
    
   

    duck.setup();
    target.setup();


}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofSoundPlayer();
    
    if (xPos < ofRandom(20,40) || xPos > 600){
        xVel = -xVel;
    }
    
    
    if (yPos < 10 || yPos > 30){
        yVel = -yVel;
    }
    
    if (xWat1 > 60 || xWat1 < 0){
        xWat1Vel = -xWat1Vel;
    }

    if (xWat2 > 55 || xWat2 < 0){
        xWat2Vel = -xWat2Vel;
    }
    
    if (mouseX < 0){
        mouseX = 0;
    }
    if (mouseX > 900){
        mouseX = 900;
    }
    
    
    if (targetX >=800 || targetX < 20){
        targetVel = -targetVel;
    }
    
    duck.update();
    target.update();
    
    if (bullets == 4){
        bullet1.clear();
    }
    if (bullets == 3){
        bullet2.clear();
    }
    if (bullets == 2){
        bullet3.clear();
    }
    if (bullets == 1){
        bullet4.clear();
    }
    if (bullets == 0){
        bullet5.clear();
    }
    
    

    
 
}

//--------------------------------------------------------------
void ofApp::draw(){
    
 
    
    bg.draw(0,0);
    
    trees.draw(0,100);
    
    
    xPos = xPos + xVel;
    yPos = yPos + yVel;
    
    cloud.draw(xPos,yPos);
    cloud.draw(xPos+200,yPos-20);
    cloud.draw(xPos+400,yPos+30);
    cloud.draw(xPos+650,yPos+50);
    
    
    xWat1 = xWat1 + xWat1Vel;
    xWat2 = xWat2 + xWat2Vel;
    
    
    
    water1.draw(xWat1,350);
    
    
    target.draw();
    
    
    duck.draw();
    
    
    water2.draw(xWat2, 350);
    
    booth.draw(0,475);
    curtain.draw(0,0);
    rifle.draw(mouseX, 400);
    
    crosshair.draw(mouseX, mouseY);
    
    
    
    if (shotFired == true && mouseX > duck.posX-10 && mouseX < duck.posX+10 && mouseY > 280 && mouseY <310) {
        
        shotFired = false;
        duck.xVel = -duck.xVel;
        ping.play();
    }
    
    if (shotFired == true && mouseX > target.posX-10 && mouseX < target.posX+10 && mouseY > 290 && mouseY <315) {
        
        shotFired = false;
        target.xVel = -target.xVel;
        ping.play();
    }
    
    empty1.draw(750, 500);
    empty2.draw(775, 500);
    empty3.draw(800, 500);
    empty4.draw(825, 500);
    empty5.draw(850, 500);


    bullet1.draw(750, 500);
    bullet2.draw(775, 500);
    bullet3.draw(800, 500);
    bullet4.draw(825, 500);
    bullet5.draw(850, 500);
    
    
    if (bullets == 0){
        
        gameOver.draw(345, 280);
    }
    
    int delay = timer - ofGetElapsedTimeMillis();
    
    if (delay >= 2000){
        ready.draw(360, 280);
    }
    
    if (delay < 2000 && delay > 1500){
        Go.draw(425, 280);
        ready.clear();
    }
    
    if (delay == 0){
        Go.clear();
        delay = 0;
        
    }
    
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    if (bullets > 0){
    shotFired = true;
    gunshot.play();
    bullets = bullets - 1;
    }
    

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
