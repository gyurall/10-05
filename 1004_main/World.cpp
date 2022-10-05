#include "World.h"
#include <iostream>
using namespace std;

FWorld::FWorld()
{
	int PX = 0;
	int PY = 0;

	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (PX == X && PY == Y)
			{
				cout << "I" << endl;
			}
			else
			{
				if (World[X][Y] == 0)
				{
					cout << "бс";
				}
				else
				{
					cout << " ";
				}
			}
		}
		cout << endl;
	}
}
