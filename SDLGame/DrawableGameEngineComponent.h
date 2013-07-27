#pragma once
#include "gameengine.h"
class DrawableGameEngineComponent : public GameEngine
{
private:
	bool toDraw;

public:
	DrawableGameEngineComponent(void);
	~DrawableGameEngineComponent(void);

	virtual void Update();
	virtual void Initialize();
	virtual void Draw();

};

