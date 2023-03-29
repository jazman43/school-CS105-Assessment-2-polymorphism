#include "VideoGame.h"

VideoGame::VideoGame(std::string title_, float price_) : title(title_), price(price_){}

void VideoGame::display()
{
	std::cout << "Title: " << title << "\n";
	std::cout << "Price: $" << price << "\n";
}

