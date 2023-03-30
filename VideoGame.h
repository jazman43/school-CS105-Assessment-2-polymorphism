/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_2 Question 2 Polymorphism
*/

#pragma once
#include <iostream>

//parent class
class VideoGame
{
public:
	//constructor
	VideoGame(std::string title_, float price);

	//displays name and price to user
	virtual void display();

private:

	std::string title;
	float price;
};

