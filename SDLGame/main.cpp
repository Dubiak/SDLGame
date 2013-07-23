#include "SDL.h"
#include "InputHandler.h"
#include "GameEngine.h"
#include <cstdlib>
#include "GameScreen.h"


SDL_Surface * ekran = NULL;
SDL_Event zdarzenie;
bool wyjscie = false;
GameScreen MyGameScreen;
InputHandler MyInputHandler;
int* mousePositions = MyInputHandler.GetMousePosition();

int main( int argc, char * args[] )
{
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

		mousePositions = MyInputHandler.GetMousePosition();
		printf("Mouse moved to (%d, %d) \n", mousePositions[0], mousePositions[1]);

		MyGameScreen.Draw();

    }
	
    SDL_Quit();
    return 0;
}