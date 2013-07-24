#include "GameScreen.h"


GameScreen::GameScreen(void)
{
	/*GameScreen::GameEngine();*/
}


GameScreen::~GameScreen(void)
{
}

void GameScreen::Draw(SDL_Surface *screen)
{
	SDL_BlitSurface( screen, NULL, GameEngine::screen, NULL );
	GameEngine::Draw();
}

void GameScreen::Draw()
{
	GameEngine::Draw();
}

void GameScreen::Update()
{

}
