#ifndef BLACKJACK2_H
#define BLACKJACK2_H
#include <iostream>
#include <string>

using namespace std;

class BlackJack2 {
public:
string suit[4] = {"Spades", "Hearts","Diamonds", "Clubs"};
string cards[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
int cardValue[13] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};

int playerScore = 0, enemyScore = 0;
int playerCardOne, playerCardOneSuit, numOfAces = 0;
int enemyCardOne, enemyCardOneSuit;

bool endTurn = true;
char hitOrStand;
bool playerBust = false;
bool playerWin = false;

void startBlackJack2();

};

#endif