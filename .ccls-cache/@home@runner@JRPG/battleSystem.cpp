#include "baseCharacter.h"
#include "baseEnemy.h"
#include "invSys.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void battle() {
  BaseCharacter player;
  BaseEnemy enemy;
  Inventory inventory;

  cout << "Battle Start!\n";

  while (player.health > 0 && enemy.health > 0) {
    cout << "\nPlayer Health: " << player.health << ", Mana: " << player.mana
         << "/" << player.maxMana;
    cout << "\nEnemy Health: " << enemy.health << "\n";

    cout << "Choose an action:\n";
    cout << "1. Attack\n2. Inventory\n3. Run Away\n";
    int choice;
    cin >> choice;

    if (choice == 1) {
      bool hasSword = false, hasStaff = false;

      vector<string> playerItems = inventory.getItems();
      for (const auto &item : playerItems) {
        if (item == "Sword")
          hasSword = true;
        if (item == "Staff")
          hasStaff = true;
      }

      if (hasSword) {

        if (rand() % 100 < 15) {
          cout << "You missed your physical attack with the sword!\n";
        } else {
          cout << "You attack the enemy with your sword for "
               << player.attackPower << " damage!\n";
          enemy.health -= player.attackPower;
        }
      } else if (hasStaff) {

        if (player.mana >= 10) {
          if (rand() % 100 < 15) {
            cout << "You missed your magical attack!\n";
          } else {
            cout << "You cast a spell with your staff, dealing "
                 << player.attackPower + 10 << " damage!\n";
            enemy.health -=
                (player.attackPower + 10); // Magical attacks deal extra damage
            player.mana -= 10;
          }
        } else {
          cout << "Not enough mana to perform a magical attack. You default to "
                  "a physical attack.\n";
          if (rand() % 100 < 15) {
            cout << "You missed your physical attack!\n";
          } else {
            cout << "You attack the enemy for " << player.attackPower
                 << " damage!\n";
            enemy.health -= player.attackPower;
          }
        }
      } else {

        if (rand() % 100 < 15) {
          cout << "You missed your physical attack!\n";
        } else {
          cout << "You attack the enemy with a basic physical attack for "
               << player.attackPower << " damage!\n";
          enemy.health -= player.attackPower;
        }
      }
    } else if (choice == 2) { // Inventory
      inventory.displayInventory();
      cout << "Select an item to use (Enter the number): ";
      int itemChoice;
      cin >> itemChoice;
      inventory.useItem(itemChoice - 1);
    } else if (choice == 3) { // Run Away
      cout << "You attempt to run away...\n";
      if (rand() % 4 == 0) {
        cout << "You successfully ran away!\n";
        return;
      } else {
        cout << "Failed to run away! The enemy attacks you!\n";
        player.health -= enemy.attackPower;
      }
    } else {
      cout << "Invalid choice. Try again.\n";
    }

    if (enemy.health > 0) {
      if (rand() % 100 < 15) {
        cout << "The enemy missed its attack!\n";
      } else {
        cout << "The enemy attacks you for " << enemy.attackPower
             << " damage!\n";
        player.health -= enemy.attackPower;
      }
    }

    player.mana += 5;
    cout << "You regenerate 5 mana. Current Mana: " << player.mana << "\n";
  }

  if (player.health <= 0) {
    cout << "\nYou have been defeated...\n";
  } else if (enemy.health <= 0) {
    cout << "\nYou defeated the enemy!\n";
  }
}

int main() {
  srand(static_cast<unsigned>(time(0)));
  battle();

  return 0;
}
