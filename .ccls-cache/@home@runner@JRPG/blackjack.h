#ifndef BLACKJACK_H
#define BLACKJACK_H
#include <iostream>
#include <string>

using namespace std;

class BlackJack {
public:
  string suit[4] = {"Spades", "Hearts", "Diamonds", "Clubs"};
  string cards[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
  int cardValue[13] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
  int turnOrder;
  char hitOrStand;

  int playerCardOne;
  int playerCardOneSuit;
  int playerCardTwo;
  int playerCardTwoSuit;
  int numOfAces;

  int enemyCardOne;
  int enemyCardOneSuit;
  int enemyCardTwo;
  int enemyCardTwoSuit;

  bool endTurn;
  bool enemyTurn;
  bool newCard;
  int playerScore;
  int enemyScore;    

  string winner;

  void startBlackJack();

};

#endif