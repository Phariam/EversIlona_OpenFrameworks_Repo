#include "ofApp.h"
#include "ofxGui.h"
//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup("Instellingen","settings.xml");
    gui.add(count.setup("ballcount",50,0,200));
    gui.add(speed_x.setup("speed_x",20,0,200));
    gui.add(speed_y.setup("speed_y",20,0,200));

    gui.loadFromFile("settings.xml");


    //ballcount = 10;

for(int t = 0; t<ballcount; t++){

    Ball newBall;
    newBall.setup();
    balls.push_back(newBall);



}


}


//--------------------------------------------------------------
void ofApp::update(){

    //float newBallSpeedX = speedX;

for(int t = 0; t<ballcount; t++){

balls[t].bounce();



}
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();

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

void ofApp::exit() {
    gui.saveToFile("settings.xml");
}
