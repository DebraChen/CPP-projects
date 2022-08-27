//
//  testApp.cpp
//  Boids
//
//  Created by chenyuwei on 2022/3/17.
//

#include "testApp.hpp"

testApp::~testApp()
{
    for (int i = 0; i < boids.size(); i++)
    {
        delete boids[i];
    }
}

//--------------------------------------------------------------
void testApp::setup(){
    
    
    int screenW = ofGetScreenWidth();
    int screenH = ofGetScreenHeight();

    ofBackground(0,50,50);
    
    // set up the boids
    for (int i = 0; i < 50; i++)
        boids.push_back(new Boid());

    
    for (int i = 0; i < 50; i++){
        Boid *temp = new Fish;
        fish.push_back(temp);
    }
    
}


//--------------------------------------------------------------
void testApp::update(){
    
    ofVec3f min(0, 0);
    ofVec3f max(ofGetWidth(), ofGetHeight());
    for (int i = 0; i < boids.size(); i++)
    {
        boids[i]->update(boids, min, max);
    }
    
    for (int i = 0; i < fish.size(); i++)
    {
        fish[i]->update(fish, min, max);
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofColor colorOne(239, 220, 224);
    ofColor colorTwo(223, 185, 193);
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_BAR);

    for (int i = 0; i < boids.size(); i++)
    {
        boids[i]->draw();
    }
    
    for (int i = 0; i < fish.size(); i++)
    {
        fish[i]->draw();
    }

}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
 
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}
