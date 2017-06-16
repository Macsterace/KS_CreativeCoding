#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxSyphon.h"

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
    
        //Vars
            float deltaH;
            float deltaS;
            float rotHue;
            float rotSat;
            vector<ofPoint> pts;
            bool reDo;
            bool reDoII = false;
            bool spaceCase;
            ofFbo fbo;
            unsigned long swicheR;
            float everyTen;
            bool togL;
    
    
        //GUI Vars
            ofxToggle Initialize;
            ofxToggle runBack;
            ofxToggle fade;
            ofxToggle Auto;
            ofxIntSlider lineSpace;
            //ofxFloatSlider wideR;
            ofxFloatSlider lineWidth;
            ofxIntSlider fadeR;
            ofxFloatSlider switchSpead;
            bool bHide = false;
            ofxPanel gui;
    
    //syphon vars
    ofTexture tex;
    ofxSyphonServer mainOutputSyphonServer;
    ofxSyphonServer individualTextureSyphonServer;
   


    //ofxSyphonClient mClient;
		
};
