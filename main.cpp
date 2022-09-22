//GLFW
//https://www.glfw.org/documentation.html
//https://stackoverflow.com/questions/49860087/running-opengl-program-with-clion-ide
//https://stackoverflow.com/questions/34856321/glfw-cmake-clion-many-undefined-referenences

//GLEW
//http://glew.sourceforge.net/basic.html
//https://stackoverflow.com/questions/35180450/glew-wont-work-with-cmake

//https://stackoverflow.com/questions/199555/how-would-you-go-about-implementing-the-game-reversi-othello


//https://stackoverflow.com/questions/2571402/how-to-use-glortho-in-opengl

//mouse input
//https://www.youtube.com/watch?v=EE5cS8EMT78

#include "draw.h"
#include "player.h"
#include "board.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

float COLUMN = 8.0;
float ROW = 8.0;
draw draw;
player currentPlayer;
board board;
utility helper;

static void cursorPositionCallback(GLFWwindow *window, double xPos, double yPos );
void cursorEnterCallback(GLFWwindow *window, int entered );
void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods );
void resize();

void init() {
    glClearColor(0.5,0.35,0.5,1.0);
}

void display() {
    resize();
    glClear(GL_COLOR_BUFFER_BIT);

    draw.draw_grid();
    board.drawDisks();
}

void resize(){
    glViewport(0,0,(GLsizei)500,(GLsizei)500);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity(); //load identity matrix
    glOrtho(-0.5,COLUMN+0.5,-0.5,ROW+0.5,-1.0,1.0);
    glMatrixMode(GL_MODELVIEW); //set modelview matrix using extrinsic camera params
}

int main(int argc, char** argv) {
    GLFWwindow *window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 640, "Othello Board", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwSetCursorPosCallback(window, cursorPositionCallback);
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    glfwSetCursorEnterCallback(window, cursorEnterCallback);
    glfwSetMouseButtonCallback(window, mouseButtonCallback);
    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    board.setSize(COLUMN);
    board.initBoard();
    draw.setGridSize(COLUMN, ROW);
    currentPlayer.setPlayer('X');
    currentPlayer.toString();
    board.printMatrix();
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window)) {



        /* Render here */
        init();
        display();
        //display
        glfwSwapBuffers(window);
        //Poll for and process events
        glfwPollEvents();

        if (board.gameOver()) {
            std::cout <<  " Game over! " <<std::endl;
            break;
        }
    }

    glfwTerminate();
    return 0;
}

static void cursorPositionCallback (GLFWwindow *window, double xPos, double yPos) {
    //std::cout << xPos << " : " << yPos << "\n";
}

void cursorEnterCallback(GLFWwindow *window, int entered ) {
    if (entered ) {
       // std::cout << "Entered Window " << std::endl;

    } else {
       // std::cout << "left Window " << std::endl;
    }
}

double mouse_x = 0, mouse_y = 0;
void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods ) {
    if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS ) {
        //std::cout << "Left button pressed " << std::endl;

        glfwGetCursorPos(window, &mouse_x, &mouse_y);

        if (helper.withinBoardRange(mouse_x,mouse_y)) {

            if (board.tileIsEmpty(mouse_x,mouse_y)) {

                if (board.checkMove(currentPlayer, mouse_x, mouse_y)) {

                    board.addToBoard(currentPlayer,mouse_x,mouse_y);

                    currentPlayer.setPlayer(); //only change turn when curr player makes valid moves
                    currentPlayer.toString();
                }

//            std::cout << "x,y : " << mouse_x << " , " << mouse_y << std::endl;
//            std::cout << "x,y : " << x << " , " << y << std::endl;
            }
        }

    }

//    if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_RELEASE ) {
//        std::cout << "Left button release " << std::endl;
//    }
}

