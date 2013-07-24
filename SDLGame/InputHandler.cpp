#include "InputHandler.h"
#include "SDL.h"



InputHandler::InputHandler(void)
{
	SDL_PollEvent (& event);
}

SDL_Event InputHandler::event;

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

bool InputHandler::KeyUp(SDLKey key)
{
	SDL_PollEvent(& event);

	if( event.type == SDL_KEYUP && event.key.keysym.sym == key)
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

	int mouseMotions[2];

	SDL_GetMouseState(&mouseMotions[0], &mouseMotions[1]);

	if( event.type == SDL_MOUSEMOTION)
	{
		/*mouseMotions[0] = event.motion.x;
		mouseMotions[1] = event.motion.y;*/

		SDL_GetMouseState(&mouseMotions[0], &mouseMotions[1]);
	}
	else
	{
		mouseMotions[0] = 0;
		mouseMotions[1] = 0;
	}

	return mouseMotions;
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
