#include <iostream>
#include <string>
#include "FBullCowGame.h"

//functions
void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();
//Classes
FBullCowGame BCGame; //instantiate a new game

//The entry point for the app
int main()
{

	do {
		PrintIntro();
		PlayGame();
	} 	
	while (AskToPlayAgain());

	return 0; //exit app
}

void PlayGame()
{
	
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries; 
	//loop guess and repeat for the number of turns
	for (int GuessCount = 1; GuessCount <= MaxTries; GuessCount++)
	{
		std::string Guess = GetGuess();
		std::cout << "\nYour guess was " << Guess;
		std::cout << "!\n";
	}
	return;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n) ";
	std::string Response = "";
	getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

std::string GetGuess()
{
	int CurrentTry = BCGame.GetCurrentTry();
	//get a guess from the player
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

void PrintIntro()
{
	//introduce the game
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of? \n";
	return;
}
