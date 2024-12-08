#include "battleSystem.h"
#include "enemy.h"
#include "player.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


void BattleSystem::StartBattle() {
  int choice = 0;
  cout << "Battle Start!\n";

    while (player.health > 0 && enemy.enemyHealth > 0) {
      cout << "Your Stats:" << endl;
      player.displayStats();
      cout << endl;
      cout << "Enemy Stats:" << endl;
      enemy.displayEnemyStats();

      cout << "Choose an action: " << endl;
      cout << "1. Attack" << endl;
      cout << "2. Run Away (gain 10 health, gain 10 mana)" << endl;
      
      cin >> choice;
      while (choice != 1 && choice != 2)
      {
        cout << "Invalid Input, please enter only 1 or 2" << endl;
        cin.clear();
        cin >> choice;
      }
      if (choice == 1 && player.mana > 5) //Player attacks
      {
        cout << "You shot a fireball dealing " << player.attackPower << " damage to the enemy!" << endl;
        enemy.enemyHealth = enemy.enemyHealth - player.attackPower;
        player.mana = player.mana - 5;
        cout << endl;
      }
      else if (choice == 1 && player.mana < 5)
      {
        cout << "You are out of mana :(" << endl;
        cout << "You punch the enemy for 5 damage!" << endl;
        enemy.enemyHealth = enemy.enemyHealth - 5;
      }
      else if (choice == 2)
      {
        cout << "You ran away strategically, totally not because you're scared" << endl;
        cout << "You gained 10 health and 10 mana" << endl;
        player.health += 10;
        player.mana += 10;
      }

      //enemy turn
      cout << "Enemy attacks you for " << enemy.enemyDamage << " damage" << endl;
      player.health = player.health - enemy.enemyDamage;

      cout << "You regenerate 5 mana. Current Mana: " << player.mana << endl;
    }
      if (player.health <= 0) 
      {
        cout << "You have been defeated..." << endl;
      } 
      else if (enemy.enemyHealth <= 0) 
      {
        cout << "You defeated the enemy!" << endl;
      }
}