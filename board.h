//
// Created by shinzie on 27/11/2020.
//

#include <list>
#include <algorithm>
#include <vector>
#include "draw.h"
#include "Disk.h"
#include "player.h"
#include "moves.h"
#include "utility.h"
#ifndef OPENGLTEST_BOARD_H
#define OPENGLTEST_BOARD_H


class board {
private:
    char matrix[8][8];
    float size;
    std::list<Disk> list_of_disks;
    int xscore;
    int oscore;
    bool endgame;
    std::vector<moves> validMoves;

public:
    void initBoard();
    void fillMatrix();
    void printMatrix();
    bool checkMove(player currplayer, double tile_x, double tile_y);

    void drawDisks();
    void setSize(float board_size);
    bool gameOver() {return endgame;};
    bool tileIsEmpty(double tile_x, double tile_y);
    void addToBoard(player currplayer, double tile_x, double tile_y);
    bool isInMatrix(int row, int column);
    int inMovesArray(int row, int column);
    void addTiles(int counter, std::vector<coord> tiles);
    void printValidMoves();
    void replaceDisk(std::list<Disk> list, Disk old_value, Disk new_value);
};

#endif //OPENGLTEST_BOARD_H
