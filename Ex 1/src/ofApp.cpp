#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofSetFrameRate(60);
    ofSetVerticalSync(true);     //Tries to set the refresh rate to make the computers frame rate, 60fps
    ofSetWindowShape(350, 600);  //window size
    ofBackground(2, 214 ,214);             //window color
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    ///////////////////////////////////////////////////////////////////////////////
    //yellow squares
    ofSetColor(252, 214 ,4);
    
    ofDrawRectangle(86, 32, 135, 299);
    ofDrawRectangle(55, 286, 31, 33);
    ofDrawRectangle(67, 66, 20, 123);
    ofDrawRectangle(88, 22, 34, 34);
    ofDrawRectangle(221, 45, 33, 295);
    ofDrawRectangle(253, 58, 33, 239);
    ofDrawRectangle(286, 78, 27, 107);
    ofDrawRectangle(312, 88, 10, 68);
    ofDrawRectangle(322, 99, 10, 23);
    ofDrawRectangle(285, 184, 14, 36);
    ofDrawRectangle(243, 298, 10, 10);
    ofDrawRectangle(253, 297, 14, 32);
    ofDrawRectangle(109, 331, 131, 34);
    ofDrawRectangle(110, 363, 119, 40);
    ofDrawRectangle(229, 392, 25, 11);
    ofDrawRectangle(85, 391, 25, 12);
    ofDrawRectangle(73, 401, 23, 15);
    ofDrawRectangle(125, 403, 23, 14);
    ofDrawRectangle(190, 403, 23, 13);
    ofDrawRectangle(239, 402, 28, 12);
    ofDrawRectangle(254, 414, 22, 35);
    ofDrawRectangle(201, 416, 24, 45);
    ofDrawRectangle(110, 417, 26, 44);
    ofDrawRectangle(54, 413, 18, 47);
    ofDrawRectangle(72, 416, 13, 22);
    ofDrawRectangle(265, 449, 11, 22);
    ofDrawRectangle(275, 461, 29, 19);
    ofDrawRectangle(290, 480, 25, 10);
    ofDrawRectangle(190, 461, 24, 20);
    ofDrawRectangle(214, 471, 13, 20);
    ofDrawRectangle(123, 461, 25, 19);
    ofDrawRectangle(108, 480, 28, 10);
    ofDrawRectangle(43, 452, 15, 30);
    ofDrawRectangle(33, 472, 10, 17);
    ofDrawRectangle(23, 481, 20, 10);
    ofDrawRectangle(243, 298, 10, 10);
    ofDrawRectangle(243, 298, 10, 10);
    
    
    ///////////////////////////////////////////////////////////////////////////////
    //Dark Yellow squares
    ofSetColor(220, 164 ,4);
    
    ofDrawRectangle(96, 403, 29, 14);
    ofDrawRectangle(85, 416, 25, 34);
    ofDrawRectangle(72, 438, 27, 34);
    ofDrawRectangle(58, 460, 28, 23);
    ofDrawRectangle(43, 481, 29, 10);
    ofDrawRectangle(148, 403, 42, 14);
    ofDrawRectangle(136, 417, 26, 44);
    ofDrawRectangle(148, 461, 14, 30);
    ofDrawRectangle(136, 480, 13, 11);
    ofDrawRectangle(175, 417, 15, 74);
    ofDrawRectangle(189, 416, 12, 45);
    ofDrawRectangle(190, 481, 24, 10);
    ofDrawRectangle(212, 403, 27, 13);
    ofDrawRectangle(225, 414, 30, 36);
    ofDrawRectangle(239, 449, 26, 22);
    ofDrawRectangle(253, 471, 22, 10);
    ofDrawRectangle(265, 480, 25, 10);
    
    ///////////////////////////////////////////////////////////////////////////////
    //white squares
    ofSetColor(255, 254 ,255);
    
    ofDrawRectangle(48, 208, 66, 68);
    ofDrawRectangle(57, 197, 41, 14);
    ofDrawRectangle(35, 219, 13, 57);
    ofDrawRectangle(44, 275, 13, 10);
    ofDrawRectangle(122, 231, 98, 69);
    ofDrawRectangle(142, 209, 60, 10);
    ofDrawRectangle(132, 219, 77, 13);
    ofDrawRectangle(112, 220, 10, 10);
    ofDrawRectangle(132, 300, 78, 10);
    ofDrawRectangle(156, 310, 31, 10);
    
    
    ///////////////////////////////////////////////////////////////////////////////
    //Black
    ofSetColor(0, 0 ,0);
    
    ofDrawRectangle(90, 12, 10, 10);
    ofDrawRectangle(111, 12, 10, 10);
    ofDrawRectangle(77, 22, 11, 44);
    ofDrawRectangle(100, 22, 11, 23);
    ofDrawRectangle(120, 22, 10, 10);
    ofDrawRectangle(144, 22, 10, 10);
    ofDrawRectangle(164, 22, 10, 10);
    ofDrawRectangle(174, 22, 13, 10);
    ofDrawRectangle(185, 32, 14, 10);
    ofDrawRectangle(198, 23, 23, 10);
    ofDrawRectangle(210, 32, 11, 12);
    ofDrawRectangle(221, 44, 10, 11);
    ofDrawRectangle(231, 34, 23, 10);
    ofDrawRectangle(242, 44, 12, 22);
    ofDrawRectangle(253, 56, 10, 10);
    ofDrawRectangle(263, 45, 12, 11);
    ofDrawRectangle(274, 55, 13, 25);
    ofDrawRectangle(286, 78, 10, 11);
    ofDrawRectangle(296, 67, 24, 10);
    ofDrawRectangle(307, 77, 13, 11);
    ofDrawRectangle(320, 87, 21, 13);
    ofDrawRectangle(330, 100, 11, 23);
    ofDrawRectangle(308, 154, 11, 33);
    ofDrawRectangle(132, 33, 11, 11);
    ofDrawRectangle(319, 121, 12, 34);
    ofDrawRectangle(153, 33, 12, 10);
    ofDrawRectangle(67, 66, 10, 78);
    ofDrawRectangle(297, 187, 11, 33);
    ofDrawRectangle(286, 220, 11, 34);
    ofDrawRectangle(276, 253, 10, 44);
    ofDrawRectangle(265, 298, 10, 32);
    ofDrawRectangle(56, 143, 10, 56);
    ofDrawRectangle(66, 186, 32, 11);
    ofDrawRectangle(46, 198, 10, 10);
    ofDrawRectangle(35, 209, 11, 11);
    ofDrawRectangle(23, 219, 11, 56);
    ofDrawRectangle(98, 198, 11, 11);
    ofDrawRectangle(110, 209, 11, 11);
    ofDrawRectangle(121, 221, 10, 10);
    ofDrawRectangle(132, 209, 11, 11);
    ofDrawRectangle(143, 198, 56, 11);
    ofDrawRectangle(199, 208, 11, 11);
    ofDrawRectangle(209, 220, 11, 11);
    ofDrawRectangle(221, 232, 11, 65);
    ofDrawRectangle(210, 296, 11, 11);
    ofDrawRectangle(188, 308, 22, 11);
    ofDrawRectangle(155, 320, 31, 10);
    ofDrawRectangle(132, 308, 24, 11);
    ofDrawRectangle(111, 231, 10, 67);
    ofDrawRectangle(121, 297, 10, 11);
    ofDrawRectangle(56, 276, 57, 10);
    ofDrawRectangle(85, 381, 24, 10);
    ofDrawRectangle(33, 276, 11, 11);
    ofDrawRectangle(33, 286, 22, 23);
    ofDrawRectangle(56, 309, 10, 10);
    ofDrawRectangle(67, 319, 33, 12);
    ofDrawRectangle(67, 243, 10, 10);
    ofDrawRectangle(177, 264, 10, 10);
    ofDrawRectangle(246, 329, 20, 11);
    ofDrawRectangle(238, 340, 10, 26);
    ofDrawRectangle(228, 366, 10, 16);
    ofDrawRectangle(228, 382, 27, 10);
    ofDrawRectangle(100, 331, 10, 40);
    ofDrawRectangle(108, 371, 10, 10);
    ofDrawRectangle(74, 392, 10, 10);
    ofDrawRectangle(63, 403, 10, 10);
    ofDrawRectangle(54, 413, 10, 15);
    ofDrawRectangle(43, 428, 10, 24);
    ofDrawRectangle(33, 451, 10, 20);
    ofDrawRectangle(21, 471, 13, 10);
    ofDrawRectangle(8, 481, 14, 11);
    ofDrawRectangle(255, 391, 10, 12);
    ofDrawRectangle(266, 404, 10, 24);
    ofDrawRectangle(277, 428, 10, 32);
    ofDrawRectangle(285, 459, 19, 11);
    ofDrawRectangle(304, 469, 14, 11);
    ofDrawRectangle(315, 480, 27, 11);
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
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
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
