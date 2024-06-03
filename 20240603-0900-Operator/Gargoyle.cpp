#include "Gargoyle.h"
#include <iostream>

using namespace std;

Gargoyle::Gargoyle(std::string name, int health, int attack, int defense, int poisonRegist)
	: Monster(name, health, attack, defense), _poisonRegist(poisonRegist) {}


void Gargoyle::GetDamage(int attack) {
	cout << "Snake::GetDamage()" << endl;
	int damage = attack - _defense - _poisonRegist;

	if (damage < 0) {
		damage = 0;
	}

	_health -= damage;
}


int Gargoyle::GetPoisonRegist() {
	return _poisonRegist;
}

void Gargoyle::Info() {
	Monster::Info();
	cout << "독저항력: " << _poisonRegist << endl;
}

