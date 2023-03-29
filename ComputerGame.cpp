#include "ComputerGame.h"

ComputerGame::ComputerGame(std::string title_, float price_, std::string osType_) : VideoGame(title_,price_), osType(osType_){}

void ComputerGame::display()
{
	VideoGame::display();
	std::cout << "OS Type: " << osType << "\n";
}
