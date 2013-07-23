#pragma once
#include "SDL.h"

class GameEngine
{
protected:
	SDL_Surface *screen;

public:
	SDL_Surface Screen();

	GameEngine(void);
	~GameEngine(void);

	GameEngine(int gameWidth, int gameHeight, int gameBpp, Uint32 flags);

	virtual void Draw();
	virtual void Update();
	
};

