#pragma once
#include "Command.h"

#define BUTTON_W 87
#define BUTTON_S 83
#define BUTTON_A 65
#define BUTTON_D 68
#define BUTTON_SPACE 32
#define BUTTON_SHIFT 16

class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	Command * handleInput();
	bool isPressed(int button);
private:
	Command * buttonW_;
	Command * buttonS_;
	Command * buttonA_;
	Command * buttonD_;
	Command * buttonSpace_;
	Command * buttonShift _;
};

