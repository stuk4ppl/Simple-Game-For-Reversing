#include "../include/Monster.h"

Monster::Monster() {
	BaseEntity();
	CanAttack();
	TypeMonster = "Unknow";
	Ability = "Unknow";
	MutiplierDamage = 1;
}

Monster::Monster(float health, int armor, std::string typemonster, std::string ability, float damage, int mutiplierdamage, std::string type) :
	BaseEntity(type, health, armor), CanAttack(damage * mutiplierdamage), TypeMonster(typemonster), Ability(ability), MutiplierDamage(mutiplierdamage) {}

void Monster::ExportInfo() {
	BaseEntity::ExportInfo();
	std::cout << "- Type Monster: " << TypeMonster << std::endl;
	std::cout << "- Ability: " << Ability << std::endl;
	std::cout << "- Damage: " << GetDamage() << std::endl;
	std::cout << "- MutiplierDamage: " << MutiplierDamage << std::endl;
}

