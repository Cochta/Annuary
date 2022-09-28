#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "Annuary.h"
#include "Controller.h"

int main()
{
	Annuary myAnnuary = Annuary();

	while (true)
	{
		std::string choice;
		std::cout << "Would you like to find someone or to add someone ?" << std::endl;
		std::cout << "Type a to add, f to find or q to quit" << std::endl;

		while (std::cin >> choice) { // allows the user to only input a, f or q
			if (choice == "a" || choice == "f" || choice == "q")
				break;

			std::cout << "Your input is not correct, only characters a, f and q are allowed:" << std::endl;
		}
		if (choice == "a")
		{
			AddToAnnuary(myAnnuary);
		}
		else if (choice == "f")
		{
			FindInAnnuary(myAnnuary);
		}
		else if (choice == "q")
		{
			exit(0);
		}
	}
}