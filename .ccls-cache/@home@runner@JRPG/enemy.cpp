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
int EnemyEasy::getEnemyHealthEasy(){
    cout << "bruh"; 
}
int EnemyEasy::getEnemyDamageEasy(){
    cout << "bruh";
}
int EnemyEasy::enemyTakeDamageEasy(){
    cout << "bruh";
}
// return "easy", "normal", "hard", ""

// health attack power, type of enemy, health of enemy,
