#include "enemy.h"
#include <iostream>

using namespace std;

// enemy constructor
Enemy::Enemy(const string &name, int health, int attackPower, int mana)
    : name(name), health(health), attackPower(attackPower), mana(mana) {}

// shows enemy stats
void Enemy::displayStats()
{
    cout << "Enemy: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Attack Power: " << attackPower << endl;
    cout << "Mana: " << mana << endl;
}