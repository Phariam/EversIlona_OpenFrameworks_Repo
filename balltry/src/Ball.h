#ifndef BALL_H
#define BALL_H

#include "ofMain.h"

class Ball
{
    public:
        Ball();

        void setup();
        void bounce();
        void display();

        float x;
        float y;
        float speed_x;
        float speed_y;
        float radius;

        ofColor color;

    private:
};

#endif // BALL_H
