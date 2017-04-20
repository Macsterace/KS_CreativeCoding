#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // lock framerate to display refresh
    ofSetVerticalSync(true);
    
    ofSetFrameRate(30);
    
    // smoother circles
    ofSetCircleResolution(50);
    
    // set background color
    ofBackground(ofColor::blueSteel);
    
    ofSetColor(ofColor::antiqueWhite);
    
    // window title
    ofSetWindowTitle("Click");
    
    
    for (int i=0; i < 10; i++){  //sets the array to random locations and speeds
        Circle c ;
        circles.push_back(c);
    }
    
    count = 0;
    
    firstCirc = true;
    secCirc = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i=0; i < circles.size(); i++){
            circles[i].update(mouseX, mouseY);
    }
}


float distanceFromCircleToMouse(float xCirc, float yCirc){       //Distance function to calculate if the mouse is over a circle
    float distance = sqrt((xCirc - ofGetAppPtr()->mouseX)*(xCirc - ofGetAppPtr()->mouseX) + (yCirc - ofGetAppPtr()->mouseY)
                   * (yCirc - ofGetAppPtr()->mouseY));
    return distance;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    for (int i=0; i < circles.size(); i++){
        circles[i].draw();
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    for (int i=0; i < 10; i++){
    if(key == ' ') {
       shape[i] = 0;
    }
    }
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
  /*  for (int i=0; i < 10; i++){
        float distance = distanceFromCircleToMouse(ofGetAppPtr()-> x[i]), ofGetAppPtr()-> y[i]);
        if (distance < 90 && shape[i] == 0){
            shape[i] = 1;
            count = 1;
            secCirc = true;
            firstCirc = false;
        }
    }     */
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
