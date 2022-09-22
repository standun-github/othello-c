//
// Created by shinzie on 28/11/2020.
//

#include <iostream>
#include "moves.h"


moves::moves() {

}

moves::moves(coord position, std::vector<coord> coordinates) {
    move = position;
    tilestoflip = coordinates;
    for (int i=0; i < coordinates.size(); i++) {
        tiles++;
    }
}
moves::moves(coord position) {
    move = position;
    tiles = 0;
}

void moves::setTilestoflip(std::vector<coord> coordinates) {
    tilestoflip = coordinates;
    for (int i=0; i < coordinates.size(); i++) {
        tiles++;
    }
}

void moves::addTilestoflip(std::vector<coord> tiles_to_add) {
    for (int i=0; i < tiles_to_add.size(); i++) {
        tilestoflip.push_back(tiles_to_add.at(i));
        tiles++;
    }
}

void moves::toString() {

    std::cout << "Move: ";
    move.toString();
    std:: cout << "Tiles to flip: (" << tiles << ") \n";

    for (int i=0; i < tilestoflip.size(); i++) {
        tilestoflip.at(i).toString();
    }

}

bool moves::isEqual(moves move2) {
    return move.getX() == move2.getmove().getX() && move.getY() == move2.getmove().getY();
}
