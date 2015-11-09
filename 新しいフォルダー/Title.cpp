#include "Title.h"
#include "singleton.h"



Title::Title()
{
	TitleBack = Texture("res/character/TitleBack.png");
}

void Title::Setup()
{
	if (env.isOpen())
	{
		TitleAnimationCounter++;
	}
	if (TitleAnimationCounter >= 2000)
	{
		TitleAnimationCounter = 2000;
	}
	
}

void Title::Draw()
{
	if (TitleAnimationCounter >= 2000)

	drawTextureBox(-500, -500, 1000, 1000, 0, 0, 1024, 1024, TitleBack);
	
}