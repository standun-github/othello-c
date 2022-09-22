//
// Created by shinzie on 28/11/2020.
//

#ifndef OPENGLTEST_COORD_H
#define OPENGLTEST_COORD_H


class coord {
private:
    int x; //col
    int y; //row

public:
    coord();

    coord(int i, int j);

    int getX() { return x; }

    int getY() { return y; }

    void toString();
};


#endif //OPENGLTEST_COORD_H
