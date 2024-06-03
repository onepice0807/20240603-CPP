#include "Goblin.h"
#include <iostream>

using namespace std;

Goblin::Goblin(std::string name, int health, int attack, int defense, int physicalAttackRegist)
	: Monster(name, health, attack, defense), _physicalAttackRegist(physicalAttackRegist) {}


int Goblin::GetPhysicalAttackRegist() {
	return _physicalAttackRegist;
}

void Goblin::GetDamage(int attack) {
	int damage = attack - GetDefense() - _physicalAttackRegist;

	if (damage <= 0) {
		damage = 0;
	}

	SetHealth(GetHealth() - damage);
}


void Goblin::Info() {
	Monster::Info();
	cout << "�����������׷�: " << _physicalAttackRegist << endl;
}
