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
	cout << _name << "가 " << enemy._name << "을 공격해서 생명력이 " << enemy._health << "로 줄음." << endl;

}

void Monster::Info() {
	cout << "이름: " << _name << endl;
	cout << "생명력: " << _health << endl;
	cout << "방어력: " << _defense << endl;
	cout << "공격력: " << _attack << endl;
}