#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);     //match graphic to fr
    ofSetBackgroundAuto(false);  //do  not draw bg
    ofSetFrameRate(60);
    ofBackground(ofColor::black);
    ofSetLineWidth(0.001f);      //as skinny as possible lines
    
    rotSat = ofRandom(50, 150);  // init saturation so there will always be color at the beging but it changes
    spaceCase = false;
    fbo.allocate(1440, 900);
    reDo = true;                 //have to initialize
    
    
///////////////////////////////////////////////////////////////////////////////
    //Initialization of the Lines
    
    deltaH = ofRandom(TWO_PI);     //Rot the Hue
    deltaS = ofRandom(TWO_PI);     //rot the saturation
    int numPt = ofRandom(20, 50); //Range of points on each line
    
    //initiallizes the first point to be in the middle of the screen
    for(int i = 0; i < numPt; i ++){
        ofPoint p;
        p.x = (ofGetWidth()/2);
        //p.x = 10;
        p.y = i*ofGetHeight()/numPt;   // sets points along the y of the line
        ofLog() << i << " " << p;
        pts.push_back(p);
    }
/////////////////////////////////////////////////////////////////////////////
    
    
} //closes setup

//--------------------------------------------------------------
void ofApp::update(){
    
    //every time it is run the points are initialized in slightly different spots, causing natural line movement
    for(int i = 0; i < pts.size(); i ++){
        pts[i].x += ofRandom(-1.5, 12);       //x growth, if lines get bunched up increase range
        pts[i].y += ofRandom(-3, 3);         //y growth
        //ofLog() << i << " " << pts[i].x;
        
        //resets the points after they move too far off the edge
        if(pts[i].x >= 5000){
            reDo = true;
        }
        } //closes 4
    
/////////////////////////////////////////////////////////////////////////////////////////////
    //resets the drawing to initialization, runs once
    if(reDo){
        for(int i = 0; i < pts.size(); i ++){
            pts[i].x = (ofGetWidth()/2);
                      }//4
        reDo = false;
    }//reDo
/////////////////////////////////////////////////////////////////////////////////////////////
    
    
} //closes update

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    fbo.begin();
    //the fbo isnt doing anything special but it is left in for increased functionality in future iterations
    ofBackground(ofColor::black);
    
    //creates the line color based on number of frames passed
    float f = ofGetFrameNum();  // f variable is recreated with every frame to create more dynamic changed in color
    
    ofColor lineColor = ofColor::fromHsb(0, 0, 255);
    rotHue += 1+cos(deltaH-f/280);  //rotates hue around 360'?
    rotSat += 1+sin(deltaS+f/200);
    
    if(rotHue > 254){
        rotHue = 1;
    }
   // ofLog() << i << " " << p;

    lineColor.setHsb(rotHue, rotSat, 255);
    ofSetColor(lineColor);
    ofNoFill();  //dont fill in the shapes
    
//////////////////////////////////////////////////////////////////////////////
//draws vertical lines from the center to right
   ofBeginShape();
    ofVertex(pts[0].x, 0);  //start point
    for(int i = 0; i < pts.size(); i ++){
        ofCurveVertex(pts[i].x, pts[i].y);
    }
    ofVertex(pts[pts.size()-1].x, ofGetHeight());  //end point
   ofEndShape(true);
//////////////////////////////////////////////////////////////////////////////
    
//////////////////////////////////////////////////////////////////////////////
//draws vertical lines from the center to left
   ofBeginShape();
    ofVertex(ofGetWidth() - pts[0].x, 0);  //start point
    for(int i = 0; i < pts.size(); i ++){
        ofCurveVertex(ofGetWidth() - pts[i].x, pts[i].y);
    }
    ofVertex(ofGetWidth() - pts[pts.size()-1].x, ofGetHeight());  //end point
   ofEndShape(true);
//////////////////////////////////////////////////////////////////////////////
    
    fbo.end();
    
    if(spaceCase){
        fbo.draw(0, 0);
        
    }
    //else {
        float f1 = ofGetFrameNum();  // f variable is recreated with every frame to create more dynamic changed in color
        
        ofColor lineColor1 = ofColor::fromHsb(0, 0, 255);
        rotHue += 1+cos(deltaH-f1/280);  //rotates hue around 360'?
        rotSat += 1+sin(deltaS+f1/200);
        
        if(rotHue > 254){
            rotHue = 1;
        }
        // ofLog() << i << " " << p;
        
        lineColor1.setHsb(rotHue, rotSat, 255);
        ofSetColor(lineColor);
        ofNoFill();  //dont fill in the shapes

        
        //////////////////////////////////////////////////////////////////////////////
        //draws vertical lines from the center to right
        ofBeginShape();
        ofVertex(pts[0].x, 0);  //start point
        for(int i = 0; i < pts.size(); i ++){
            ofCurveVertex(pts[i].x, pts[i].y);
        }
        ofVertex(pts[pts.size()-1].x, ofGetHeight());  //end point
        ofEndShape(true);
        //////////////////////////////////////////////////////////////////////////////
    
        //////////////////////////////////////////////////////////////////////////////
        //draws vertical lines from the center to left
        ofBeginShape();
        ofVertex(ofGetWidth() - pts[0].x, 0);  //start point
        for(int i = 0; i < pts.size(); i ++){
            ofCurveVertex(ofGetWidth() - pts[i].x, pts[i].y);
        }
        ofVertex(ofGetWidth() - pts[pts.size()-1].x, ofGetHeight());  //end point
        ofEndShape(true);
        //////////////////////////////////////////////////////////////////////////////

} //closes draw

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == ' '){
        reDo = true;  //reinitializes the sketch
    }//space
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
    spaceCase = true;   //causes bg to draw
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
   spaceCase = false;
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
