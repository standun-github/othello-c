//
// Created by shinzie on 15/11/2020.
//

#ifndef OPENGLTEST_DRAW_H
#define OPENGLTEST_DRAW_H


class draw {

public:
    void setGridSize(float col, float row);
    void draw_square(int x ,int y);
    void draw_grid();
    void draw_circle(bool colorBlack, float startX, float startY);

};


#endif //OPENGLTEST_DRAW_H
