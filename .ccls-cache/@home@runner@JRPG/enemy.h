#ifndef ENEMY_H
#define ENEMY_H

#include <string>

using namespace std; 
using namespace std; 

class Enemy {
private:
    int enemyHealth;
    int enemyDamage;
public:
    Enemy(int enemyHealth = 50, int enemyDamage = 10);

    void displayEnemyStats();
    int enemyTakeDamage(int damage);
    int attack() const;

    void setDifficulty(const string &difficulty);

};
#endif