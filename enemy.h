#ifndef ENEMY_H
#define ENEMY_H

#include <string>

using namespace std; 
using namespace std; 

class Enemy {
public:
    Enemy(int enemyHealth = 50, int enemyDamage = 10);

    void displayEnemyStats();
    int attack() const;

    void setDifficulty(const string &difficulty);

    int enemyHealth;
    int enemyDamage;

};
#endif