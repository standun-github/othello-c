//
// Created by shinzie on 26/11/2020.
//

#ifndef OPENGLTEST_PLAYER_H
#define OPENGLTEST_PLAYER_H


class player {

private:
    char curr_player;
public:
    char getPlayer() { return curr_player; }
    void setPlayer();
    void setPlayer(char start_player);
    bool playerDiskColor();
    void toString();
    char getOpponent();
    bool getColor(char player);
};


#endif //OPENGLTEST_PLAYER_H
