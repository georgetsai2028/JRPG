#include "enemy.h"
#include <iostream>

using namespace std;

// enemyEasy constructor
EnemyEasy::EnemyEasy(int enemyHealthEasy, int enemyDamageOutputEasy)
    : enemyHealthEasy(enemyHealthEasy), enemyDamageOutputEasy(enemyDamageOutputEasy) {}


// shows enemy stats
void EnemyEasy::displayEnemyStats() {
  cout << "Health: " << enemyHealthEasy << endl;
  cout << "Attack Power: " << enemyDamageOutputEasy << endl;
}
void EnemyEasy::displayEnemyStats(){
    
}
int EnemyEasy::getEnemyHealthEasy();
int EnemyEasy::getEnemyDamageEasy();
int EnemyEasy::enemyTakeDamageEasy();
// return "easy", "normal", "hard", ""

// health attack power, type of enemy, health of enemy,
