#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);

	// we add this listener before setting up so the initial circle resolution is correct
	circleResolution.addListener(this, &ofApp::circleResolutionChanged);
	ringButton.addListener(this, &ofApp::ringButtonPressed);

	gui.setup(); // most of the time you don't need a name
	//gui.add(filled.setup("fill", true));
    
	gui.add(radiusX.setup("X", 200, 10, 1000));
    gui.add(radiusY.setup("Y", 100, 10, 750));
    
    gui.add(scaleX.setup("Scale X", 0.3, 0.01, 1));
    gui.add(scaleY.setup("Scale Y", 0.3, 0.01, 1));

    
    
	//gui.add(center.setup("center", ofVec2f(ofGetWidth()*.5, ofGetHeight()*.5), ofVec2f(0, 0), ofVec2f(ofGetWidth(), ofGetHeight())));
    
	//gui.add(color.setup("color", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255)));
	//gui.add(circleResolution.setup("circle res", 5, 3, 90));
	gui.add(twoCircles.setup("Tiger Party?"));
	gui.add(ringButton.setup("ring"));
	gui.add(screenSize.setup("screen size", ofToString(ofGetWidth())+"x"+ofToString(ofGetHeight())));

	bHide = false;

	ring.load("ring.wav");
    
    
    svg.load("butts.svg");  //loads image file
    

}

//--------------------------------------------------------------
void ofApp::exit(){
	ringButton.removeListener(this, &ofApp::ringButtonPressed);
}

//--------------------------------------------------------------
void ofApp::circleResolutionChanged(int &circleResolution){
	ofSetCircleResolution(circleResolution);
}

//--------------------------------------------------------------
void ofApp::ringButtonPressed(){
	ring.play();
}

//--------------------------------------------------------------
void ofApp::update(){
	ofSetCircleResolution(circleResolution);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor::white, ofColor::steelBlue);
    
	if(filled){
		ofFill();
        
	}else{
		ofNoFill();
	}

	ofSetColor(color);
	if(twoCircles){
		//ofDrawCircle(center->x-radius*.5, center->y, radius );
		//ofDrawCircle(center->x+radius*.5, center->y, radius );
        
        ofPushMatrix();
        ofScale(scaleX, scaleY);
        ofTranslate(radiusX + ofRandom(200), radiusY + ofRandom(200));
        svg.draw();
        ofPopMatrix();
        
        ofPushMatrix();
        ofScale(scaleX, scaleY);
        ofTranslate(radiusX + ofRandom(200), radiusY + ofRandom(200));
        svg.draw();
        ofPopMatrix();

	}else{
		//ofDrawCircle((ofVec2f)center, radius );
        
        ofPushMatrix();
        
        ofTranslate(radiusX, radiusY);
        ofScale(scaleX, scaleY);

        svg.draw();
        ofPopMatrix();
        
	}
	
	// auto draw?
	// should the gui control hiding?
	if(!bHide){
		gui.draw();
	}
    
    //svg.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if(key == 'h'){
		bHide = !bHide;
	}
	else if(key == 's'){
		gui.saveToFile("settings.xml");
	}
	else if(key == 'l'){
		gui.loadFromFile("settings.xml");
	}
	else if(key == ' '){
		color = ofColor(255);
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
    screenSize = ofToString(w) + "x" + ofToString(h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
	
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
	
}
