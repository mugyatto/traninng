#pragma once
#include "lib\framework.hpp"

class Menu
{
private:
	Texture nunber;
	Texture charaone;
	Texture charatwo;
	Font menu = Font("res/meiryob.ttc");
	Font mode = Font("res/meiryo.ttc");

public:
	Menu();

	void Setup();
	void Draw();
};