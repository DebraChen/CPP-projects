//
//  fish.cpp
//  Boids
//
//  Created by chenyuwei on 2022/3/17.
//

#include "fish.hpp"
#define fish_hpp

void Fish::draw(){
    ofSetColor(239, 220, 224);
    ofDrawCircle(getPosition().x,getPosition().y,5);
    
}
