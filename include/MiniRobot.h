#ifndef MINIROBOT_H
#define MINIROBOT_H

#include <stdio.h>
#include <GL/glut.h>

#include "Cube.h"
#include "Rectangle.h"

class MiniRobot
{
    public:
        MiniRobot(float x, float y);
        void display(void);
        void updatePos(float x, float y);

    protected:

    private:
    float Xpos;
    float Ypos;
    float upRot;
    float downRot;
    float rRot;
    float lRot;
    void move(void);
    GLuint textures[6];
};

#endif // ROBOT_H
