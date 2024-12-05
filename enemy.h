#ifndef ENEMY_H
#define ENEMY_H

#include <string>

using namespace std; 

class EnemyEasy
{
public:    
    int enemyHealthEasy;      
    int enemyDamageOutputEasy;
    EnemyEasy(int enemyHealthEasy, int enemyDamageOutputEasy);

    //displays the enemies stats
    void displayEnemyStats();
    int getEnemyHealthEasy();
    int getEnemyDamageEasy();
    int enemyTakeDamageEasy();
};
class EnemyNormal
{
public:    
    int enemyHealthNormal;      
    int enemyDamageOutputEasy;
    EnemyEasy(int enemyHealthEasy, int enemyDamageOutputEasy);

    //displays the enemies stats
    void displayEnemyStats();
    int getEnemyHealthEasy();
    int getEnemyDamageEasy();
    int enemyTakeDamageEasy();
};



//Nota's Notes, gonna rewrite this a little bit.
//gonna have 3 enemy classes, EnemyEasy, EnemyNormal, EnemyHard
//thought process is each enemy will have a different health have attack power
#endif