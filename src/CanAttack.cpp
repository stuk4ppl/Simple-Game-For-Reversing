#include "../include/CanAttack.h"

CanAttack::CanAttack() {
	Damage = 0;
}

CanAttack::CanAttack(float damage) : Damage(damage) {}

void CanAttack::DoDamage(BaseEntity* baseEnt) { // Canattack phai lam thanh interface de moi class tu trien khai theo cach rieng
	float NewHealth = baseEnt->GetBaseHealth() - Damage;
	baseEnt->SetBaseHealth(NewHealth);

	std::cout << "Monster attacked " << baseEnt->GetType() << std::endl;
	std::cout << "Do " << Damage << " damage" << std::endl;
	std::cout << baseEnt->GetType() << " got " << NewHealth << " health remaining" << std::endl;
}

float CanAttack::GetDamage() {
	return Damage;
}

void CanAttack::SetDamage(float NewDamage) {
	Damage = NewDamage;
}