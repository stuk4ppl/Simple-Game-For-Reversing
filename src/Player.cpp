#include "../include/Player.h"

Player::Player() {
	BaseEntity();
	CanAttack();
	Name = "Unknow";
	State = 0;
};

Player::Player(float health, int armor, std::string name, int state, float damage, std::string type ) :
	BaseEntity(type, health, armor), CanAttack(damage), Name(name), State(state) {};

bool Player::isAlive() {
	if (GetBaseHealth() <= 0) {
		State = 0;
		return false;
	}
	else {
		return true;
	}
}

void Player::SetState(int NewState) {
	State = NewState;
}

int Player::GetState() {
	return State;
}

void Player::ExportInfo() {
	BaseEntity::ExportInfo();
	std::cout << "- Name: " << Name << std::endl;
	std::cout << "- Damage: " << GetDamage() << std::endl;
}

std::string Player::GetName() {
	return Name;
}
