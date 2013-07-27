#pragma once
#include "gameengine.h"

class GameEngineComponent : public GameEngine
{
private:


public:
	GameEngineComponent(void);
	~GameEngineComponent(void);

	virtual void Update();
	virtual void Initialize();

};

