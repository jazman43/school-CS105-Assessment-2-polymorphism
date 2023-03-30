/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_2 Question 2 Polymorphism
*/


#include "ConsoleGame.h"

ConsoleGame::ConsoleGame(std::string title_, float price_, std::string console) : VideoGame(title_,price_),consoleType(console){}

void ConsoleGame::display()
{
	//calles to parent class display to display name and price
	VideoGame::display();
	//displays console type to user
	std::cout << "Console Type: " << consoleType << "\n";
}
