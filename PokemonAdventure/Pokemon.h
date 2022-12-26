#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

namespace PokemonWorld {
	class Pokemon {
	public:
		Pokemon();
		Pokemon(string name, int health, int normalAttack, int specialAttack, float dodgeProb);
		string getName();
		int getHealth();
		void setHealth(int newHealth);
		int getNormalAttack();
		int getSpecialAttack();
		int getAttackCount();
		void incrementAttackCount();
		void loseHealth(int healthLost);
		float getDodgeProb();
		bool willDodge();
		void attack(Pokemon &opponent);
		bool isAlive();


	private:
		string name;
		int health;
		int normalAttack;
		int specialAttack;
		int attackCount = 0;
		float dodgeProb;
	};
}

#endif // !POKEMON_H

