#pragma once
#include <iostream>

class VideoGame
{
public:

	VideoGame(std::string title_, float price);

	virtual void display();

private:

	std::string title;
	float price;
};

