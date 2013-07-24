#pragma once
#include "SDL.h"
#include "string"

class GuiObject
{
public:

	std::string guiPicturePath;
	std::string guiPressedPicturePath;
	std::string guiText;

	SDL_Rect sourceRect;
	SDL_Rect destinationRect;

	SDL_Surface *guiObjectSurface;
	SDL_Surface *guiPressedObjectSurface;

	GuiObject(std::string guiPicturePathConstr, std::string guiPressedPicturePathConstr, SDL_Rect destinationRectConstr);
	GuiObject(std::string guiPicturePathConstr, SDL_Rect destinationRectConstr);

	GuiObject(void);
	~GuiObject(void);
};

