#include "Ball.h"

Ball::Ball()
{


}

void Ball::setup(){

x = ofRandom(0, ofGetWidth());
y = ofRandom(0,ofGetHeight());

radius = ofRandom(10, 100);

color = ofColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));

speed_x = ofRandom(0, 10);
speed_y = ofRandom(0,10);


}

void Ball::bounce(){

if(x<0 || x>ofGetWidth()){
    speed_x *= -1;
}

if(y<0 || y>ofGetHeight()){
    speed_y *= -1;
}

x += speed_x;
y += speed_y;

}



void Ball::display(){
ofSetColor(color);
ofCircle(x, y, radius, radius);


}
