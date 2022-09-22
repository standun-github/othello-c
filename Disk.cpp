//
// Created by shinzie on 24/11/2020.
//

#include <iostream>
#include "Disk.h"

Disk::Disk(bool color, double posX, double posY) {
    setDisk(color,posX,posY);
}

void Disk::setDisk(bool color, double posX, double posY) {
    d_color = color;
    d_posX = posX;
    d_posY = posY;
}

void Disk::addTilesToFlip(std::vector<Disk> tiles) {
    for (int i=0; i < tiles.size(); i++) {
        tilesToFlip.push_back(tiles.at(i));
    }
}

bool Disk::compare(Disk disk) {
    if (d_posX != disk.getPosX() || d_posY != disk.getPosY() || d_color != disk.getColor()) {
        return false;
    }
/*    if (d_posX != disk.getPosX()) {
        std::cout << "wrong row " << std::endl;
    }
    if (d_posY != disk.getPosY()) {
        std::cout << "wrong column " << std::endl;
    }

    if (d_color != disk.getColor()) {
        std::cout << "wrong color " << std::endl;
    }*/
    return true;
}

void Disk::toString() {
    std::cout << "Color : " << d_color << "row : " << d_posX << "column : " << d_posY;
}