#include "battleSystem.h"
#include "enemy.h"
#include "player.h"
#include "storyline.h"
#include "blackjack.h"
#include "blackjack2.h"
#include <iostream>
#include <string>
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

  Enemy orc(150, 40);
  orc.setDifficulty("hard");
  
  BattleSystem thirdBattle(player, orc);
  thirdBattle.StartBattle();
  player.levelUp();

  afterDefeatingTheOrc();
  
  BlackJack2 BJGame2; //Blackjack but only starting with One Card
  BJGame2.startBlackJack2();
  
  return 0;
}