#include "stdafx.h"
#include "myFraction.h"
#include "ChrisUtil.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <conio.h>

void fractions();
void mainMenu();
void info();

int main()
{
	system("COLOR 81");
	std::ios::sync_with_stdio(false);
	try
	{
		mainMenu();
	}
	catch (std::exception& e)
	{
		std::cout << "ERROR, Program Failed.  Code: " << &e;
	}
	util::ClearScreen();
	std::cout << "\nGoodbye!";
	util::AnyKeyToContinue();
}

void mainMenu()
{
	int userInput = NULL;
	bool exit = false;
	while (!exit)
	{
		util::ClearScreen();
		std::cout << std::setfill('-') << std::setw(40) << "Main Menu" << std::setw(41) << "\n";
		std::cout << "\n\n\t" << "[1] : Fractions (test all)"
				  << "\n\n\t" << "[2] : Help / Info"
				  << "\n\n\t" << "[3] : Exit"
				  << "\n\n\n\t" << "->";
		userInput = util::IntChecker();
		switch (userInput)
		{
			case 1:		//Fractions
				fractions();
				break;
			case 2:		//Help-Info
				info();
				break;
			case 3:		//Exit program
				exit = util::Exit();
				break;
			default:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 132);
				std::cout << "\n[That is not a valid selection.]";
				util::Pause(2);
				break;
		}
	}
}

void info()
{
	util::ClearScreen();
	std::cout << std::setfill('-') << std::setw(41) << "Help / Info" << std::setw(41) << "\n\n"
		<< "This program is intended to do maths on fractions entered by the user\n"
		<< "\nNot a whole lotta help, this help section.\n"
		<< "\nThis program was developed by Christian Brannon.\n\n";
	util::AnyKeyToContinue();
}

void fractions()
{
	util::ClearScreen();

	fractionType myFraction1;
	fractionType myFraction2;

	cout << "\n\n\t" << "Enter the first fraction"
		 << "\n\n\t" << "->";
	cin >> myFraction1;

	cout << "\n\n\t" << "Enter the second fraction"
		 << "\n\n\t" << "->";
	cin >> myFraction2;

	cout << "\n\n\t" << myFraction1 << " + " << myFraction2
		<< " = " << myFraction1 + myFraction2;

	cout << "\n\n\t" << myFraction1 << " - " << myFraction2
		<< " = " << myFraction1 - myFraction2;

	cout << "\n\n\t" << myFraction1 << " * " << myFraction2
		<< " = " << myFraction1 * myFraction2;

	cout << "\n\n\t" << myFraction1 << " / " << myFraction2
		<< " = " << myFraction1 / myFraction2;


	cout << "\n\n\t" << myFraction1 << " == " << myFraction2;
	if (myFraction1 == myFraction2)
		cout << " is true.";
	else
		cout << " is false.";

	cout << "\n\t" << myFraction1 << " != " << myFraction2;
	if (myFraction1 != myFraction2)
		cout << " is true.";
	else
		cout << " is false.";

	cout << "\n\n\t" << myFraction1 << " <= " << myFraction2;
	if (myFraction1 <= myFraction2)
		cout << " is true.";
	else
		cout << " is false.";

	cout << "\n\t" << myFraction1 << " >= " << myFraction2;
	if (myFraction1 >= myFraction2)
		cout << " is true.";
	else
		cout << " is false.";

	cout << "\n\n\t" << myFraction1 << " < " << myFraction2;
	if (myFraction1 < myFraction2)
		cout << " is true.";
	else
		cout << " is false.";

	cout << "\n\t" << myFraction1 << " > " << myFraction2;
	if (myFraction1 > myFraction2)
		cout << " is true.";
	else
		cout << " is false.";
	util::AnyKeyToContinue();
}

