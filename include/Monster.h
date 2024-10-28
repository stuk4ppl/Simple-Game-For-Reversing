#pragma once
#include "BaseEntity.h"
#include "CanAttack.h"
class Monster : public BaseEntity, public CanAttack {
private:
	std::string TypeMonster;

	std::string Ability;

	int MutiplierDamage;
public:
	Monster();

	Monster(float health, int armor, std::string typemonster, std::string ability, float damage, int mutiplierdamage, std::string type = "Monster");

	void ExportInfo();
};

