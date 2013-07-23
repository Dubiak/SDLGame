#include "GameEngine.h"

GameEngine::GameEngine(void)
{
	SDL_Init( SDL_INIT_EVERYTHING );
    screen = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE );
	SDL_WM_SetCaption("Game", NULL );
}

GameEngine::GameEngine(int gameWidth, int gameHeight, int gameBpp, Uint32 flags)
{
	SDL_Init( SDL_INIT_EVERYTHING );
	screen = SDL_SetVideoMode( gameWidth, gameHeight, gameBpp, flags );
	SDL_WM_SetCaption("Game", NULL );
}

void GameEngine::Draw()
{
	SDL_BlitSurface( NULL, NULL, screen, NULL );
	SDL_Flip( screen );
}

void GameEngine::Update()
{

}

SDL_Surface GameEngine::Screen()
{
	return *screen;
}

GameEngine::~GameEngine(void)
{
}
