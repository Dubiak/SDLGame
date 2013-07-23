#pragma once
#include "SDL.h"
#include "string"

class GuiObject
{
private:

	std::string guiPicturePath;
	std::string guiPressedPicturePath;
	std::string guiText;

	SDL_Rect sourceRect;
	SDL_Rect destinationRect;

	SDL_Surface *guiObjectSurface;

public:

	GuiObject(std::string guiPicturePathConstr, std::string guiPressedPicturePathConstr, SDL_Rect destinationRectConstr);
	GuiObject(std::string guiPicturePathConstr, SDL_Rect destinationRectConstr);

	GuiObject(void);
	~GuiObject(void);
};

