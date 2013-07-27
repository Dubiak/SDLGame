#include "GameEngine.h"
#include "GameData.h"

GameEngine::GameEngine(void)
{
	GameData gameData;
	SDL_Init( SDL_INIT_EVERYTHING );
	gameScreen = SDL_SetVideoMode( gameData.ScreenHeight(), gameData.ScreenWidth(), gameData.ScreenBit(), SDL_HWSURFACE );
	SDL_WM_SetCaption("Game", NULL );
}

GameEngine::GameEngine(int gameWidth, int gameHeight, int gameBpp, Uint32 flags)
{
	SDL_Init( SDL_INIT_EVERYTHING );
	gameScreen = SDL_SetVideoMode( gameWidth, gameHeight, gameBpp, flags );
	SDL_WM_SetCaption("Game", NULL );
}

void GameEngine::Draw()
{
	SDL_BlitSurface( NULL, NULL, gameScreen, NULL );
	SDL_Flip( gameScreen );
}

void GameEngine::Update()
{

}

void GameEngine::Initialize()
{

}

void GameEngine::UnloadContent()
{
	SDL_FreeSurface( gameScreen );
}

void GameEngine::LoadContent()
{

}

void GameEngine::GameLoop()
{
	Initialize();
	LoadContent();
	Update();
	Draw();
	UnloadContent();
}

SDL_Surface GameEngine::Screen()
{
	return *gameScreen;
}

GameEngine::~GameEngine(void)
{
}
