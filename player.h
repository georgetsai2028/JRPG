#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

class Player
{
public:
    string name; 
    int health;
    int mana;
    int attackPower;
    vector<string> inventory;

    Player(const string &name, int health, int mana, int attackPower);

    void displayStats();
    void addItem(const string &item);
    void useItem(const string &item);
};

#endif