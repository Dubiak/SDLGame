#include "GuiObject.h"


GuiObject::GuiObject(void)
{
}

GuiObject::GuiObject(std::string guiPicturePathConstr, std::string guiPressedPicturePathConstr)
{
	guiPicturePath = guiPicturePathConstr;
	guiPressedPicturePath = guiPressedPicturePathConstr;
}

GuiObject::~GuiObject(void)
{
}
