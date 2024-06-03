#include "Dragon.h"
#include <iostream>

using namespace std;

Dragon::Dragon(string name, int health, int attack, int defense, int replenishesQuantity)
	: Monster(name, health, attack, defense), _replenishesQuantity(replenishesQuantity) {}


int Dragon::GetReplenishesQuantity() {
	return _replenishesQuantity;
}

void Dragon::GetDamage(int attack) {
	cout << "Monster::GetDamage()" << endl;
	int damage = attack - _defense;

	if (damage <= 0) {
		damage = 0;
	}

	_health -= damage;

	_health += GetReplenishesQuantity();

	cout << _name << "가 " << _name << "을 공격해서 생명력이 " << _health << "로 줄었다." << endl;
	cout << _name << "가 자체 회복해서 생명력이 " << _health + GetReplenishesQuantity() << "로 늘었다." << endl;
	_health += GetReplenishesQuantity();

}

void Dragon::Info() {
	Monster::Info();
	cout << "자체 회복력: " << _replenishesQuantity << endl;
}