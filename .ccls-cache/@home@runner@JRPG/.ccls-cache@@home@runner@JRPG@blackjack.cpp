#include <iostream>
#include <string>
#include <ctime>
#include "blackjack.h"

using namespace std;

void BlackJack::startBlackJack(){
  int playerScore;
  int enemyScore;
  
  cout << "Your turn!" << endl;
  srand((unsigned)time(0));
  while (playerScore <= 21){
    cout << "hi" << endl;
    newCard = false;
    //player start
    playerCardOne = rand()%13;
    playerCardOneSuit = rand()%4;
    //if dealt an ace, varible aces +1. If score >21 and aces = 1, and subtract 10 from score and subtract 1 from aces.
    playerScore = playerScore + cardValue[playerCardOne];
    if (cards[playerCardOne] == "Ace"){
      numOfAces++;
      playerScore += 11;
    }
    while (playerScore > 21 && numOfAces > 0){
      playerScore -= 10;
      numOfAces--;
    }
    cout << "Your card is: " << cards[playerCardOne] << " of " << suit[playerCardOneSuit] << endl;
    cout << "Your score is: " << playerScore << endl;

    while(playerScore < 21 && endTurn == false && newCard == false){
      hitOrStand = ' ';
      cout << "Type 'h' to hit or 's' to stand" << endl;
      cin >> hitOrStand;
      if (hitOrStand == 'h' || hitOrStand == 'H' ){
        newCard = true;
      }
      if (hitOrStand == 's' || hitOrStand == 'S'){
        endTurn = true;
      }
    }
    //need to do: remove card2. program so player has only one card varible that is reassigned to a new card once this if statement procs. I think ill need to use a break to continue the loop. 
    //the logic, player is dealt one card, can hit or stand, if hit, loop back to start to deal one more card. If stand, start dealers turn. If bust, game over.

}//end of players turn
  if (endTurn == true){
    enemyTurn = true;
    cout << "\nEnemy's Turn" << endl;
    enemyCardOne = rand()%13;
    enemyCardOneSuit = rand()%4;
    cout << "The enemy's card is: " << cards[enemyCardOne] << " of " << suit[enemyCardOneSuit] << endl;
    enemyScore = enemyScore + cardValue[enemyCardOne];
    cout << "Enemy's score is: " << playerScore << endl;
    while (enemyScore <= 17){
      cout << "The enemy hits" << endl;
      enemyCardOne = rand()%13;
      enemyCardOneSuit = rand()%4;
      cout << "The enemy's card is: " << cards[enemyCardOne] << " of " << suit[enemyCardOneSuit] << endl;
      enemyScore = enemyScore + cardValue[enemyCardOne];
      cout << "Enemy's score is: " << playerScore << endl;
      }
  }
  //scoring
  if (playerScore > 21){
    cout << "You bust. You lose." << endl;
    winner = "Enemy";
  }
  else if (enemyScore > 21){
    cout << "Enemy busts. You win!" << endl;
    winner = "Player";
  }
  else if (enemyScore == playerScore){
    cout << "Tie game." << endl;
    winner ="Tie Game";
  }
  else if (enemyScore > playerScore){
    cout << "Enemy wins." << endl;
    winner ="Enemy";
  }
  else if (playerScore > enemyScore){
    cout << "You win!" << endl;
    winner ="Player";
  }
}

