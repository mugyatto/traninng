#include "Menu.h"
#include "singleton.h"

Menu::Menu()
{
	nunber = Texture("res/nunber.png");
	charaone = Texture("res/character/Normal.png");
	charatwo = Texture("res/character/secondplayer_Normal.png");
}

void Menu::Setup()
{

}

void Menu::Draw()
{
	menu.size(100);
	mode.size(100);


	drawFillBox(-500, -500, 1000, 1000, Color::white);

	menu.draw("���j���[", Vec2f(-400,400), Color::black);
	mode.draw("����", Vec2f(-470, 210), Color::red);
	mode.draw("���[�h", Vec2f(-470, 60), Color::red);
	mode.draw("���y", Vec2f(-470, -110), Color::red);

	drawTextureBox(-250, 200, 100, 100, 0, 0, 100, 217, nunber);//�i���o�[1
	drawTextureBox(-100, 200, 100, 100, 110, 0, 100, 217, nunber);//�i���o�[2
	drawTextureBox(50, 200, 100, 100, 225, 0, 150, 217, nunber);//�i���o�[3
	drawTextureBox(200, 200, 100, 100, 375, 0, 160, 217, nunber);//�i���o�[4
	drawTextureBox(350, 200, 100, 100, 535, 0, 100, 217, nunber);//�i���o�[5

}