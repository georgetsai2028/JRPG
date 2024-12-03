#ifndef ENEMY_H
#define ENEMY_H

#include <string>

using namespace std; 

class Enemy
{
public:
    string name;     
    int health;      
    int attackPower; 
    int mana;       

    
    Enemy(const string &name, int health, int attackPower, int mana);

    //displays the enemies stats
    void displayStats();
};
//Nota's Notes, gonna rewrite this a little bit.
//gonna have 3 enemy classes, EnemyEasy, EnemyNormal, EnemyHard
//thought process is each enemy will have a different health have attack power
#endif