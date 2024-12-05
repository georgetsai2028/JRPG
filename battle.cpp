#include "battle.h"
#include <iostream>

using namespace std; 

// Function to execute a battle sequence
void battle(Player &player, Enemy &enemy)
{
    cout << "Battle Start!" << endl;

    while (player.health > 0 && enemy.health > 0)
    {
        // Player's turn
        cout << "\nPlayer's Turn!";
    }
}