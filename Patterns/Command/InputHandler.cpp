#include "InputHandler.h"

InputHandler::InputHandler()
{
}

InputHandler::~InputHandler()
{
}

Command * InputHandler::handleInput()
{
	if (isPressed(BUTTON_W)) return buttonW_;
	if (isPressed(BUTTON_S)) return buttonS_;
	if (isPressed(BUTTON_A)) return buttonA_;
	if (isPressed(BUTTON_D)) return buttonD_;
	if (isPressed(BUTTON_SPACE)) return buttonSpace_;
	if (isPressed(BUTTON_SHIFT)) return buttonShift_;

	return 0;
}
