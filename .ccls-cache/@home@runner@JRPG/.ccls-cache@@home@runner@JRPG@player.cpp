#include "player.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//initialize player stats
Player::Player(int health, int attackPower, int mana) :
  health(100),
  attackPower(20),
  mana(20) {}
}

void Player::displayStats() const {
  cout << "Health: " << health << endl;
  cout << "Attack: " << attackPower << endl;
  cout << "Mana: " << mana << endl;
}