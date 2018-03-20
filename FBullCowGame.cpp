#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
}

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }

int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
	return;
}

bool FBullCowGame::CheckAnswer() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}

