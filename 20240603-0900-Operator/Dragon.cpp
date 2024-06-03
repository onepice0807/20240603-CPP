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

	cout << _name << "�� " << _name << "�� �����ؼ� ������� " << _health << "�� �پ���." << endl;
	cout << _name << "�� ��ü ȸ���ؼ� ������� " << _health + GetReplenishesQuantity() << "�� �þ���." << endl;
	_health += GetReplenishesQuantity();

}

void Dragon::Info() {
	Monster::Info();
	cout << "��ü ȸ����: " << _replenishesQuantity << endl;
}