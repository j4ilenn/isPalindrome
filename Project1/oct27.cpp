// oct27.cpp : This file contais the 'main function. Program execution begins and ends there.
//


#include<algorithm>
#include <iostream>
#include<string>
#include "oct27.h"

std::string getUserInput()
{
	std::string userInput;


	std::cout << "Enter a string (word, sentence, phrase, whatever)" << std::endl;
	//std::cin >> userInput;
	std::getline(std::cin, userInput);

	return userInput;
}




bool isPalindrome(std::string input)
{
	std::string copyOfInput = input;

	//for (int...)
	std::reverse(input.begin(), input.end());

	return (copyOfInput == input);

	

	

	
}

int main()
{
	while (true)

	{
		std::string userInput = getUserInput();

		if (isPalindrome(userInput))
		{
			std::cout << "That is a palindrome" << std::endl;

		}

		else
		{
			std::cout << "That is not a palindrome";
		}

	}
}