#pragma once
#include <string>

class FBullCowGame 
{
public:
	FBullCowGame(); //constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool CheckAnswer() const;
	
	bool CheckGuessValidity(std::string); //TODO make a more rich return value.
	void Reset(); //TODO make a more rich return value.


// Please try and ignore this and focus on the interface above ^^
private:
	//see constructor for initialization
	int MyCurrentTry;
	int MyMaxTries;
};
