#pragma once
#include "SDL.h"

class InputHandler
{
private:
	SDL_Event event;

public:

	SDL_Event Event();

	bool KeyDown(SDLKey key);
	int* GetMousePosition();
	bool MouseButtonDown(int mouseButton);

	InputHandler(void);
	~InputHandler(void);
};

