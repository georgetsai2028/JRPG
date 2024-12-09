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
  // creates the first battle with goblin set to easy mode
  Enemy goblin(40, 10);
  goblin.setDifficulty("easy");

  BattleSystem firstBattle(player, goblin);
  firstBattle.StartBattle();
  player.levelUp();
  player.displayStats();

  //storyline after fight
  stormingToTheDemonKingsCastle();
  secondBattle();

  //creates second fight with knight
  Enemy knight(80, 20);
  knight.setDifficulty("normal");

  BattleSystem secondBattle(player, knight);
  secondBattle.StartBattle();
  player.levelUp();
  
  //storyline after defeating the knight
  player.attackPower += 25;
  afterDefeatingTheKnight();
  

  return 0;
}