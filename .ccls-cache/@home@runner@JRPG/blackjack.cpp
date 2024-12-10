#include <iostream>
#include <string>
#include <ctime>
#include "blackjack.h"

using namespace std;

void BlackJack::startBlackJack(){ //blackjack starting with 2 cards
  int playerScore = 0;
  int enemyScore = 0;

  cout << "Time for some blackjack! " << endl;
  cout << "Your turn!" << endl;
  cout << endl;
  srand((unsigned)time(0)); //seeds random num generator
  
  while (playerScore <= 21){
    //newCard = false;
    //creates players cards
    playerCardOne = rand() % 13;
    playerCardOneSuit = rand() % 4;
    playerCardTwo = rand() % 13;
    playerCardTwoSuit = rand() % 4;

    //creates enemies cards
    enemyCardOne = rand() % 13;
    enemyCardOneSuit = rand() % 4;
    enemyCardTwo = rand() % 13;
    enemyCardTwoSuit = rand() % 4;
    
    //if dealt an ace, varible aces +1. If score >21 and aces = 1, and subtract 10 from score and subtract 1 from aces.
    if (cards[playerCardOne] == "Ace" && cards[playerCardTwo] == "Ace")
    {
      playerScore += 12;
    }
    else if (cards[playerCardOne] == "Ace" && playerCardTwo == 10)
    {
      cout << "WOW LUCKY 21! The Demon King Reveals his cards!" << endl;
      break;
    }
    else if (cards[playerCardTwo] == "Ace" && playerCardOne == 10)
    {
      cout << "WOW LUCKY 21! The Demon King Reveals his cards!" << endl;
      break;
    }
    else
    {
      playerScore += cardValue[playerCardOne];
      playerScore += cardValue[playerCardTwo];
    }
    
    cout << "Your first card is: " << cards[playerCardOne] << " of " << suit[playerCardOneSuit] << endl;
    cout << "Your second card is: " << cards[playerCardTwo] << " of " << suit[playerCardTwoSuit] << endl;
    cout << endl;
    cout << "Your total score is: " << playerScore << endl;
    cout << endl;

    cout << "Your enemies revealed card is " << cards[enemyCardOne] << " of " << suit[enemyCardTwoSuit] << endl;

    char hitOrStand = ' ';
    cout << "Type 'h' to hit or 's' to stand" << endl;
    cout << endl;
    
    cin >> hitOrStand;
    
    while (hitOrStand != 'h' && hitOrStand != 's') //checks for correct input
    {
      cout << "Invalid Input, enter 'h' for hit and 's' for stand " << endl;
      cout << endl;
      cin >> hitOrStand;
    }
    if (hitOrStand == 's')
    {
      cout << "You stand!" << " Your current score is " << playerScore << "!" << endl;
      cout << "The Demon King Reveals his cards!" << endl;
      break;
    }
    else if (hitOrStand == 'h')
    {
      cout << "You chose to hit!" << endl;
      playerCardOne = rand() % 13;
      playerCardOneSuit = rand() % 4;
      
      playerScore += cardValue[playerCardOne];
      cout << "Your current score: " << playerScore << endl;
      if (playerScore == 21)
      {
        cout << "WOW YOU HIT 21! The Demon King Reveals his cards!" << endl;
        break;
      }
      else if (playerScore > 21) 
      {
        cout << "YOU BUSTED! LOSER!" << endl;
        cout << "GAME OVER!" << endl;
        break;
      }
      else if (playerScore < 21)
      {
        cout << "Type 'h' to hit or 's' to stand" << endl;
        cout << endl;
        cin.clear();
        cin >> hitOrStand;
        
        while (hitOrStand != 'h' && hitOrStand != 's') //checks for correct input
          {
            cout << "Invalid Input, enter 'h' for hit and 's' for stand " << endl;
            cout << endl;
            cin >> hitOrStand;
          }
          if (hitOrStand == 's')
          {
            cout << "You stand!" << " Your current score is " << playerScore << "!" << endl;
            cout << "The Demon King Reveals his cards!" << endl;
            break;
          }
          else if (hitOrStand == 'h')
          {
            cout << "You chose to hit!" << endl;
            playerCardOne = rand() % 13;
            playerCardOneSuit = rand() % 4;

            playerScore += cardValue[playerCardOne];
            cout << "Your current score: " << playerScore << endl;
          }
            if (playerScore == 21)
            {
              cout << "WOW YOU HIT 21! The Demon King Reveals his cards!" << endl;
              break;
            }
            else if (playerScore > 21) 
            {
              cout << "YOU BUSTED! LOSER!" << endl;
              cout << "GAME OVER!" << endl;
              break;
            }
      }
    }
  }
}

}//end of players turn
 /* if (endTurn == true){
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

*/