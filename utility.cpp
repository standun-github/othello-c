//
// Created by shinzie on 28/11/2020.
//

#include "utility.h"

//mouse position to openGL units
double utility::convertToUnits_X(int x) {
    x = ((x - 28) / 55.5);

    double temp_x = x + 0.5;

    return temp_x;
}

//mouse position to openGL units
double utility::convertToUnits_Y(int y) {
    y = ((y - 168) / 55.5);
    y = (y - 7) * -1;

    double temp_y = y + 0.5;

    return temp_y;
}

//grid to matrix
int utility::convertToI(double column) {
    int i = floor(column);
    i = (i - 7) * -1;

    return i; //--- row
}

//grid to matrix
int utility::convertToJ(double row) {

    int j = floor(row);

    return j; //--- column
}

//matrix (after converted row-> col, col->row using function above) to grid
double utility::matrix_to_units_X(int j) {
    double unit_x = j + 0.5;
    return unit_x;
}

//matrix (after converted row-> col, col->row using function above) to grid
double utility::matrix_to_units_Y(int i) {
    i = (i -7 ) * -1;
    double unit_y = i + 0.5;

    return unit_y;
}

bool utility::withinBoardRange(int width, int height) {
        if (width <= 472 && width >= 28 && height <= 612 && height >= 168) {
            return true;
        }
        return false;

}