#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H
#include <iostream>
#include "enemy.h"
#include "player.h"

class BattleSystem{
private:
  Player& player;
  Enemy& enemy;

public:
  BattleSystemm(Player &player, Enemy &enemy)

  void startBattle(int difficulty);

}