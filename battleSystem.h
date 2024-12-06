#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include <iostream>
#include "enemy.h"
#include "player.h"

class BattleSystem{
public:
  BattleSystem(Player &player, Enemy &enemy)
: player(player), enemy(enemy){}

void StartBattle();
private: 
  Player &player;
  Enemy &enemy;

};

#endif