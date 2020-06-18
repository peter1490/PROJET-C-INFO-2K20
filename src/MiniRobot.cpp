#include "../include/MiniRobot.h"

MiniRobot::MiniRobot(){
    Xpos = 10.0f;
    Ypos = -46.0f;
}


void MiniRobot::display(void)
{
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT2);

//___________________Tete _________________________
//______________Tete _________________________
glPushMatrix();

    glScalef(0.2, 0.2, 0.2);
    /*_______________MiniRobot_______________*/
    glPushMatrix();
    /* Active le z-buffer */
        glEnable(GL_DEPTH_TEST);

        /* Activation des couleurs */
        glEnable(GL_COLOR_MATERIAL);

        /* d�finit la couleur d'effacement et la couleur de fond */
        glClearColor(0.0, 0.0, 0.0, 0.0);

        /* Activation des lumi�res */
        //glEnable(GL_LIGHTING);          // Activation du mode
        //glEnable(GL_LIGHT0);            // Activation lumi�re n�0
        //glEnable(GL_LIGHT1);            // Activation lumi�re n�1
        //glEnable(GL_LIGHT2);            // Activation lumi�re n�2

        /* Les normales (cr�es par glNormal(*)) sont automatiquement unitaires */
        glEnable(GL_NORMALIZE);


        /* Activation du mode ombrage (shading) et lissage (smooth) des couleur */
        glShadeModel(GL_SMOOTH);

        /*  d�finit la taille d'un pixel*/
        glPointSize(2.0);
        glTranslatef(this->Ypos, 0, this->Xpos);
        /* ______________TETE________________*/
        glPushMatrix();
            glTranslatef(0, 1.5, 0);
            glPushMatrix();
                glRotatef(90,0,0,1);
                glColor3f(0.3f, 0.6f, 0.6f);
                glScalef(0.6, 0.6, 0.6);
                glutSolidCube(0.5);
            glPopMatrix();
            /* figure */
            glPushMatrix();
                glTranslatef(0.2, 0, 0);
                glRotatef(90,0,0,1);
                glColor3f(0.6f, 0.6f, 0.3f);
                glScalef(0.2, 0.2, 0.2);
                glutSolidCube(0.5);
            glPopMatrix();
        glPopMatrix();
        /* ______________CORP________________*/
        glPushMatrix();
            glTranslatef(0, 1, 0);
            glPushMatrix();
                glRotatef(90,0,0,1);
                glColor3f(0.3f, 0.3f, 0.3f);
                glScalef(2, 0.5, 1);
                glutSolidCube(0.5);
            glPopMatrix();
        glPopMatrix();
        /*_______________Bras Gauche______________*/
        glPushMatrix();
            glTranslatef(0, 1, -0.3);
            glPushMatrix();
                glRotatef(90,0,0,1);
                glColor3f(0.7f, 0.3f, 0.3f);
                glScalef(1, 0.2, 0.2);
                glutSolidCube(0.5);
            glPopMatrix();
        glPopMatrix();
        /*_______________Bras Droit______________*/
        glPushMatrix();
            glTranslatef(0, 1, 0.3);
            glPushMatrix();
                glRotatef(90,0,0,1);
                glColor3f(0.7f, 0.3f, 0.3f);
                glScalef(1, 0.2, 0.2);
                glutSolidCube(0.5);
            glPopMatrix();
        glPopMatrix();
        /*_______________Jambe Gauche______________*/
        glPushMatrix();
            glTranslatef(0, 0.5, -0.15);
            glPushMatrix();
                glRotatef(90,0,0,1);
                glColor3f(0.7f, 0.3f, 0.3f);
                glScalef(1, 0.2, 0.2);
                glutSolidCube(0.5);
            glPopMatrix();
        glPopMatrix();

        /*_______________Jambe Droite______________*/
        glPushMatrix();
            glTranslatef(0, 0.5, 0.15);
            glPushMatrix();
                glRotatef(90,0,0,1);
                glColor3f(0.7f, 0.3f, 0.3f);
                glScalef(1, 0.2, 0.2);
                glutSolidCube(0.5);
            glPopMatrix();
        glPopMatrix();
        
    glPopMatrix();

glPopMatrix();

}


/*
void MiniRobot::updateRobotPos()
{
    if (rFoward){
        this->rXpos += 0.01;
        this->robotMove();
    }
    if (rRight){
        this->rYpos -= 0.01;
        this->robotMove();
    }
    if (rLeft){
        this->rYpos += 0.01;
        this->robotMove();
    }
    if (rBack){
        this->rXpos -= 0.01;
        this->robotMove();
    }
}
*/

