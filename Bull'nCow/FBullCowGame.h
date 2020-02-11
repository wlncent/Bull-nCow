#pragma once
#include <string>
using FString = std::string;
using int32 = int;
//all values = zero
struct FBullCowCount 
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

enum class EGuessStatus
{
	Invalid_Status,
	OK,
	Not_Isogram,
	Wrong_Length,
	Not_Lowercase
	
};

enum class  EResetStatus 
{

};

class FBullCowGame 
{
public:
	FBullCowGame() ;

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	int32 GetHiddenWordLength() const;
	bool IsGameWon() const;
	EGuessStatus CheckGuessValidity(FString) const; //TODO make a more rich return value

	void SelectWordFromDificulty(FString);
	void Reset(); //TODO make a more rich return value
	FBullCowCount SubmitValidGuess(FString);
// Please try and ignore this and focus on the interface above 
private:
	int32 MyCurrentTry ;
	FString MyHiddenWord;
	bool bGameIsWon;

	bool IsIsogram(FString) const;
	bool IsLowerCase(FString) const;


	
};
	