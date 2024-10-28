#pragma warning(disable : 28251)

#include <Windows.h>
#include <iostream>

#include "include/BaseEntity.h"
#include "include/Player.h"
#include "include/Monster.h"

#define DEFAUT_DAMAGE 20

void ShowConsole() {
	AllocConsole();
	FILE* file;
	freopen_s(&file, "CONOUT$", "w", stdout);
}

int __stdcall WinMain(HINSTANCE hInstance,
					  HINSTANCE hPrevInstance,
					  LPSTR lpCmdParameter,
					  int nCmdShow)
{
	ShowConsole();

	Player* player = new Player(500, 100, "Son", 1, DEFAUT_DAMAGE);
	Monster* monster = new Monster(200, 100, "Orc", "Thunder Storm", DEFAUT_DAMAGE, 2);

	player->ExportInfo();
	std::cout << std::endl;
	monster->ExportInfo();
	std::cout << std::endl;

	std::cout << "Game Start: " << std::endl;

	while (!GetAsyncKeyState(VK_INSERT) & 1) { // Game Loop
		if (GetAsyncKeyState(VK_END) & 1) {
			monster->DoDamage((BaseEntity*)player);
		}
	}

	//Need Update : Sua CanAttack thanh Interface cho Player / Monster tu trien khai
	//Them tinh nang check xem player Death chua
	//Them virtual function, interface de xem dau class co con tro vPtr khong

}

