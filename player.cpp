#include "player.h"
#include <algorithm>
#include <iostream> // Required for std::cout and std::endl

using namespace std; // Use the standard namespace

// Constructor implementation
Player::Player(const string &name, int health, int mana, int attackPower)
    : name(name), health(health), mana(mana), attackPower(attackPower) {}

// Display player stats
void Player::displayStats()
{
    cout << "Player: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Mana: " << mana << endl;
    cout << "Attack Power: " << attackPower << endl;
    cout << "Inventory: ";
    if (inventory.empty())
    {
        cout << "Empty";
    }
    else
    {
        for (const auto &item : inventory)
        {
            cout << item << " ";
        }
    }
    cout << endl;
}

// Add an item to the inventory
void Player::addItem(const string &item)
{
    inventory.push_back(item);
    cout << item << " added to inventory." << endl;
}

// Use an item from the inventory
void Player::useItem(const string &item)
{
    auto it = find(inventory.begin(), inventory.end(), item);
    if (it != inventory.end())
    {
        inventory.erase(it);
        cout << "Used " << item << "." << endl;
    }
    else
    {
        cout << item << " not found in inventory." << endl;
    }
}
