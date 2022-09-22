//
// Created by shinzie on 24/11/2020.
//

#ifndef OPENGLTEST_DISK_H
#define OPENGLTEST_DISK_H


#include <vector>

class Disk {

private:
    bool d_color;
    double d_posX;
    double d_posY;
    std::vector<Disk> tilesToFlip;

public:
    Disk(bool color, double posX, double posY);
    void setDisk(bool color, double posX, double posY);
    void setColor(bool new_color) {d_color = new_color;}
    bool getColor() {return d_color;}
    double getPosX() {return d_posX;}
    double getPosY() {return d_posY;}
    void addTilesToFlip(std::vector<Disk> tiles);
    bool compare(Disk disk);

    void toString();
};


#endif //OPENGLTEST_DISK_H
