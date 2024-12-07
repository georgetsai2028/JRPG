#include "battleSystem.h"
#include "enemy.h"
#include "player.h"
#include "storyline.h"
#include <algorithm>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>

using namespace std;
int main() {
  displayStorylinePT1();
  
  displayStorylinePT2();
  
  displayStorylinePT3();
  
  firstBattle();

  Player player;
  Enemy goblin(40, 10);
  BattleSystem BattleSystem(Player player, Enemy enemy);
  
  goblin.setDifficulty("easy");
  BattleSystem(player, goblin);

  BattleSystem.StartBattle();

  Enemy knight(100, 20);
  
  knight.setDifficulty("normal");
  BattleSystem(player, knight);

  BattleSystem.StartBattle();

  return 0;
}