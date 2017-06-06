#include "ofApp.h"

void ofApp::setup() {
    
    ofSetFrameRate(60);
	ofSetVerticalSync(true);
    
    bIsRecordingMovie = false;
	camera.setup();
    
    serial.setup(0, 9600);  //reads the arduino on port 9600
}

void ofApp::exit() {
    camera.close();
}

void ofApp::update() {
    
    while (serial.available() > 0) {
        
        inByte = serial.readByte();
        
        if (inByte == '\n' || inByte == '\r') {
            
            
            if(serialString == "open"){
                camera.beginPhoto();
               // ofLog( ) << "Lock Camera";
                
            }
            else if(serialString == "close"){
                camera.endPhoto();
                //camera.takePhoto();
               // ofLog( ) << "Unlock Camera";
            }
            
            
            
           // else {
               ofLog( ) << "Ardiuno: "<< serialString;
            //}
            serialString = "";
        }else{
            if(inByte != '\n') {
                serialString += (char) inByte;
            }
        }
    }//while
    
            
    
    camera.update();
	if(camera.isFrameNew()) {
		// process the live view with camera.getLivePixels()
	}
    
	if(camera.isPhotoNew()) {
		// process the photo with camera.getPhotoPixels()
		// or just save the photo to disk (jpg only):
		camera.savePhoto(ofToString(ofGetFrameNum()) + ".jpg");
	}
    
    if(camera.isMovieNew()) {
		camera.savePhoto(ofToString(ofGetFrameNum()) + ".mov");
	}
    
}

void ofApp::draw() {
	//camera.draw(0, 10, 432, 288);
	camera.drawPhoto(432, 10, 432, 288);
    camera.drawPhoto(0, 0, ofGetWidth(), ofGetHeight());

	if(camera.isLiveDataReady()) {
		stringstream status;
        status << camera.getWidth() << "x" << camera.getHeight() << " @ " <<
			(int) ofGetFrameRate() << " app-fps / " <<
			(int) camera.getFrameRate() << " cam-fps / " <<
            (camera.getBandwidth() / (1<<20)) << " MiB/s";
		ofDrawBitmapStringHighlight(status.str(), 10, 20);
	}
}

void ofApp::keyPressed(int key) {
	if(key == ' ') {
		camera.takePhoto();
    }
    if(key == 's') {
        camera.setup();
    }
    if(key == 'c') {
        camera.close();
    }
    else if(key == 'v') {
        if (!bIsRecordingMovie) {
            camera.beginMovieRecording();
            bIsRecordingMovie = true;
        } else {
            camera.endMovieRecording();
            bIsRecordingMovie = false;
        }
	}

}

void ofApp::sendCommand(string cmd) {
    cmd += '\n';
    serial.writeBytes((unsigned char *)cmd.c_str(), cmd.length());
}
