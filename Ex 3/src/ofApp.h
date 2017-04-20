#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxSvg.h"

class ofApp : public ofBaseApp{
	
public:
	void setup();
	void update();
	void draw();
	
	void exit();

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

	void circleResolutionChanged(int & circleResolution);
	void ringButtonPressed();

	bool bHide;

	ofxFloatSlider radiusX;
    ofxFloatSlider radiusY;
    ofxFloatSlider scaleX;
    ofxFloatSlider scaleY;
	ofxColorSlider color;
	ofxVec2Slider center;
	ofxIntSlider circleResolution;
	ofxToggle filled;
	ofxButton twoCircles;
	ofxButton ringButton;
	ofxLabel screenSize;

	ofxPanel gui;

	ofSoundPlayer ring;
    
    ofxSVG svg;
    float step;
    vector<ofPolyline> outlines;
};

