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
  displayStoryline();

  firstBattle();

  Player player;
  Enemy goblin(40, 10);
  
  goblin.setDifficulty("easy");
  BattleSystem BattleSystem(player, enemy);

  BattleSystem.StartBattle();

  return 0;
}