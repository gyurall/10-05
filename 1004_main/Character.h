#pragma once
#include <string>

using namespace std;

class FCharacter
{
public:
	FCharacter(); //Constructor
	~FCharacter(); //Destructor

	int Gold;
	int HP;
	int Dir;

	string Type;

	void Move();
	void Attack();
	void Dead();
	void DecreaseHP();
};

