#include "Character.h"
#include <iostream>
using namespace std;

FCharacter::FCharacter()
{
	Type = "Character";
	Gold = 0;
	HP = 0;
	Dir = 0;
	cout << "Charater 생성" << endl;


}

FCharacter::~FCharacter()
{
	cout << "소멸" << endl;
}

void FCharacter::Move()
{
	cout << "이동" << endl;
}

void FCharacter::Attack()
{
	cout << "공격" << endl;
}

void FCharacter::Dead()
{
	cout << "죽음" << endl;
}

void FCharacter::DecreaseHP()
{
	cout << "감소" << endl;
}
