#include "Player.h"
#include <iostream>
using namespace std;

FPlayer::FPlayer()
{
	Type = "Player";

	cout << Type << "����" << endl;

	Gold = 0;
	HP = 0;
	Dir = 0;
}

FPlayer::~FPlayer()
{
	cout << Type << "�Ҹ�" << endl;
}


void FPlayer::Collect()
{
	cout << Type << "ȹ��" << endl;
}


