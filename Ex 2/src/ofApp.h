#pragma once

#include "ofMain.h"
#include "Circle.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    
    float x [10];  //x and y locations
    float y [10];
    float xSpeed [10];
    float ySpeed [10];//x and y speeds
    int count;
    Boolean firstCirc, secCirc;
    
    float shape [10];  //faces array
    
    vector<Circle> circles;
    
    
    
		
};
