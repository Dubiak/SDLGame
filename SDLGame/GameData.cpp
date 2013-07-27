#include "GameData.h"

GameData::GameData(void)
{
	screenHeight = 800;
	screenWidth = 600;
	screenBit = 32;
}


GameData::~GameData(void)
{

}

int GameData::ScreenWidth()
{
	return screenWidth;
}

int GameData::ScreenHeight()
{
	return screenHeight;
}

int GameData::ScreenBit()
{
	return screenBit;
}
