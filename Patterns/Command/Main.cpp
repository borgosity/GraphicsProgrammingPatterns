#include <iostream>
#include "Command.h"
#include "InputHandler.h"
#include "GameActor.h"

int main()
{
	GameActor actor;
	InputHandler inputHandler;
	Command * command = inputHandler.handleInput();
	if (command)
	{
		command->execute(actor);
	}

}