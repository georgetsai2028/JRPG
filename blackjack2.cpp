#include <iostream>
#include <string>
#include <ctime>
#include "blackjack2.h"
#include "storyline.h"
using namespace std;

void BlackJack2::startBlackJack2(){ //blackjack starting with one card
  cout << "Your turn!" << endl;
  srand((unsigned)time(0));

  // Player's first card draw
  playerCardOne = rand() % 13;
  playerCardOneSuit = rand() % 4;
  playerScore = playerScore + cardValue[playerCardOne];
  if (cards[playerCardOne] == "Ace") {
      numOfAces++;
      playerScore += 11;
  }
  while (playerScore > 21 && numOfAces > 0) {
      playerScore -= 10;
      numOfAces--;
  }
  cout << "Your card is: " << cards[playerCardOne] << " of " << suit[playerCardOneSuit] << endl;
  cout << "Your score is: " << playerScore << endl;

  // Player's turn to hit or stand
  while (playerScore <= 21 && endTurn) {
      hitOrStand = ' ';
      cout << "Type 'h' to hit or 's' to stand" << endl;
      cin >> hitOrStand;
      if (hitOrStand == 'h' || hitOrStand == 'H') {
          // Draw a new card if the player hits
          playerCardOne = rand() % 13;
          playerCardOneSuit = rand() % 4;
          playerScore += cardValue[playerCardOne];
          if (cards[playerCardOne] == "Ace") {
              numOfAces++;
              playerScore += 11;
          }
          while (playerScore > 21 && numOfAces > 0) {
              playerScore -= 10;
              numOfAces--;
          }
          cout << "Your card is: " << cards[playerCardOne] << " of " << suit[playerCardOneSuit] << endl;
          cout << "Your score is: " << playerScore << endl;
      } else if (hitOrStand == 's' || hitOrStand == 'S') {
          // End the player's turn if they choose to stand
          endTurn = false;
      }

      // If player score exceeds 21, they bust
      if (playerScore > 21) {
          playerBust = true;
          endTurn = false;  // End the turn immediately if the player busts
      }
  }

  if (playerBust) {
      cout << "You bust. You lose." << endl;
  } else {
      cout << "\nEnemy's Turn" << endl;
      enemyCardOne = rand() % 13;
      enemyCardOneSuit = rand() % 4;
      cout << "The enemy's card is: " << cards[enemyCardOne] << " of " << suit[enemyCardOneSuit] << endl;
      enemyScore = enemyScore + cardValue[enemyCardOne];
      cout << "Enemy's score is: " << enemyScore << endl;

      while (enemyScore <= 17) {
          cout << "\nThe enemy hits" << endl;
          enemyCardOne = rand() % 13;
          enemyCardOneSuit = rand() % 4;
          cout << "The enemy's card is: " << cards[enemyCardOne] << " of " << suit[enemyCardOneSuit] << endl;
          enemyScore = enemyScore + cardValue[enemyCardOne];
          cout << "Enemy's score is: " << enemyScore << endl;
      }
  }

  // Scoring
  cout << "Final Scores: You: " << playerScore << " | Enemy: " << enemyScore << endl;

  if (playerBust) {
      cout << "You bust. You lose." << endl;
      cout << "Game Over! You're stuck forever!" << endl;
  } 
  else if (enemyScore > 21) {
      cout << "Demon King busts. You win!" << endl;
      finale();
  }
  else if (enemyScore == playerScore) {
      cout << "Tie game." << endl;
      enemyScore = 0;
      playerScore = 0;
      startBlackJack2();
  } 
  else if (enemyScore > playerScore)
  {
      cout << "Demon King wins." << endl;
      cout << "Game Over! You're stuck forever!" << endl;
  } 
  else 
  {
      cout << "You win!" << endl;
      playerWin = true;
      finale();
  }
}