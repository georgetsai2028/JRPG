#include "storyline.h"
#include <chrono>
#include <iostream>
#include <thread>
#include <sstream>

using namespace std;

void displayStorylinePT1() {
  cout << "You are an average salaryman in Japan, walking home late after celebration party for your promotion." << endl;
  cout << "After all that partying, you wander the streets drunk and exhausted. As you're trying your best to make your way back home, you cross the street." << endl;
  cout << "You look to your left, and see a blinding flash of light. -BAM-, truck-kun smacks you right into the pavement at 100 miles an hour." << endl;
  cout << endl;
}

void displayStorylinePT2() {
  cout << "Looking down to the ground, you're stunned at what has happened. Surprisingly, you don't feel any sort of pain, getting up and brushing it off like nothing happened." << endl;
  cout << "For some reason, the ground looks 3 feet closer than it usually does. You look at your hands and feet, thinking why they look smaller than normal." << endl;
  cout << "You look up and you're not even in your country anymore. You're in a beautiful grassland." << endl;
  cout << "A lady tells you to come back home, that dinner is ready. She speaks in a foreign language, but for some reason, you understand it." << endl;
  cout << endl;
}

void displayStorylinePT3() {
  cout << "Turns out you have been transported to a random world and you are now a 10-year-old child. The world is a lot different than your old world." << endl;
  cout << "Everyone uses magic, and are sent to a magic academy when you turn 10 and leave when you graduate." << endl;
  cout << "8 years later: You come home excited to see your family after graduating magic academy." << endl;
  cout << "You open the door and see some blood on the floor. You follow the trail to the dining room. You freeze in horror as you see your family dead on the floor." << endl;
  cout << endl;
}

void firstBattle() {
  cout << "You turn around and see the goblin that killed your family." << endl;
  cout << "Battle sequence starts." << endl;
  cout << endl;
}
void stormingToTheDemonKingsCastle() {
  cout << endl;
  cout << "You feel enraged and don't know what to do" << endl;
  cout << "Announcement: Emergency! Emergency! The Demon King has invaded and the King has been slain!" << endl;
  cout << "You rush take your horse and rush to the Demon King's Castle" << endl;
  cout << "You arrive and for some reason no one is there" << endl;
  cout << endl;
}

void secondBattle() {
  cout << "A weird veil is covered in the entrance and you rush in looking for the Demon King" << endl;
  cout << "Clang! Clang!, you sense something to the right and dodge towards the left" << endl;
  cout << "Foosh!! You seen the tip of a sword and a knight weilding it!" << endl;
  cout << "No time to think!" << endl;
  cout << endl;
}

void afterDefeatingTheKnight(){
  cout << "You take the knights sword!" << endl;
  cout << "Attack + 25" << endl;
  cout << "Theres two dark long corridors, do you want to go left or right?" << endl;
  cout << "You hear screaming and run into the right corridor" << endl;
  cout << "A fellow student is about to get eaten by a giant orc" << endl;
  cout << "You throw the sword and it bounces off the giant orc" << endl;
  cout << "He drops the fellow student and runs towards you!" << endl;
  cout << "RUN!!! HE'S TOO STRONG - yells fellow student" << endl;
  cout << endl;
}

void afterDefeatingTheOrc() {
  cout << "You run to help the student and you're unable to move" << endl;
  cout << "Everything goes dark and you are now seated at a card table" << endl;
  cout << "In front of you is the Demon King!" << endl;
  cout << "Demon King: The game is simple, win and I'll let you go. Lose and you're trapped inside these cards forever" << endl;
  cout << "You have no choice but to play blackjack" << endl;
  cout << endl;
}

void finale()
{
  cout << endl;
  cout << "Everything goes bright and the Demon King turns into the real King!" << endl;
  cout << "CONGRATULATIONS! This was your final test in order to graduate the magic academy!" << endl;
  cout << "Now you are a fully capable mage, worthy of this staff!" << endl;
  cout << "You receive the staff that signals you have graduated the magic academy!" << endl;
  cout << "CONGRATULATIONS ON BEATING THIS GAME!" << endl;
}