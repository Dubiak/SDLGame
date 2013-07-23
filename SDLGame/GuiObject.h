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

public:

	GuiObject(std::string guiPicturePathConstr, std::string guiPressedPicturePathConstr);

	GuiObject(void);
	~GuiObject(void);
};

