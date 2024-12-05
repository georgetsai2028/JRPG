#ifndef ENEMY_H
#define ENEMY_H

#include <string>

using namespace std; 

class Enemy {
public:    
    int enemyHealth;      
    int enemyDamage;
    Enemy(int enemyHealth, int enemyDamage);
    void displayEnemyStats();
    int enemyTakeDamage(int damage);

    int EnemyEasy(); //enemy easy
    void sethpEasy(int enemyHealth);
    void setdmgEasy(int enemyDamage);
    int gethpEasy();
    int getdmgEasy();

    int EnemyNormal(); //enemy normal
    void sethpNormal(int enemyHealth);
    void setdmgNormal(int enemyDamage);
    int gethpNormal();
    int getdmgNormal();

    int EnemyHard(); //enemy hard
    void sethpHard(int enemyHealth);
    void setdmgHard(int enemyDamage);
    int gethpHard();
    int getdmgHard();
};
#endif