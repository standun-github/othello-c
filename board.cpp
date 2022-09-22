//
// Created by shinzie on 27/11/2020.
//

//Matrix [row][col]
//Grid_pos [col][row]

#include <iostream>
#include "board.h"
#include "moves.h"

draw draw_tool;
utility utility;
moves chosenMove;


coord directions[] = {coord(0, 1),
                      coord(1, 1),
                      coord(1, 0),
                      coord(1, -1),
                      coord(0, -1),
                      coord(-1, -1),
                      coord(-1, 0),
                      coord(-1, 1)};

void board::setSize(float board_size) {
    size = board_size;
}

void board::initBoard() {
    list_of_disks.push_back(Disk(0, size / 2 + 0.5, size / 2 + 0.5));
    list_of_disks.push_back(Disk(1, size / 2 - 0.5, size / 2 + 0.5));
    list_of_disks.push_back(Disk(1, size / 2 + 0.5, size / 2 - 0.5));
    list_of_disks.push_back(Disk(0, size / 2 - 0.5, size / 2 - 0.5));

    fillMatrix();
}

void board::fillMatrix() {

    int mid = 8 / 2;


    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matrix[i][j] = '0';

            if (i == (mid - 1) && j == (mid - 1)) {
                matrix[i][j] = 'X';
            }
            if (i == (mid - 1) && j == mid) {
                matrix[i][j] = 'O';
            }
            if (i == mid && j == (mid - 1)) {
                matrix[i][j] = 'O';
            }
            if (i == mid && j == mid) {
                matrix[i][j] = 'X';
            }
        }
    }
}

int board::inMovesArray(int column, int row) {
    for (int i = 0; i < validMoves.size(); i++) {
        if ((int) validMoves.at(i).getmove().getX() == column && (int) validMoves.at(i).getmove().getY() == row) {
            return i;
        }
    }
    return -1;
}

bool board::checkMove(player currplayer, double tile_x, double tile_y) {

    validMoves.clear();

    char player = currplayer.getPlayer();
    char opponent = currplayer.getOpponent();

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (matrix[i][j] == player) {

                for (int d = 0; d < 8; d++) {
                    int  row = directions[d].getX();
                    int column = directions[d].getY();

                    if (matrix[i + row][j + column] == opponent) {

                        while (matrix[i + row][j + column] == opponent) {
                            row += directions[d].getX(); //get neighbor column
                            column += directions[d].getY(); //get neighbor row

                            if (isInMatrix(i + row, j + column) == false) {
                                continue; //continue to next direction
                            } else {
                                if (matrix[i + row][j + column] == player) {
                                    break;
                                }
                                if (matrix[i + row][j + column] == '0') {
                                    int counter = inMovesArray(i + row, j + column);

                                    coord endPos(i + row, j + column);
                                    std::vector<coord> tiles;
                                    moves move(endPos);

                                    while (true) {
                                        row -= directions[d].getX();
                                        column -= directions[d].getY();
                                        if (row == 0 && column == 0) {
                                            break;
                                        }
                                        coord toflip(endPos.getX() - row, endPos.getY() - column);
                                        tiles.push_back(toflip);
                                    }

                                    if (counter == -1) { //if is not already in list
                                        move.setTilestoflip(tiles);
                                        validMoves.push_back(move);
                                    } else {
                                        move.addTilestoflip(tiles);
                                        addTiles(counter, tiles);
                                    }
                                }

                            }
                        }
                    }
                }
            }
        }
    }

    if (validMoves.empty()) {
        std::cout << "There is no possible moves." << std::endl;
        endgame = true;
        return false;
    }

    endgame = false;
    printValidMoves();

    double units_col = utility.convertToUnits_X(tile_x);
    double units_row = utility.convertToUnits_Y(tile_y);

    int i_row = utility.convertToI(units_row);
    int j_col = utility.convertToJ(units_col);

    chosenMove = (coord(i_row, j_col));

    for (int i = 0; i < validMoves.size(); i++) {
        if (chosenMove.isEqual(validMoves.at(i))) {
            return true;
        }
    }

    return false;
}

