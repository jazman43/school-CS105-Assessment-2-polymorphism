#include "ConsoleGame.h"

ConsoleGame::ConsoleGame(std::string title_, float price_, std::string console) : VideoGame(title_,price_),consoleType(console){}

void ConsoleGame::display()
{
	VideoGame::display();
	std::cout << "Console Type: " << consoleType << "\n";
}
