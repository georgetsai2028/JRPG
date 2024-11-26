#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "Enemy.h"
using namespace std;

int Enemy::enemyTakeDamage(enemyHealthValue){
    //call weapon selected, if type do x damage
    dealtDamage -= enemyHealthValue;
    return dealthDamage;
}
bool Enemy::enemyAttackToHit(){
    srand(time(0))
    int enemyAttackToHitRandom;
    enemyAttackToHitRandom = rand();
    if (enemyAttackToHitRandom%101 >= 15){//this is where we would do status effects if we get that far
        return true;
    }
    else{
        return false;
    }
}