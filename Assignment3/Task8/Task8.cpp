// Preprocessor directives
#include <iostream>
#include <iomanip>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

// Declare prototypes and functions
int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);
int dieRoll();

int main()
{
	cout << "Welcome to the Game of Dice Thrones!" << endl;
	cout << "It's your turn! Enter 'r' to roll." << endl;

	int humanTotalScore = 0;
	int computerTotalScore = 0;

	// Keep playing until someones score will be = or > 50
	do
	{
		humanTotalScore = humanTotalScore + humanTurn(humanTotalScore); // Adding the score to the ttl
		cout << "Your score this round is : " << humanTotalScore << endl;
		if (humanTotalScore >= 50)
		{
			cout << "You won!";
			break;
		}

		computerTotalScore = computerTotalScore + computerTurn(computerTotalScore); // Add the score from a new turn to the running ttl score
		cout << "The computer score in this round is : " << computerTotalScore << endl;
		if (computerTotalScore >= 50)
		{
			cout << "Computer wins!";
			break;
		}
	} while (humanTotalScore <= 50 && computerTotalScore <= 50);

	return 0;

}

int dieRoll()
{
	return (rand() % 6) + 1; // Call to rand() returns 0-5, + 1 and gives range from 1-6, avoiding chances die to roll of 0
}

int humanTurn(int humanTotalScore)
{
	int thisTurnScore = 0, score = 0;
	char rollHold;

	// Loop as long the player chooses roll again or a 1 is thrown
	while (true)
	{
		cout << "If you hold, your total score would be: " << humanTotalScore + thisTurnScore << endl;

		do {
			cout << "Press 'h' to hold or 'r' to roll again " << endl;
			cin >> rollHold;
			rollHold = toupper(rollHold);
		} while (!(rollHold == 'H' || rollHold == 'R'));

		if (rollHold == 'R')
		{
			score = dieRoll(); // Roll dies
			cout << "You rolled : " << score << ".  Your score in this round is : " << thisTurnScore << "." << endl;

			if (score == 1)
			{
				cout << "You rolled 1.  End of turn." << endl;
				return 0; // Runst this only if player rolled a 1
			}

			thisTurnScore = thisTurnScore + score; // Running total for this turn only
		}

		if (rollHold == 'H')
			return thisTurnScore; // Finsh and return total if the player chooses Hold
	}
}

int computerTurn(int computerTotalScore)
{
	int thisTurnScore = 0, score = 0;

	// Loop as long the computer score for this turn less than 50
	do
	{
		score = dieRoll(); //To roll dice

		if (score == 1)
		{
			cout << "The computer rolled 1" << endl;
			cout << "The computer loses its your turn. Enter 'c' to continue. " << endl;
			break;
		}

		thisTurnScore = thisTurnScore + score; // Running total for this turn

		cout << "It's the computer's turn!" << endl;
		cout << "The computer rolled " << score << ".  Score so far this turn is " << thisTurnScore << "." << endl;
		cout << "The computer total score is: " << computerTotalScore + thisTurnScore << "." << endl;
	} while (thisTurnScore < 50);

	// Complete turn and return total if the computer gained 50+
	if (thisTurnScore >= 50)
	{
		cout << "The computer holds." << endl;
		return thisTurnScore;
	}
	return 0; //will only get this far if the computer rolled a 1
}