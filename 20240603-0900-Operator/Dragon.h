#pragma once
#include "Monster.h"
#include <string>

class Dragon : public Monster {
private:
	int _replenishesQuantity; // ��ü ȸ����
public:
	Dragon(std::string name, int health, int attack, int defense, int replenishesQuantity);

	int GetReplenishesQuantity();

	void GetDamage(int attack) override;

	void Info();
};