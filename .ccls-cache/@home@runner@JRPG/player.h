#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Player {
public:
    Player(int health, int attackPower, int mana); //constructor

//display player stats
void displayStats() const;

private:
string name;
int health;
int attackPower;
int mana;

};

#endif