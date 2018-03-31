// Quest!.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "MiscFunctions.h"
#include "Game.h"



int main()
{
	try
	{
		Game game;

		for (;;)
		{
			printMainMenuMsg();
			char user_input;
			std::cin >> user_input;

			if (!validInput())
				continue;

			switch (user_input)
			{
			case '1': //Start quick game, default settings
				game.startNewGame();
				break;
			case '2': //Start new game
				break;
			case '3': //Load saved game
				break;
			case 'e': //Exit
			case 'E':
				return 0;
			default:
				printInvalidOption();
				break;
			}
		}
	}
	catch (std::exception &e)
	{
		logError(e.what());
		std::cout << "An error has occurred, please refer to ErrorLog.txt for more details. Enter anything to exit...";
		char user_input;
		std::cin >> user_input;
		return -1;
	}
}

