#include "InputHandler.h"
#include "SDL.h"
#include <list>
#include "GameEngineComponent.h"



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

void InputHandler::GetMousePosition(int &positionX, int &positionY)
{
	SDL_PollEvent(&event);
	if( event.type == SDL_MOUSEMOTION)
	{
		positionX = event.motion.xrel;
		positionY = event.motion.yrel;
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

void InputHandler::Update()
{
	SDL_PollEvent(&event);
	GameEngineComponent::Update();
}

void InputHandler::Initialize()
{
	SDL_PollEvent(&event);
	GameEngineComponent::Initialize();
}
