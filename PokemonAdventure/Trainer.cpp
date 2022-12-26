#include "Trainer.h"

namespace TrainerWorld {
	Trainer::Trainer(string name, int level) : name(name), level(level) {}

	string Trainer::getName() {
		return name;
	}

	int Trainer::getLevel() {
		return level;
	}

	void Trainer::setLevel(int newLevel) {
		level = newLevel;
	}

	void Trainer::incrementLevel() {
		level += 1;
	}

	void Trainer::assignPokemon(Pokemon newPokemon) {
		pokemon.push_back(newPokemon);
	}

	Pokemon Trainer::chooseRandomPokemon() {
		int maxIndex = pokemon.size() - 1;
		srand(time(NULL));
		int index = rand() % maxIndex;
		return pokemon[index];
	}

	vector<Pokemon> Trainer::getPokemon() {
		return pokemon;
	}

	void Trainer::setBattlePokemon(Pokemon pokemon) {
		battlePokemon = pokemon;
	}

	Pokemon Trainer::getBattlePokemon() {
		return battlePokemon;
	}
}
