#include "Pokemon.h"
#include "Trainer.h"

using namespace std;
using namespace PokemonWorld;
using namespace TrainerWorld;

void battle(Trainer trainer1, Trainer trainer2);



int main() {
	Pokemon bulb("Bulbasaur", 600, 20, 50, 0.2);
	Pokemon pikachu("Pikachu", 500, 20, 75, 0.7);
	Pokemon snorlax("Snorlax", 1000, 40, 150, 0.3);
	Pokemon jigglypuff("Jigglypuff", 400, 10, 45, 0.6);
	Pokemon charmander("Charmander", 500, 14, 45, 0.6);
	Pokemon vaporeon("Vaporeon", 700, 15, 90, 0.99);
	Pokemon flareon("Flareon", 600, 16, 75, 0.65);
	Pokemon jolteon("Jolteon", 650, 14, 70, 0.7);

	Trainer trainer1("William", 1);
	Trainer trainer2("John", 1);
	Trainer trainer3("Mark", 1);
	Trainer trainer4("Joe", 1);
	Trainer trainer5("Alex", 1);
	Trainer trainer6("Ray", 1);
	Trainer trainer7("Jack", 1);
	Trainer trainer8("Larry", 1);

	trainer1.setBattlePokemon(snorlax);
	trainer2.setBattlePokemon(bulb);

	trainer3.setBattlePokemon(vaporeon);
	trainer4.setBattlePokemon(charmander);

	battle(trainer1, trainer2);
	battle(trainer3, trainer4);
}

void battle(Trainer trainer1, Trainer trainer2) {
	Pokemon challenger = trainer1.getBattlePokemon();
	Pokemon opponent = trainer2.getBattlePokemon();
	cout << trainer1.getName() << "'s pokemon: " << trainer1.getBattlePokemon().getName() << " vs " << trainer2.getName() << "'s pokemon: " << trainer2.getBattlePokemon().getName() << endl;
	for (int i = 5; i > 1; i--) {
		cout << i << endl;
	}
	cout << "Begin!" << endl;

	while (challenger.getHealth() > 0 && opponent.getHealth() > 0) {
		challenger.attack(opponent);
		opponent.attack(challenger);
	}
	Pokemon winner = challenger.getHealth() <= 0 ? opponent : challenger;
	cout << winner.getName() << " won!" << endl;
}
