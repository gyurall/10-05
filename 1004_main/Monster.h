#pragma once
#include "Boar.h"
#include "Slime.h"
#include "Goblin.h"

class FMonster : public FBoar, public FGoblin, public FSlime
{
public:
	FMonster();
	~FMonster();
};

