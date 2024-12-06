#include "enemy.h"
#include <iostream>

using namespace std;

Enemy::Enemy(int enemyHealth, int enemyDamage) // basic enemy constructor
    : enemyHealth(enemyHealth), enemyDamage(enemyDamage) {}

// easy enemy stats
int Enemy::EnemyEasy() {
  Enemy::enemyHealth = 30;
  Enemy::enemyDamage = 5;
}

// normal enemy stats
int Enemy::EnemyNormal() {
  Enemy::enemyHealth = 100;
  Enemy::enemyDamage = 15;
}

// hard enemy stats
int Enemy::EnemyHard() {
  Enemy::enemyHealth = 200;
  Enemy::enemyDamage = 30;
}
void Enemy::displayEnemyStats() {
  cout << "Health: " << enemyHealth << endl;
  cout << "Attack Power: " << enemyDamage << endl;
} // Shows enemy stats

int Enemy::enemyTakeDamage(int damage) { // enemy takes damage
  enemyHealth -= damage;
  return enemyHealth;
} // Enemy takes damage
