#include <iostream>

using namespace std;

class BaseCharacter 
{
public:
    int health;
    int mana;
    int attackPower;

    BaseCharacter() : health(100), mana(20), attackPower(20) {}
};