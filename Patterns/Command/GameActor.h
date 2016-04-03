#pragma once
#include "Actor.h"
class GameActor :
	public Actor
{
public:
	GameActor();
	virtual ~GameActor();
	void jump();
	void fireGun();
};

