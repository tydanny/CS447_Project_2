//
// Created by tysth on 4/1/2019.
//

#ifndef PROJECT_2_GAME_H
#define PROJECT_2_GAME_H

#include "HumanPlayer.h"
#include "BetaPlayer.h"
#include "AlphaPlayer.h"
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <random>

class Game {
private:
    vector<Card> deck;
    void shuffleDeck();
    void fillDeck();
    int pot = 0;
    void doHand(Player& firstPlayer, Player& secondPlayer);
    bool doBetRound(Player* firstPlayer, Player* secondPlayer, int& bet1, int& bet2, int numRaises);
public:
    Game();
    bool playGame(Player::PlayerType p0Type, Player::PlayerType p1Type, int& chips0, int& chips1, bool reportFlag);
};


#endif //PROJECT_2_GAME_H
