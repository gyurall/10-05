#include "Slime.h"
#include <iostream>
using namespace std;

FSlime::FSlime()
{
	cout << "Slime ����" << endl;

	Gold = 0;
	HP = 0;
	Dir = 0;
}

FSlime::~FSlime()
{
	cout << "Slime �Ҹ�" << endl;
}
