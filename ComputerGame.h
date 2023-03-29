#pragma once
#include "VideoGame.h"
class ComputerGame : public VideoGame
{
public:
	ComputerGame(std::string title_, float price_, std::string osType_);

	void display() override;

private:

	std::string osType;

};

