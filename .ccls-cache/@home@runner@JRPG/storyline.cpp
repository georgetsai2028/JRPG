#include "storyline.h"
#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

void typewriterEffect(const string &text) {
  for (char c : text) {
    cout << c;
    cout.flush();
    this_thread::sleep_for(chrono::milliseconds(30));
  }
  cout << endl;
}

void displayStoryline() {
  typewriterEffect("You are an average salaryman in Japan, walking home late after celebration party for your promotion");
  typewriterEffect("After all that partying, you wander the streets drunk exausted. As your trying your best to make your way back home, you cross the street.");
  typewriterEffect(
      "You look to your left, and see a blinding flash of light. -BAM-, truck-kun smacks you right into the pavement at 100 miles an hour");
  typewriterEffect("Looking down to the ground, your stunned to what has happened. Surprisingly, you don't feel any sort of pain, getting up and brushing it off like nothing happen");
  typewriterEffect("For some reason the ground looks 3 feet closer than it usually does. You look at your hands and feet, thinking why do they look smaller than normal");
  typewriterEffect(
      "You look up and your not even in your country anymore. Your in a beautiful grassland");
  typewriterEffect(
      "A lady tells you to come back home, that dinner is ready. She speaks in a foreign language but for some reason you understand it.");
  typewriterEffect(
      "Turns out you have been transported to a random world and you are now a 10 year old child. The world is a lot different than your old world");
  typewriterEffect("Everyone uses magic, and are sent to a magic academy when you turn and leave when you graduate.");
  typewriterEffect("8 years later: You come home excited to see your family after graduating magic academy.");
  typewriterEffect("You open the door and see some blood on the floor, you follow the trail to the dining room. You freeze in horror as you see your family dead on the floor");
}

void firstBattle() {
  typewriterEffect(
      "You turn around and see the goblin that killed your family");
  typewriterEffect("Battle sequences start");
}