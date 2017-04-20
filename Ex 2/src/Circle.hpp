//
//  Circle.hpp
//  Ex 2
//
//  Created by Kevin Shanken on 4/11/17.
//
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"

class Circle{
    
public:
    
    Circle();
    
    void update(int mouseX, int mouseY);
    void draw();
    
    
    ofPoint pos;
    ofPoint speed;
    
    ofColor color;
    
    
};

#endif /* Circle_hpp */

