#include <iostream>
#include <cstdlib>
#include <ctime>
#include "baseCharacter.h"
#include "baseEnemy.h"
#include "invSys.h"

using namespace std;

void battle() {
    BaseCharacter player;
    BaseEnemy enemy;
    Inventory inventory;

    cout << "Battle Start!\n";

    while (player.health > 0 && enemy.health > 0) {
        cout << "\nPlayer Health: " << player.health << ", Mana: " << player.mana;
        cout << "\nEnemy Health: " << enemy.health << "\n";

        cout << "Choose an action:\n";
        cout << "1. Attack\n2. Inventory\n3. Run Away\n";
        int choice;
        cin >> choice;

        if (choice == 1) 
        { // Attack
            if (rand() % 100 < 15) 
            {
                cout << "You missed your attack!\n";
            } 
            else 
            {
                cout << "You attack the enemy for " << player.attackPower << " damage!\n";
                enemy.health -= player.attackPower;
            }

            if (enemy.health > 0) 
            {
                if (rand() % 100 < 15) 
                {
                    cout << "The enemy missed its attack!\n";
                } 
                else 
                {
                    cout << "The enemy attacks you for " << enemy.attackPower << " damage!\n";
                    player.health -= enemy.attackPower;
                }
            }
        } 
        else if (choice == 2) 
        { // Inventory
            inventory.displayInventory();
            cout << "Select an item to use (Enter the number): ";
            int itemChoice;
            cin >> itemChoice;
            inventory.useItem(itemChoice - 1);
        } 
        else if (choice == 3) 
        { // Run Away
            cout << "You attempt to run away...\n";
            if (rand() % 4 == 0) { 
                cout << "You successfully ran away!\n";
                return;
            } 
            else 
            {
                cout << "Failed to run away! The enemy attacks you!\n";
                player.health -= enemy.attackPower;
            }
        } 
        else 
        {
            cout << "Invalid choice. Try again.\n";
        }
    }

    if (player.health <= 0) 
    {
        cout << "\nYou have been defeated...\n";
    } 
    else if (enemy.health <= 0) 
    {
        cout << "\nYou defeated the enemy!\n";
    }
}

int main() 
{
    srand(static_cast<unsigned>(time(0))); 

    battle();

    return 0;
}
