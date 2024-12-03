#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

using namespace std; // Avoid the need to prefix std:: for standard types

class Player
{
public:
    string name; // No need for std:: prefix
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