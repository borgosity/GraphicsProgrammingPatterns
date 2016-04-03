#pragma once
#include "GameActor.h"

class Command
{
public:
	Command();
	virtual ~Command();
	virtual void execute(GameActor& actor) = 0;
};

