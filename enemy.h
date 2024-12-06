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
    Enemy(int enemyHealth, int enemyDamage);

    void displayEnemyStats();
    int enemyTakeDamage(int damage);
    int attack() const;

    int EnemyEasy(); //enemy easy

    int EnemyNormal(); //enemy normal

    int EnemyHard(); //enemy hard

};
#endif