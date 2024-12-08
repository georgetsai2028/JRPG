#include "battleSystem.h"
#include "enemy.h"
#include "player.h"
#include "storyline.h"
#include <iostream>
using namespace std;

int main() {
  displayStorylinePT1();
  displayStorylinePT2();
  displayStorylinePT3();
  firstBattle();

  Player player;

  Enemy goblin(40, 10);
  goblin.setDifficulty("easy");

  // Create the first BattleSystem object
  BattleSystem firstBattle(player, goblin);
  firstBattle.StartBattle();

  Enemy knight(60, 15);
  knight.setDifficulty("normal");

  // Create the second BattleSystem object
  BattleSystem secondBattle(player, knight);
  secondBattle.StartBattle();

  return 0;
}