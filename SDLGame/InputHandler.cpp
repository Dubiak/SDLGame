#include "InputHandler.h"
#include "SDL.h"



InputHandler::InputHandler(void)
{
	SDL_PollEvent (& event);
}

bool InputHandler::KeyDown(SDLKey key)
{
	SDL_PollEvent(&event);

	if( event.type == SDL_KEYDOWN && event.key.keysym.sym == key)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int* InputHandler::GetMousePosition()
{
	SDL_PollEvent(&event);
	if( event.type == SDL_MOUSEMOTION)
	{
		int mouseMotions[2];
		mouseMotions[0] = event.motion.x;
		mouseMotions[1] = event.motion.y;
		return mouseMotions;
	}
}

bool InputHandler::MouseButtonDown(int mouseButton)
{
	SDL_PollEvent(&event);
	if( event.type == SDL_MOUSEBUTTONDOWN && event.button.button == mouseButton)
	{
		return true;
	}
	else
	{
		return false;
	}

}

SDL_Event InputHandler::Event()
{
		return event;
}

InputHandler::~InputHandler(void)
{
}
