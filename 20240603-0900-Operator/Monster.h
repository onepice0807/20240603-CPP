#pragma once
#include <string>


// ���������Լ��� �ϳ��� ������ �ִ� Ŭ������ �߻�Ŭ����
// �߻�Ŭ������ �ڽ��� ��ü�� ������ �� ����.
// ������ �ڽ��� �ڽ��� ���������Լ��� �ݵ�� �����ϵ��� �����ϴ�
// �ɷ��� �����.
class Monster
{
protected:
	std::string _name;
	int _health;	// �����
	int _attack;	// ���ݷ�
	int _defense;	// ����

public:
	Monster(std::string name, int health, int attack, int defense);

	std::string GetName();

	int GetHealth();

	void SetHealth(int health);

	int GetDefense();

	virtual void GetDamage(int attack) = 0;	// ���� �����Լ�

	void Attack(Monster& enemy);



	void Info();
};

