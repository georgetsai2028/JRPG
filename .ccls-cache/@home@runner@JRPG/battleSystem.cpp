#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "player.h"
#include "enemy.h"
#include "inventory.h"

using namespace std;

void battle() {
    Player player;
    Enemy enemy;
    Inventory inventory;

    cout << "Battle Start!\n";

    if (enemy.type == "easy") {
        while (player.health > 0 && enemy.health > 0) {
            cout << "\nPlayer Health: " << player.health << ", Mana: " << player.mana << "/" << player.maxMana;
            cout << "\nEnemy Health: " << enemy.health << "\n";

            cout << "Choose an action:\n1. Attack\n2. Run Away\n";
            int choice;
            cin >> choice;

            if (choice == 1) { 
                vector<string> playerItems = inventory.getItems();
                bool hasAK = false, hasStaff = false;

                for (const auto& item : playerItems) {
                    if (item == "AK47") hasAK = true;
                    if (item == "Staff") hasStaff = true;
                }

                if (hasStaff) {
                    string move;
                    cout << "Choose spell:\n 1.basic (10% chance to miss)\n 2.fireball(15% chance to miss)\n 3.meele\n";
                    cin >> move;

                    if (move == "1" && player.mana >= 10) {
                        if (rand() % 100 < 10) {
                            cout << "You missed your magical attack!\n";
                        } else {
                            cout << "You cast a spell, dealing " << player.attackPower + 10 << " damage!\n";
                            enemy.health -= (player.attackPower + 10);
                            player.mana -= 10;
                        }
                    } else if (move == "2" && player.mana >= 15) {
                        if (rand() % 100 < 15) {
                            cout << "You missed your magical attack!\n";
                        } else {
                            cout << "You cast fireball, dealing " << player.attackPower + 15 << " damage!\n";
                            enemy.health -= (player.attackPower + 15);
                            player.mana -= 15;
                        }
                    } 
                    else if(move== "3")
                    {
                        cout << "You attack the enemy for " << player.attackPower << " damage!\n";
                        enemy.health -= player.attackPower;
                    }
                    else {
                        cout << "Not enough mana! Defaulting to physical attack.\n";
                    }
                } else if (hasAK) {
                    if (rand() % 100 < 5) {
                        cout << "You missed your shot!\n";
                    } else {
                        cout << "You shoot the enemy, killing them instantly!\n";
                        enemy.health = 0;
                    }
                } else {
                    cout << "You attack the enemy for " << player.attackPower << " damage!\n";
                    enemy.health -= player.attackPower;
                }
            } else if (choice == 2) {
                cout << "You attempt to run away...\n";
                if (rand() % 4 == 0) {
                    cout << "You successfully ran away!\n";
                    return;
                } else {
                   cout << "Failed to run away! The enemy retaliates and attacks you for " << enemy.attackPower << " damage!\n";
                   player.health -= enemy.attackPower;

                }
            } else {
                cout << "Invalid choice. Try again.\n";
            }

            if (enemy.health > 0) {
                if (rand() % 100 < 15) {
                    cout << "The enemy missed its attack!\n";
                } else {
                    cout << "The enemy attacks you for " << enemy.attackPower << " damage!\n";
                    player.health -= enemy.attackPower;
                }
            }

           player.mana = min(player.mana + 5, player.maxMana);
           cout << "You regenerate 5 mana. Current Mana: " << player.mana << "\n";

            if (player.health <= 0) {
                cout << "\nYou have been defeated...\n";
            } else if (enemy.health <= 0) {
                cout << "\nYou defeated the enemy!\n";
            }
        }
    }
}

int main() {
    srand(static_cast<unsigned>(time(0)));
    battle();
    return 0;
}