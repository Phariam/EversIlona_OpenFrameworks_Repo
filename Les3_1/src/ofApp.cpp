#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){

    ballcount = 10;

for(int t = 0; t<ballcount; t++){

    Triangle newDriehoek;
    newDriehoek.setup();
    Driehoek.push_back(newDriehoek);

}

for(int t = 0; t<ballcount; t++){

    Circle newCirkel;
    newCirkel.setup();
    Cirkel.push_back(newCirkel);

}

for(int t = 0; t<ballcount; t++){

    Rect newVierkant;
    newVierkant.setup();
    Vierkant.push_back(newVierkant);

}


}


//--------------------------------------------------------------
void ofApp::update(){

for(int t = 0; t<ballcount; t++){
        DrieHoek[t].bounce();
        VierKant[t].bounce();
        Cirkel[t].bounce();



}
}

//--------------------------------------------------------------
void ofApp::draw(){

for(int t = 0; t<ballcount; t++)
    {
        DrieHoek[t].display();
}


	  for (int t = 0; t < DrieHoek.size(); t++)
	  {
		   VierKant[t].display();
	  }

	   for (int u = 0; u < DrieHoek.size(); u++)
	   {
		   Cirkel[u].display();
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
