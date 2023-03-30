/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_2 Question 2 Polymorphism
*/


#pragma once
#include "VideoGame.h"

//child class of video game class
class ConsoleGame : public VideoGame
{
public:
	//constuctor
	ConsoleGame(std::string title_, float price_, std::string console);

	//function to display Console game to user
	void display() override;


private:

	std::string consoleType;

};

