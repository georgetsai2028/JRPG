#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Player {
public:
    Player(int health = 100, int attackPower = 20, int mana = 20); 
//default constructor

//display player stats
    void displayStats() const;
    void levelUp();

    int health;
    int attackPower;
    int mana;
private:
    int maxMana = 100;
};

#endif