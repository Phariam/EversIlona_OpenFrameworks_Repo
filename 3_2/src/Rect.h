#ifndef _Rect
#define _Rect

#include "ofMain.h"

class Rect {

public:

    Rect();

    void setup();
    void update();
    void draw();

    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int radius;
    ofColor color;

private:

};
#endif
