//
// Created by shinzie on 28/11/2020.
//

#include "coord.h"

#include <iostream>

coord::coord() {
    x = 0;
    y = 0;
}

coord::coord(int i,int j) {
    x = i;
    y = j;
}

void coord::toString() {
    std::cout << "[" << x + 1 << "," << y + 1 << "]";
}