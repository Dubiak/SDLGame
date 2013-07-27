#pragma once
#include "drawablegameenginecomponent.h"
#include <list>
#include "GameEngineComponent.h"

class GameScreen : public DrawableGameEngineComponent
{
private:
	std::list<GameEngineComponent> listOfGameComponents;

public:
	GameScreen(void);
	~GameScreen(void);

	virtual void Update();
	virtual void Draw();
	virtual void Initialize();
	virtual void UnloadContent();
	virtual void LoadContent();

};


