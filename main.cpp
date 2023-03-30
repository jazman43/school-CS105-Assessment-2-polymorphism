/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_2 Question 2 Polymorphism
*/




#include <iostream>
#include <string>

#include "VideoGame.h"
#include "ComputerGame.h"
#include "ConsoleGame.h"




int main()
{
	int maxGames = 100;

	//create a double pointer for an array of vidoGame objects 
	VideoGame** videoGamesArray = new VideoGame*[maxGames];

	int numGames = 0;
	char addGame;

	std::cout << "\t\tVideo Games Data Entry\n";
	std::cout << "****************************************\n\n";
	//main loop
	while (true)
	{
		std::string title;
		float price;
		int gameType;
		std::string osType;
		std::string consoleType;

		 //displays to user to get input from user
		std::cout << "Enter the game Title: ";		
		std::getline(std::cin, title);

		//displays to user to get game price from user
		std::cout << "Enter the game Price: $";
		std::cin >> price;
		//check if a user input failed 
		if(std::cin.fail())
		{
			//if failed we clear the input stream then ignore the invalid input
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//we tell the user it failed then restart loop
			std::cout << "Input Fail. Please Enter a Number for price.\n";
			continue;
		}
		
			
		
		//asks user if this is a computer game or not 
		std::cout << "Enter 1 for computer game or 2 for console game: ";		
		std::cin >> gameType;
		std::cin.ignore();
		
		if (gameType == 1) {
			//asks user to input operating system of computer game
			std::cout << "Enter the os type (windows 8.1/10/11 or mac os or linux): ";			
			std::getline(std::cin, osType);
			//do checks for os type go back if not a valid os
			if(osType != "windows 8.1" ||
				osType != "windows 10" ||
				osType != "windows 11" ||
				osType != "mac os" ||
				osType != "linux")
			{
				std::cout << "Please enter os type (windows 8.1/10/11 or mac os or linux)\n";
				continue;
			}

			//stores info into the video game array by creating a new computer game object
			videoGamesArray[numGames] = new ComputerGame(title, price, osType);

		}
		else if (gameType == 2)
		{
			//asks user to input console type
			std::cout << "Enter the Console type (xbox or playstation): ";			
			std::getline(std::cin, consoleType);
			//do checks for console type go back if not a valid console
			if (consoleType != "xbox" ||
				consoleType != "playstation")
			{
				std::cout << "Please enter Console type (pbox or playstation)\n";
				continue;
			}

			//stores info into the video game array by creating a new console game object
			videoGamesArray[numGames] = new ComputerGame(title, price, consoleType);
		}
		else
		{
			std::cout << "Invalid Input. Please Enter 1 or 2. \n";
			continue;
		}
		
		numGames++;
		//asks user if they want to continue
		std::cout << "Do you want to add another game(y:n): ";
		std::cin >> addGame;
		std::cin.ignore();

		if (addGame == 'N' || addGame == 'n')break;
		
		//checks if the number of games has reach the max emount of game alowerd
		if (numGames >= maxGames)
		{
			//increacs the size allowed
			maxGames *= 2;
			//creates a new double video game object array
			VideoGame** newVideoGameArray = new VideoGame * [maxGames];
			//loops though each of the current video games and copes them over
			for (int i = 0; i < numGames; i++) {
				newVideoGameArray[i] = videoGamesArray[i];
			}

			//clears the old array
			delete[] videoGamesArray;
			//then stores it all back
			videoGamesArray = newVideoGameArray;

			delete[] newVideoGameArray;
		}

		std::cout << "\n\n";
	}

	std::cout << "\n\n\t\tVideo Games List:\n";

	for (int i = 0; i < numGames; i++)
	{
		//displays each video game it the array
		std::cout << "\n**********************************\n";
		videoGamesArray[i]->display();
		std::cout << "\n";

	}

	//clean up
	for(int i =0;i<numGames;i++)
	{
		delete videoGamesArray[i];
	}

	delete[] videoGamesArray;

	system("pause>0");
	return 0;
}