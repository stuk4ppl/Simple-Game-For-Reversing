#pragma once
#include "BaseEntity.h"
#include "CanAttack.h"
class Player : public BaseEntity, public CanAttack {
private:
	std::string Name;

	int State;

public:
	Player();

	Player(float health, int armor, std::string name, int state, float damage, std::string type = "Player");

	bool isAlive();

	void SetState(int NewState);

	int GetState();

	void ExportInfo();

	std::string GetName();
};

