#pragma once
#include "BaseEntity.h"
class CanAttack // For these Entity can attack
{
private:
	float Damage;

public:
	CanAttack();

	CanAttack(float damage);

	void DoDamage(BaseEntity* baseEnt);

	float GetDamage();

	void SetDamage(float NewDamage);
};

