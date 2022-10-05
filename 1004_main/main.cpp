#include <iostream>
#include "Player.h"
#include "World.h"
#include "Goblin.h"
using namespace std;


int main()
{
	FPlayer* MyPlayer = new FPlayer();

	FGoblin* MyGoblin = new FGoblin();
	
	


	delete MyPlayer;
	MyPlayer = nullptr;

	delete MyGoblin;
	MyGoblin = nullptr;



	return 0;
}