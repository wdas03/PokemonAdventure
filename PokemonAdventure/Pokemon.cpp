#include "Pokemon.h"

namespace PokemonWorld {
	Pokemon::Pokemon() : name("default"), health(500), normalAttack(10), specialAttack(50), dodgeProb(0.2) {}
	Pokemon::Pokemon(string name, int health, int normalAttack, int specialAttack, float dodgeProb) : name(name), health(health), normalAttack(normalAttack), specialAttack(specialAttack), dodgeProb(dodgeProb) {}

	string Pokemon::getName() {
		return name;
	}

	void Pokemon::setHealth(int newhealth) {
		health = newhealth;
	}

	int Pokemon::getHealth() {
		return health;
	}

	int Pokemon::getNormalAttack() {
		return normalAttack;
	}

	int Pokemon::getSpecialAttack() {
		return specialAttack;
	}

	int Pokemon::getAttackCount() {
		return attackCount;
	}

	void Pokemon::incrementAttackCount() {
		attackCount++;
	}

	void Pokemon::loseHealth(int healthLost) {
		health -= healthLost;
	}

	float Pokemon::getDodgeProb() {
		return dodgeProb;
	}

	bool Pokemon::willDodge() {
		srand(time(NULL));
		return ((rand() % 100) < (dodgeProb * 100));
	}

	bool Pokemon::isAlive() {
		return health > 0;
	}

	void Pokemon::attack(Pokemon &opponent) {
		for (int i = 0; i < 3; i++) {
			if (!isAlive() || !opponent.isAlive()) {
				break;
			}
			cout << name << ": " << health << endl;
			cout << opponent.getName() << ": " << opponent.getHealth() << "\n\n" << endl;
			bool opponentWillDodge = opponent.willDodge();
			cout << name << " attacked " << opponent.getName() << "!" << endl;
			if (!opponentWillDodge) {
				if (attackCount % 5 == 0 && attackCount != 0) {
					cout << name << " used a special attack!" << endl;
					opponent.loseHealth(specialAttack);
					cout << opponent.getName() << " lost " << specialAttack << " health!\n\n" << endl;
				}
				else {
					opponent.loseHealth(normalAttack);
					cout << opponent.getName() << " lost " << normalAttack << " health!\n\n" << endl;
				}
			}
			else {
				cout << opponent.getName() << " dodged!\n\n" << endl;
			}
			incrementAttackCount();
		}
	}
}