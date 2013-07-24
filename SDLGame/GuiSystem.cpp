#include "GuiSystem.h"
#include <list>
#include "InputHandler.h"

GuiSystem::GuiSystem()
{
	listOfGuiElements = std::list<GuiObject>();
}

void GuiSystem::DrawAllGuiObjects(std::list<GuiObject> listOfGuiElementsConstr, SDL_Surface *guiSurface)
{
	for each (GuiObject guiObject in listOfGuiElementsConstr)
	{
		SDL_BlitSurface(guiObject.guiObjectSurface, NULL, guiSurface, &guiObject.destinationRect);
	}
}

void GuiSystem::AddGuiObjectToList(GuiObject guiObject)
{
	listOfGuiElements.push_front(guiObject);
}

void GuiSystem::DrawAllGuiObjects(SDL_Surface *guiSurface)
{
	int* mouseLocation = InputHandler::GetMousePosition();

	for each (GuiObject guiObject in listOfGuiElements)
	{
		if( mouseLocation[0] >= guiObject.destinationRect.x && mouseLocation[1] >= guiObject.destinationRect.y && mouseLocation[0] <= guiObject.destinationRect.x + guiObject.destinationRect.h && mouseLocation[1] <= guiObject.destinationRect.y + guiObject.destinationRect.w)
		{
			SDL_BlitSurface(guiObject.guiPressedObjectSurface, NULL, guiSurface, &guiObject.destinationRect);
		}
		else
		{
			SDL_BlitSurface(guiObject.guiObjectSurface, NULL, guiSurface, &guiObject.destinationRect);
		}
	}
}

GuiSystem::~GuiSystem(void)
{
}