void board::printValidMoves() {
    for (int i = 0; i < validMoves.size(); i++) {
        std::cout << "[Valid move:";
        validMoves.at(i).toString();
        std::cout << "]" << std::endl;
    }
}

void board::addTiles(int counter, std::vector<coord> tiles) {
    validMoves.at(counter).addTilestoflip(tiles);
}

void board::printMatrix() {

    std::cout << "Othello" << std::endl;
    std::cout << "- 1 2 3 4 5 6 7 8" << std::endl;

    for (int i = 0; i < 8; i++) {
        std::cout << i + 1 << " ";

        for (int j = 0; j < 8; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }


}

void board::drawDisks() {

   // std::cout << "list of disks (" << list_of_disks.size() << ")" << std::endl;

    for (std::list<Disk>::iterator it = list_of_disks.begin(); it != list_of_disks.end(); ++it) {

        draw_tool.draw_circle(it->getColor(), it->getPosX(), it->getPosY());
    }
}

bool board::tileIsEmpty(double tile_x, double tile_y) {

    tile_x = utility.convertToUnits_X(tile_x);
    tile_y = utility.convertToUnits_Y(tile_y);

    //std::cout << tile_x << " " << tile_y << std::endl;

    for (std::list<Disk>::iterator it = list_of_disks.begin(); it != list_of_disks.end(); ++it) {
        if (tile_x == it->getPosX() && tile_y == it->getPosY()) {
            return false;
        }
    }
    return true;
}

void board::addToBoard(player currplayer, double tile_x, double tile_y) {

    char player = currplayer.getPlayer();
    char opponent = currplayer.getOpponent();

    double units_col = utility.convertToUnits_X(tile_x);
    double units_row = utility.convertToUnits_Y(tile_y);

    int i_row = utility.convertToI(units_row);
    int j_col = utility.convertToJ(units_col);

    std::vector<Disk> tilesToFlip_inUnits;

    int counter = inMovesArray(chosenMove.getmove().getX(), chosenMove.getmove().getY());

    if (counter != -1) {
        matrix[i_row][j_col] = player;
        std::vector<coord> tilesToFlip = validMoves.at(counter).getTilestoflip();

       // std::cout << "tiles to flip: (" << tilesToFlip.size() << ")" << std::endl;

        Disk disk = Disk(currplayer.playerDiskColor(), units_col, units_row);
        list_of_disks.push_back(disk);

        for (int count = 0; count < tilesToFlip.size(); count++) {

           // tilesToFlip.at(count).toString();

            int i = tilesToFlip.at(count).getX();
            int j = tilesToFlip.at(count).getY();
            matrix[i][j] = currplayer.getPlayer(); //change matrix

            double posX = utility.matrix_to_units_X(j);
            double posY = utility.matrix_to_units_Y(i);

            Disk old_disk = Disk(currplayer.getColor(opponent), posX, posY);
            Disk new_disk = Disk(currplayer.playerDiskColor(), posX, posY);

            //std::replace(list_of_disks.begin(), list_of_disks.end(), old_disk, new_disk);

         //   list_of_disks.remove(old_disk);
            list_of_disks.push_back(new_disk);

           replaceDisk(list_of_disks,old_disk,new_disk);
        }
        printMatrix();
    }

}

bool board::isInMatrix(int row, int column) {
    return row >= 0 && row < 8 && column >= 0 && column < 8;
}

void board::replaceDisk(std::list<Disk> list, Disk old_value, Disk new_value) {

    std::list<Disk>::iterator first = list.begin();
    std::list<Disk>::iterator last = list.end();

    std::list<Disk>::iterator it;
    while (first != last) {
        if (first->compare(old_value)) {
          it = first;
        }
        ++first;
    }

    list_of_disks.erase(it);
    }
