#ifndef BLACKJACK_H
#define BLACKJACK_H
#include <iostream>
#include <string>

using namespace std;

class Blackjack {
public:
  string suit;
  bool face; //for visual flare, if the rand comes back with < 10, it will be a face card
  int pointsValue; //1-10, if ace 11 or 1 depending on whats best for player
  BlackJack();

};