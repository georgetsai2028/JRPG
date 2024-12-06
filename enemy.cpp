#include "enemy.h"
#include <iostream>

using namespace std;

Enemy::Enemy(int enemyHealth, int enemyDamage) // basic enemy constructor
    : enemyHealth(enemyHealth), enemyDamage(enemyDamage) {}

int Enemy::EnemyEasy() {
  Enemy::sethpEasy(enemyHealth);
  { enemyHealth = 30; }
  Enemy::setdmgEasy(enemyDamage);
  { enemyDamage = 5; }
  Enemy::gethpEasy();
  { return enemyHealth; }
  Enemy::getdmgEasy();
  { return enemyDamage; }
} // Easy enemy stats setup

int Enemy::EnemyNormal() {
  Enemy::sethpNormal(enemyHealth);
  { enemyHealth = 100; }
  Enemy::setdmgNormal(enemyDamage);
  { enemyDamage = 15; }
  Enemy::gethpNormal();
  { return enemyHealth; }
  Enemy::getdmgNormal();
  { return enemyDamage; }
} // Normal enemy stats setup

int Enemy::EnemyHard() {
  Enemy::sethpHard(enemyHealth);
  { enemyHealth = 200; }
  Enemy::setdmgHard(enemyDamage);
  { enemyDamage = 20; }
  Enemy::gethpHard();
  { return enemyHealth; }
  Enemy::getdmgHard();
  { return enemyDamage; }
} // Hard enemy stats setup

void Enemy::displayEnemyStats() {
  cout << "Health: " << enemyHealth << endl;
  cout << "Attack Power: " << enemyDamage << endl;
} // Shows enemy stats

int Enemy::enemyTakeDamage(int damage) { // enemy takes damage
  enemyHealth -= damage;
  return enemyHealth;
} // Enemy takes damage
