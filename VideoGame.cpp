/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_2 Question 2 Polymorphism
*/


#include "VideoGame.h"

VideoGame::VideoGame(std::string title_, float price_) : title(title_), price(price_){}

void VideoGame::display()
{
	std::cout << "Title: " << title << "\n";
	std::cout << "Price: $" << price << "\n";
}

