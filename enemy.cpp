#include "enemy.h"
#include <iostream>

using namespace std;

Enemy::Enemy(int enemyHealth, int enemyDamage) // basic enemy constructor
    : enemyHealth(enemyHealth), enemyDamage(enemyDamage) {}

void Enemy::setDifficulty(const string &difficulty) {
  if (difficulty == "easy") {
    enemyHealth = 30;
    enemyDamage = 5;
  } else if (difficulty == "normal") {
    enemyHealth = 100;
    enemyDamage = 15;
  } else if (difficulty == "hard") {
    enemyHealth = 200;
    enemyDamage = 30;
  }
  void Enemy::displayEnemyStats() {
    cout << "Health: " << enemyHealth << endl;
    cout << "Attack Power: " << enemyDamage << endl;
  } // Shows enemy stats

  int Enemy::enemyTakeDamage(int damage) { // enemy takes damage
    enemyHealth -= damage;
    return enemyHealth;
  } // Enemy takes damage
