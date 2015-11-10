//
//  Particles.hpp
//  mySketch
//
//  Created by Andrew Genualdi on 11/10/15.
//
//

#ifndef Particles_hpp
#define Particles_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Particles_hpp */


struct pingPongBuffer {
public:
    void allocate( int _width, int _height, int _internalformat = GL_RGBA, float _dissipation = 1.0f){
        // Allocate
        for(int i = 0; i < 2; i++){
            FBOs[i].allocate(_width,_height, _internalformat );
            FBOs[i].getTextureReference().setTextureMinMagFilter(GL_NEAREST, GL_NEAREST);
        }
        
        // Clean
        clear();
        
        // Set everything to 0
        flag = 0;
        swap();
        flag = 0;
    }
    
    void swap(){
        src = &(FBOs[(flag)%2]);
        dst = &(FBOs[++(flag)%2]);
    }
    
    void clear(){
        for(int i = 0; i < 2; i++){
            FBOs[i].begin();
            ofClear(0,255);
            FBOs[i].end();
        }
    }
    
    ofFbo& operator[]( int n ){ return FBOs[n];}
    
    ofFbo   *src;       // Source       ->  Ping
    ofFbo   *dst;       // Destination  ->  Pong
private:
    ofFbo   FBOs[2];    // Real addresses of ping/pong FBO´s
    int     flag;       // Integer for making a quick swap
};


class Particle : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    
    ofShader    updatePos;
    ofShader    updateVel;
    ofShader    updateRender;
    
    pingPongBuffer posPingPong;
    pingPongBuffer velPingPong;
    
    ofFbo   renderFBO;
    
    ofImage sparkImg;
    
    float   timeStep;
    float   particleSize;
    
    int     width, height;
    int     imgWidth, imgHeight;
    int     numParticles;
    int     textureRes;
    
    
    ofVboMesh mesh;
};
