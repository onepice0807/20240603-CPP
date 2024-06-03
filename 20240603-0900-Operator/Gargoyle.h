#pragma once
#include "Monster.h"
#include <string>

class Gargoyle : public Monster {
private: 
	int _poisonRegist; // 

public:
    Gargoyle(std::string name, int health, int attack, int defense, int poisonRegist);

    void GetDamage(int attack) override;

    int GetPoisonRegist();

    void Info();

};
