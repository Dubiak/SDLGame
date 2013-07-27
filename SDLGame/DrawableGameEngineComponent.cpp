#include "DrawableGameEngineComponent.h"


DrawableGameEngineComponent::DrawableGameEngineComponent(void)
{
	toDraw = false;
}


DrawableGameEngineComponent::~DrawableGameEngineComponent(void)
{
}

void DrawableGameEngineComponent::Update()
{
	GameEngine::Update();
}

void DrawableGameEngineComponent::Initialize()
{
	GameEngine::Initialize();
}

void DrawableGameEngineComponent::Draw()
{
	GameEngine::Draw();
}
