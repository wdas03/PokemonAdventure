#ifndef TRAINER_H
#define TRAINER_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Pokemon.h"

using namespace std;
using namespace PokemonWorld;

namespace TrainerWorld {
	class Trainer {
	public:
		Trainer(string name, int level);
		string getName();
		int getLevel();
		void setLevel(int newLevel);
		void incrementLevel();
		void assignPokemon(Pokemon newPokemon);
		vector<Pokemon> getPokemon();
		Pokemon chooseRandomPokemon();
		void setBattlePokemon(Pokemon pokemon);
		Pokemon getBattlePokemon();

	private:
		string name;
		int level;
		vector<Pokemon> pokemon;
		Pokemon battlePokemon;
	};
}

#endif
