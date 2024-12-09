#include "player.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// initialize player stats aka player constructor
Player::Player(int health, int attackPower, int mana)
    : health(health), attackPower(attackPower), mana(mana) {}


void Player::displayStats() const {
  cout << "Your Current Stats:" << endl;
  cout << "Health: " << health << endl;
  cout << "Attack: " << attackPower << endl;
  cout << "Mana: " << mana << endl;
}
void Player::levelUp() {
    cout << "You leveled up!!!" << endl;
    cout << "Attack + 15" << endl;
    cout << "Health + 30" << endl;
    cout << "Mana + 10" << endl;
    cout << endl;
    
    attackPower += 15;
    health += 30;
    mana += 10;
    
}