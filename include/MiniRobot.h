#ifndef MINIROBOT_H
#define MINIROBOT_H

#include <stdio.h>
#include <GL/glut.h>

#include "Cube.h"
#include "Rectangle.h"

class MiniRobot
{
    public:
        MiniRobot();
        void display(void);
        float Xpos;
        float Ypos;

    protected:

    private:
    GLuint textures[6];

    GLUquadricObj *quad = gluNewQuadric();
};

#endif // ROBOT_H
