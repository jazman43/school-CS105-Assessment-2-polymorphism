/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_2 Question 2 Polymorphism
*/


#pragma once
#include "VideoGame.h"

//child class of video game with public accses
class ComputerGame : public VideoGame
{
public:
	//constuctor 
	ComputerGame(std::string title_, float price_, std::string osType_);
	//function to display Computer game to user
	void display() override;

private:

	std::string osType;

};

