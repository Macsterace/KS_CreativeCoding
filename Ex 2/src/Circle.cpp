//
//  Circle.cpp
//  Ex 2
//
//  Created by Kevin Shanken on 4/11/17.
//
//

#include "Circle.hpp"

Circle::Circle(){
    
    pos.x = ofRandom(0, ofGetWidth() - 100);
    pos.y = ofRandom(0, ofGetHeight() - 100);
    speed.x = ofRandom(0, 2);
    speed.y = ofRandom(0, 2);
    
    color = ofColor::green;

    
}

void Circle::update(int mouseX, int mouseY){
    
    //Move diagonally
    pos += speed;        //sets the array to individual speeds for x and y
    
    if (pos.x > ofGetWidth() -100 || pos.x < 0){ //two if statements to bounce off walls
        
        speed.x *= -1;
    }
    
    if (pos.y > ofGetWidth() -100|| pos.y < 0){
        speed.y *= -1;
    }

    float d = ofDist(pos.x, pos.y, mouseX, mouseY);
    
    if(d < 40){
        color = ofColor::red;
    } else {
        color = ofColor::green;
    }
    
    
}
void Circle::draw(){
    
    
        ofSetColor(color);
        ofDrawCircle(pos.x, pos.y, 40);
        
    


}
