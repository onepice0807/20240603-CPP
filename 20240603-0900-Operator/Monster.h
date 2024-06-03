#pragma once
#include <string>


// 순수가상함수를 하나라도 가지고 있는 클래스를 추상클래스
// 추상클래스는 자신의 객체를 생성할 수 없다.
// 하지만 자식이 자신의 순수가상함수를 반드시 구현하도록 강제하는
// 능력이 생긴다.
class Monster
{
protected:
	std::string _name;
	int _health;	// 생명력
	int _attack;	// 공격력
	int _defense;	// 방어력

public:
	Monster(std::string name, int health, int attack, int defense);

	std::string GetName();

	int GetHealth();

	void SetHealth(int health);

	int GetDefense();

	virtual void GetDamage(int attack) = 0;	// 순수 가상함수

	void Attack(Monster& enemy);



	void Info();
};

