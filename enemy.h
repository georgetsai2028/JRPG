#ifndef ENEMY_H
#define ENEMY_H

#include <string>

using namespace std; // Use the standard namespace

class Enemy
{
public:
    string name;     // Name of the enemy
    int health;      // Health points of the enemy
    int attackPower; // Attack power of the enemy
    int mana;        // Mana of the enemy

    // Constructor
    Enemy(const string &name, int health, int attackPower, int mana);

    // Method to display the enemy's stats
    void displayStats();
};

#endif