#include "Monster.h"
#include "Golem.h"
#include "Goblin.h"
#include "Slime.h"

#include <iostream>

using namespace std;

Monster::Monster(string name, int health, int attack, int defense)
	: _name(name), _health(health), _attack(attack), _defense(defense) {}

string Monster::GetName() {
	return _name;
}

int Monster::GetHealth() {
	return _health;
}

void Monster::SetHealth(int health) {
	_health = health;
}

int Monster::GetDefense() {
	return _defense;
}

/*
void Monster::GetDamage(int attack) {
	cout << "Monster::GetDamage()" << endl;
	int damage = attack - _defense;

	if (damage <= 0) {
		damage = 0;
	}

	_health -= damage;
}
*/

void Monster::Attack(Monster& enemy) {

	enemy.GetDamage(_attack);

	cout << "Monster::Attack(Monster)" << endl;
	cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " << enemy._health << "�� ����." << endl;

}

void Monster::Info() {
	cout << "�̸�: " << _name << endl;
	cout << "�����: " << _health << endl;
	cout << "����: " << _defense << endl;
	cout << "���ݷ�: " << _attack << endl;
}