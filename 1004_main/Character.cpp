#include "Character.h"
#include <iostream>
using namespace std;

FCharacter::FCharacter()
{
	Type = "Character";
	Gold = 0;
	HP = 0;
	Dir = 0;
	cout << "Charater ����" << endl;


}

FCharacter::~FCharacter()
{
	cout << "�Ҹ�" << endl;
}

void FCharacter::Move()
{
	cout << "�̵�" << endl;
}

void FCharacter::Attack()
{
	cout << "����" << endl;
}

void FCharacter::Dead()
{
	cout << "����" << endl;
}

void FCharacter::DecreaseHP()
{
	cout << "����" << endl;
}
