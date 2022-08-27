#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    int width=126;
    int height=126;
    int spacing=10;
    
    for (int y = 0; y <height; y++){
        for (int x = 0; x<width; x++){
            ofVec3f position = ofVec3f(x*spacing,y*spacing,0);
            mesh.addVertex(position);
            mesh.addColor(ofColor(255,0,0));
        }
    }
    
    for (int x = 0; x < width-1; x++){
        for (int y=0; y < height-1; y++){
            mesh.addIndex(x+y*width);         // 0
            mesh.addIndex((x+1)+y*width);     // 1
            mesh.addIndex(x+(y+1)*width);     // 10

            mesh.addIndex((x+1)+y*width);     // 1
            mesh.addIndex((x+1)+(y+1)*width); // 11
            mesh.addIndex(x+(y+1)*width);     // 10
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i <mesh.getVertices().size(); i++){
        ofVec3f vert = mesh.getVertex(i);
        float noiseScale=0.01;
        float noise=ofNoise(vert.x*noiseScale,vert.y*noiseScale,ofGetFrameNum()*noiseScale);
            vert.z = noise*100;
            mesh.setVertex(i, vert);
            ofColor(color)=ofMap(noise,0,1,0,255);
            mesh.setColor(i, color);
}
}

//--------------------------------------------------------------
void ofApp::draw(){

    cam.begin();

    ofDrawAxis(100);

    mesh.draw();
    
    cam.end();
    
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
