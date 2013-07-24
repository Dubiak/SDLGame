#pragma once
#include "SDL.h"
#include "GuiObject.h"
#include <list>

class GuiSystem
{
private:

	std::list<GuiObject> listOfGuiElements;

public:
	SDL_Surface& GuiSurface();

	GuiSystem(void);
	~GuiSystem(void);

	void DrawAllGuiObjects(std::list<GuiObject> listOfGuiElements, SDL_Surface *guiSurface);
	void DrawAllGuiObjects(SDL_Surface *guiSurface);

	void AddGuiObjectToList(GuiObject guiObject);

};

