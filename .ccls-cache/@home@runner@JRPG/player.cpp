#include "player.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//initialize player stats aka player constructor
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

void Player::takeDamage(int damage)
{
  health -= damage;
  if (health < 0) { health = 0;}
}

void Player::regenerateMana()
{
  mana = mana + 5;
}

int Player::attack() const 
{
  return attackPower;
}