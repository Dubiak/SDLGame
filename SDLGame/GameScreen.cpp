#include "GameScreen.h"


GameScreen::GameScreen(void)
{
	std::list<GameEngineComponent> listOfGameComponents;
}

void GameScreen::Draw()
{
	DrawableGameEngineComponent::Draw();
}

void GameScreen::UnloadContent()
{
	DrawableGameEngineComponent::UnloadContent();
}

void GameScreen::Update()
{
	DrawableGameEngineComponent::Update();
}

void GameScreen::LoadContent()
{
	DrawableGameEngineComponent::LoadContent();
}

void GameScreen::Initialize()
{
	DrawableGameEngineComponent::Initialize();
}


GameScreen::~GameScreen(void)
{
}
