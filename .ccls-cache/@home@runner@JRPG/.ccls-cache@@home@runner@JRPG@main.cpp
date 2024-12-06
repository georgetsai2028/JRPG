#include "battle.h"
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

  string playerName;
  getline(cin, playerName);
  
  Player player(playerName, 100, 20, 20);

  cout << "A wild Goblin appears!" << endl;
  Enemy goblin("Goblin", 50, 15, 0);
  battle(player, goblin);

  cout << "Congratulations, you defeated the Goblin!" << endl;

  return 0;
}