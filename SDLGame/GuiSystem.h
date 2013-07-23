#pragma once
#include "SDL.h"
#include "GuiObject.h"
#include <list>

class GuiSystem
{
private:

	std::list<GuiObject> listOfGuiElements;

public:
	GuiSystem(void);
	~GuiSystem(void);

	SDL_Surface DrawAllGuiObjects(std::list<GuiObject> listOfGuiElements);

};

