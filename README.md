# JRPG Adventure Game

## Introduction

Welcome to our JRPG (Japanese Role-Playing Game) Adventure Game! This project is a turn-based combat RPG where players battle enemies, progress through a story, and manage their character's stats and abilities. Designed and implemented in C++ as a final project, the game emphasizes modular programming, file handling, and dynamic gameplay mechanics.

## Features

Turn-Based Combat: Engage in strategic battles against various enemies.

Black Jack Card Game Finale: Last battle is a unique one card black jack system.

Dynamic Storyline: Progress through an engaging narrative with multiple parts.

Character Management: Track and manage health, mana, and attack power.

Difficulty Settings: Enemies have varying difficulties (Easy, Normal, Hard).

Object-Oriented Design: Modular code with classes for Player, Enemy, and Battle System.

## Controls

Use the keyboard to navigate menus and make choices.

### Combat Choices:

1: Attack the enemy.

2: Use a special skill or action (e.g., Run Away).

Example Combat Flow

View player and enemy stats.

Choose actions to defeat enemies.

Win battles to progress through the story.

## How to Run

Ensure you have a C++ compiler installed (e.g., GCC or Clang).

Clone or download the game’s source code.

Compile the project using the following command in the terminal/command prompt:

### g++ -o jrpg main.cpp battleSystem.cpp enemy.cpp player.cpp blackjack2.cpp storyline.cpp

Run the compiled program:

./jrpg

## File Structure

main.cpp: Entry point of the program, manages game flow.

player.h and player.cpp: Player class for character stats and actions.

enemy.h and enemy.cpp: Enemy class for enemy stats and actions.

battleSystem.h and battleSystem.cpp: Handles turn-based combat.

storyline.h and storyline.cpp: Displays the game’s narrative.

blackjack2.h and blackjack2.cpp: One card black jack game system

## Development Team

### Team Leader: George Tsai

### Programmers: George Tsai, Nota Juneau, Jared Sarabia, Mark Vincent Lao

### Story Writers: George Tsai, Nota Juneau, Jared Sarabia, Mark Vincent Lao

Thank you for playing and exploring our JRPG Adventure Game! Feel free to provide feedback or report bugs
