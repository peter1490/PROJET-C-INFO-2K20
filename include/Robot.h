#ifndef ROBOT_H
#define ROBOT_H

#include <stdio.h>
#include <GL/glut.h>

#include "Cube.h"
#include "Rectangle.h"

class Robot
{
    public:
        Robot();
        void display(double bullet);
        void updateLangue();
        void wall();
        void updateRobotPos();
        void robotMove();
        char rFoward;
        char rBack;
        char rLeft;
        char rRight;
        float rXpos;
        float rYpos;

    protected:

    private:
    int i;
    float rLeg;
    float lLeg;
    bool upLeg;
    bool downLeg;
    float langue;
    bool up = false;
    bool down = true;
    GLuint textures[6];

    GLUquadricObj *quad = gluNewQuadric();
};

#endif // ROBOT_H
