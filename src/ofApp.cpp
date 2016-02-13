#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetCircleResolution(100);
    
    soundplayer.loadSound("sound.mp3");
    soundplayer.setLoop(true);
    soundplayer.setVolume(1.0);
    soundplayer.play();
    
  
    


}

//--------------------------------------------------------------
void ofApp::update(){
    
    volume = ofSoundGetSpectrum(1);
   
    size_circle = volume[0]*1300;
   
  

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
    ofNoFill();
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, size_circle);
    ofSetLineWidth(50);
    
 

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
