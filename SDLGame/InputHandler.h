#pragma once
#include "SDL.h"

class InputHandler
{
private:
	static SDL_Event event;

public:

	SDL_Event Event();

	static bool KeyDown(SDLKey key);
	static bool KeyUp(SDLKey key);

	static int* GetMousePosition();
	static bool MouseButtonDown(int mouseButton);

	InputHandler(void);
	~InputHandler(void);
};

