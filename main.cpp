#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "storyline.h"
#include "player.h"
#include "enemy.h"
#include "battle.h"

using namespace std;
int main()
{
    displayStoryline();

    Player player("Hero", 100, 20, 20);

    // Example battle
    cout << "\n A wild Goblin appears!" << endl;
    Enemy goblin("Goblin", 50, 15, 0);
    battle(player, goblin);

    // Continue the game logic...
    cout << "\nCongratulations, you defeated the Goblin!" << endl;

    return 0;
    return 0;
}