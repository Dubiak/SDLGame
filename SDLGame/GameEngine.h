#pragma once
#include "SDL.h"

class GameEngine
{
protected:
	SDL_Surface *gameScreen;

public:
	SDL_Surface Screen();

	GameEngine(void);
	~GameEngine(void);

	GameEngine(int gameWidth, int gameHeight, int gameBpp, Uint32 flags);

	virtual void Draw();
	virtual void Update();
	virtual void Initialize();
	virtual void GameLoop();
	virtual void UnloadContent();
	virtual void LoadContent();
	
};

