//
//  main.cpp
//  Boids
//
//  Created by chenyuwei on 2022/2/10.
//

#include "ofMain.h"
#include "testApp.hpp"

//========================================================================
int main( ){

    ofSetupOpenGL(600,600, OF_WINDOW);            // <-------- setup the GL context

    // this kicks off the running of my app
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    ofRunApp( new testApp());

}

