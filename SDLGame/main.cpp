#include "SDL.h"
#include "InputHandler.h"
#include "GameEngine.h"
#include <cstdlib>
#include <string>


SDL_Surface *guiSurface = NULL;

//SDL_Event zdarzenie;
bool wyjscie = false;
GameEngine MyGameEngine;
InputHandler MyInputHandler;

int main( int argc, char * args[] )
{
	guiSurface = SDL_CreateRGBSurface(SDL_HWSURFACE, 800, 600, 32, NULL, NULL, NULL, NULL);

	SDL_Rect newGameRect;
	newGameRect.x = 30;
	newGameRect.y = 30;
	newGameRect.h = 5;
	newGameRect.w = 5;

	SDL_WM_GrabInput(SDL_GRAB_ON);

	std::string newGamePath = "GameContent/MainMenuContent/GuiButtons/NewGame.bmp";
	std::string pressedNewGamePath = "GameContent/MainMenuContent/GuiButtons/NewGamePressed.bmp";


    while( !wyjscie )
    {
		if( MyInputHandler.KeyDown(SDLK_ESCAPE))
        {
                wyjscie = true;
        }

		if( MyInputHandler.MouseButtonDown(SDL_BUTTON_LEFT))
        {
                wyjscie = true;
        }


    }
	
    SDL_Quit();
    return 0;
}