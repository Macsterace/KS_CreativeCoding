#pragma once

#include "ofMain.h"

#include "ofxEdsdk.h"

class ofApp : public ofBaseApp {
public:
	void setup();
    void exit();
	void update();
	void draw();
	void keyPressed(int key);
    
    void sendCommand(string cmd);
	
    ofxEdsdk::Camera camera;
    
    bool bIsRecordingMovie;
    ofSerial serial;
    int inByte = 0;
    string serialString = "";
    
    
};
