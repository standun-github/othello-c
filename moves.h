//
// Created by shinzie on 28/11/2020.
//

#ifndef OPENGLTEST_MOVES_H
#define OPENGLTEST_MOVES_H

#include <vector>
#include <list>
#include "coord.h"
class moves {

private:
    coord move;
    std::vector<coord> tilestoflip;
    int tiles;

public:
    moves();
    moves(coord position, std::vector<coord> coordinates);
    moves(coord position);
    void setTilestoflip(std::vector<coord> coordinates);
    coord getmove() { return move; };
    std::vector<coord> getTilestoflip() { return tilestoflip;};
    void addTilestoflip(std::vector<coord> tiles_to_add);
    void toString();
    bool isEqual(moves move2);
};


#endif //OPENGLTEST_MOVES_H
