/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_2 Question 2 Polymorphism
*/



#include "ComputerGame.h"


ComputerGame::ComputerGame(std::string title_, float price_, std::string osType_) : VideoGame(title_,price_), osType(osType_){}


void ComputerGame::display()
{
	//calles to parent class display to display name and price
	VideoGame::display();
	//displays os to user
	std::cout << "OS Type: " << osType << "\n";
}
