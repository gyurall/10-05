#include "Player.h"
#include <iostream>
using namespace std;

FPlayer::FPlayer()
{
	Type = "Player";

	cout << Type << "»ý¼º" << endl;

	Gold = 0;
	HP = 0;
	Dir = 0;
}

FPlayer::~FPlayer()
{
	cout << Type << "¼Ò¸ê" << endl;
}


void FPlayer::Collect()
{
	cout << Type << "È¹µæ" << endl;
}


