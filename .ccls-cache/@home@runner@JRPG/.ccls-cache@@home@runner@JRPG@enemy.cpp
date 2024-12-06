#include "enemy.h"
#include <iostream>

using namespace std;

Enemy::Enemy(int enemyHealth, int enemyDamage) // basic enemy constructor
    : enemyHealth(enemyHealth), enemyDamage(enemyDamage) {}

//easy enemy stats
int Enemy::EnemyEasy() {
  Enemy::enemyHealth = 30;
  Enemy::enemyDamage = 5;

} 

//normal enemy stats
int Enemy::EnemyNormal() {
  Enemy::enemyHealth = 100;
  Enemy::enemyDamage= 15; 
  
} 

//hard enemy stats
int Enemy::EnemyHard() {
  Enemy::enemyHealth = 200;
  Enemy::enemyDamage = 30;
} 

void Enemy::displayEnemyStats() {
  cout << "Health: " << enemyHealth << endl;
  cout << "Attack: " << enemyDamage << endl;
} // Shows enemy stats

//how enemy takes damage
int Enemy::enemyTakeDamage(int damage) { 
  enemyHealth -= damage;
  return enemyHealth;
} 

int Enemy::attack() const
{
  return enemyDamage;
}