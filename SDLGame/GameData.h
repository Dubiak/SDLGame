#pragma once
#include <iostream>
#include <fstream>

class GameData
{
private:
	int screenWidth;
	int screenHeight;
	int screenBit;

public:
	GameData(void);
	~GameData(void);

	int ScreenWidth();
	int ScreenHeight();
	int ScreenBit();

};

