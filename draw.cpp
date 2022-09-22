//
// Created by shinzie on 15/11/2020.
//

//https://www.youtube.com/watch?v=Sf89EMyBpmw
//https://www.youtube.com/watch?v=vasfdPx5cvY
//http://www.opengl-tutorial.org/beginners-tutorials/tutorial-6-keyboard-and-mouse/

#include "draw.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <iostream>
#include <vector>
#include <math.h>
#include <GL/glut.h>

float gridX;
float gridY;

void draw::setGridSize(float COLUMN, float ROW) {
    gridX = COLUMN;
    gridY = ROW;
}

void draw::draw_grid()  {

    for (int i=0; i< gridX; i++) {
        for (int j = 0; j< gridY; j++) {
            draw_square(i,j);
        }
    }

}

void draw::draw_square(int x, int y) {

    //glClearColor(0.0,0.0,0.0,1.0);
    glLineWidth(1.0);
    glColor3f(1.0,1.0,1.0);

    glBegin(GL_LINE_LOOP); //start drawing of points
    glVertex2f(x,y);
    glVertex2f(x+1,y);
    glVertex2f(x+1,y+1);
    glVertex2f(x,y+1);
    glEnd(); //end of drawing points
}

const int steps = 30;
const float angle = 3.1415926 * 2.f /steps;
void draw::draw_circle(bool colorBlack, float startX, float startY) {
    float xPos = 0;
    float yPos = 0;
    float radius = 0.5f;

    float prevX = xPos;
    float prevY = yPos - radius;

    for (int i=0; i<=steps; i++) {
        float newX = radius * sin(angle*i);
        float newY = -radius * cos(angle*i);
        glBegin(GL_TRIANGLES);
        if (colorBlack == true) {
            glColor3f(0.0f, 0.0f, 0.0f);
        } else {
            glColor3f(1.0f, 1.0f, 1.0f);
        }
        glVertex3f(startX + 0.0f,startY +0.0f,0.0f);
        glVertex3f(startX + prevX,startY +prevY,0.0f);
        glVertex3f(startX + newX,startY +newY,0.0f);
        glEnd();

        prevX = newX;
        prevY = newY;
    }

}
