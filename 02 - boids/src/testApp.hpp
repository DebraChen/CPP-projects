//
//  testApp.hpp
//  Boids
//
//  Created by chenyuwei on 2022/3/17.
//

#ifndef testApp_hpp
#define testApp_hpp


#include "ofMain.h"
#include <vector>
#include "boid.hpp"
#include "fish.hpp"

class testApp : public ofBaseApp{
    
public:
    ~testApp();
    
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

    std::vector<Boid *> boids;
    std::vector<Boid *> fish;
    
};

#endif /* testApp_hpp */
