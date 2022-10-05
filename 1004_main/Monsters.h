#pragma once
#include <string>
using namespace std;

class Monsters
{
public:
	Monsters();
	Monsters(int _HP, string _Dir, int _ATK, int _Gold, string _Death);

	int HP;
	string Dir;
	int ATK;
	int Gold;
	string Death;
};

