#pragma once
#include "Command.h"
class JumpCommand :
	public Command
{
public:
	JumpCommand();
	virtual ~JumpCommand();
	virtual void execute(GameActor& actor) 
	{ 
		actor.jump(); 
	}
};

