#include "storyline.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


vector<string> getStoryline(){

vector<string> storyline = { "You are an average salaryman in Japan, walking home late after celebration party for your promotion", 
    "After all that partying, you wander the streets drunk and exausted. As your trying your best to make your way back home, you cross the street.",
    "You look to your left, and see a blinding flash of light. -BAM-, truck-kun smacks you right into the pavement at 100 miles an hour",
    "Looking down to the ground, your stunned to what has happened. Surprisingly, you don't feel any sort of pain, getting up and brushing it off like nothing happen",
    "For some reason the ground looks 3 feet closer than it usually does. You look at your hands and feet, thinking 'why do they look smaller than normal'.",
    "You look up and your not even in your country anymore. Your in a beautiful grassland and you hear someone shouting 'Kael, Kael!' ",
    "A lady tells you to come back home, that dinner is ready. She speaks in a foreign language but for some reason you understand it.",
    "Turns out you have been transported to a random world and you are now a 10 year old child. The world is a lot different than your old world",
    "Everyone uses magic, and are sent to a magic academy when you turn and leave when you graduate.",
    "8 years later: You come home excited to see your family after graduating magic academy.",
    "You open the door and see some blood on the floor, you follow the trail to the dining room. You freeze in horror as you see your family dead on the floor"};
    return storyline; //storyline summary
}
cout << storyline[0] << endl;