#include "GuiSystem.h"
#include <list>


GuiSystem::GuiSystem(void)
{
}

SDL_Surface GuiSystem::DrawAllGuiObjects(std::list<GuiObject> listOfGuiElements)
{
	SDL_Surface *guiSurface = NULL;

	for each (GuiObject guiObject in listOfGuiElements)
	{
		SDL_BlitSurface(guiObject.guiObjectSurface, NULL, guiSurface, guiObject.destinationRect);
	}

	return *guiSurface;
}

GuiSystem::~GuiSystem(void)
{
}
