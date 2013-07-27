#pragma once
#include "SDL.h"
#include "GameEngineComponent.h"

class InputHandler : public GameEngineComponent
{
private:
	SDL_Event event;

public:

	SDL_Event Event();

	bool KeyDown(SDLKey key);
	bool KeyUp(SDLKey key);

	int* GetMousePosition();
	bool MouseButtonDown(int mouseButton);

	void GetMousePosition(int &positionX, int &positionY);

	void Update();
	void Initialize();

	InputHandler(void);
	~InputHandler(void);
};

