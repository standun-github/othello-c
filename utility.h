//
// Created by shinzie on 28/11/2020.
//

#ifndef OPENGLTEST_UTILITY_H
#define OPENGLTEST_UTILITY_H

#include <math.h>
#include "coord.h"

class utility {

public:
    double convertToUnits_X(int x);
    double convertToUnits_Y(int y);

    int convertToI(double x);
    int convertToJ(double y);

    double matrix_to_units_X(int j);
    double matrix_to_units_Y(int i);

    bool withinBoardRange(int width, int height);
};


#endif //OPENGLTEST_UTILITY_H
