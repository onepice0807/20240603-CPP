#pragma once
#include "Monster.h"
#include <string>

class Slime : public Monster
{
private:
	int _physicalRegist;	// ���� ���� ���׷�

public:
	Slime(std::string name, int health, int attack, int defense, int physicalRegist);

	int GetPhysicalRegist();

	void GetDamage(int attack) override;

	void Info();

};

