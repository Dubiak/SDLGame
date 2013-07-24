#include "GuiObject.h"


GuiObject::GuiObject(void)
{
}

GuiObject::GuiObject(std::string guiPicturePathConstr, std::string guiPressedPicturePathConstr, SDL_Rect destinationRectConstr)
{
	guiPicturePath = guiPicturePathConstr;
	guiPressedPicturePath = guiPressedPicturePathConstr;

	guiObjectSurface = SDL_LoadBMP( guiPicturePath.c_str() );
	guiPressedObjectSurface = SDL_LoadBMP( guiPressedPicturePath.c_str() );

	destinationRect = destinationRectConstr;
}

GuiObject::GuiObject(std::string guiPicturePathConstr, SDL_Rect destinationRectConstr)
{
	guiPicturePath = guiPicturePathConstr;
	guiObjectSurface = SDL_LoadBMP( guiPicturePath.c_str() );
	destinationRect = destinationRectConstr;
}



GuiObject::~GuiObject(void)
{
}
