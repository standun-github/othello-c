//
// Created by shinzie on 26/11/2020.
//

#include <iostream>
#include "player.h"



void player::setPlayer() {
    if (curr_player == 'X') {
        curr_player = 'O';
    } else {
        curr_player = 'X';
    }

}

void player::setPlayer(char start_player) {
    curr_player = start_player;
}

bool player::playerDiskColor() {

    if (curr_player == 'X') {
        return 1;
    }
    else {
        return 0;
    }
}

void player::toString() {

    std::cout << curr_player << "'s turn" << std::endl;

}

char player::getOpponent() {

    char opponent;

    if (curr_player == 'X') {
        opponent = 'O';
    } else {
        opponent = 'X';
    }

    return opponent;
}

bool player::getColor(char player) {

    if (player == 'X') {
        return 1;
    }

    return 0;
}