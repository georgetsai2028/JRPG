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

  return 0;
}