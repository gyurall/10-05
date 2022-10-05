#include "Monsters.h"

Monsters::Monsters()
{
}

Monsters::Monsters(int _HP, string _Dir, int _ATK, int _Gold, string _Death)
{
	HP = _HP;
	Dir = _Dir;
	ATK = _ATK;
	Gold = _Gold;
	Death = _Death;
}
