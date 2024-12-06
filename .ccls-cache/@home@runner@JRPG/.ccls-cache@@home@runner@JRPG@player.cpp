#include "player.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// initialize player stats aka player constructor
Player::Player(int health, int attackPower, int mana)
    : health(health), attackPower(attackPower), mana(mana) {}


void Player::displayStats() const {
  cout << "Health: " << health << endl;
  cout << "Attack: " << attackPower << endl;
  cout << "Mana: " << mana << endl;
}