#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){

    ballcount = 10;

for(int t = 0; t<ballcount; t++){

    Ball newBall;
    newBall.setup();
    balls.push_back(newBall);



}


}


//--------------------------------------------------------------
void ofApp::update(){

for(int t = 0; t<ballcount; t++){

balls[t].bounce();



}
}

//--------------------------------------------------------------
void ofApp::draw(){

for(int t = 0; t<ballcount; t++){

balls[t].display();



}

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
