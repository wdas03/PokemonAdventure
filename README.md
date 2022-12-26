# PokemonAdventure
Runs random simulation of two pokemon fighting each other in SFML.

## Setup
Make sure sfml is installed:

    brew install sfml

## Run Program
From PokemonAdventure/PokemonAdventure, run:

    g++ -Wall -std=c++11 *.cpp -Iinclude -I/opt/homebrew/include -L/opt/homebrew/lib -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system -o game

Then:

    ./game
