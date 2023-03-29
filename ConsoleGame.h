#pragma once
#include "VideoGame.h"

class ConsoleGame : public VideoGame
{
public:

	ConsoleGame(std::string title_, float price_, std::string console);

	void display() override;


private:

	std::string consoleType;

};

