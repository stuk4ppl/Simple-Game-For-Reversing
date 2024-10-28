#pragma once
#include <string>
#include <iostream>
class BaseEntity //For all entity
{
private:
	std::string Type;

	float BaseHealth;

	int BaseArmor;

public:
	BaseEntity(std::string t, float h, int a);

	BaseEntity();

	float GetBaseHealth();

	int GetBaseArmor();

	std::string GetType();

	void SetBaseHealth(float NewHealth);

	void SetBaseArmor(int NewArmor);

	void ExportInfo();
};

