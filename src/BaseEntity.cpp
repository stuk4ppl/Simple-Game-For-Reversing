#include "../include/BaseEntity.h"

BaseEntity::BaseEntity(std::string t, float h, int a) : BaseHealth(h), BaseArmor(a), Type(t) {}

BaseEntity::BaseEntity() {
	BaseHealth = 100;
	BaseArmor = 100;
	Type = "Unknow";
};

float BaseEntity::GetBaseHealth() {
	return BaseHealth;
}

int BaseEntity::GetBaseArmor() {
	return BaseArmor;
}

std::string BaseEntity::GetType() {
	return Type;
}

void BaseEntity::SetBaseHealth(float NewHealth) {
	BaseHealth = NewHealth;
}

void BaseEntity::SetBaseArmor(int NewArmor) {
	BaseArmor = NewArmor;
}

void BaseEntity::ExportInfo() {
	std::cout << "- Type: " << Type << std::endl;
	std::cout << "- Health: " << BaseHealth << std::endl;
	std::cout << "- Armor: " << BaseArmor << std::endl;
}
