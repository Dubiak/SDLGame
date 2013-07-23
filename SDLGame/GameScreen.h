#pragma once
#include "gameengine.h"

class GameScreen : public GameEngine
{
protected:
	SDL_Surface screen;

public:
	GameScreen(void);
	~GameScreen(void);

	virtual void Draw(SDL_Surface *screen);
	virtual void Draw();
	virtual void Update();

};

