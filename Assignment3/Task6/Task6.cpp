// Preprocessor directives
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl; 

// Decalre prototypes and variables
void addition();
void subtraction();
void multiplication();
void division();
void userSelection();

int selection;
int num, denomin;

int a; // Numerator for 1st number
int b; // Denominator for 1st number
int c; // Numerator for 2nd number
int d; // Denominator for 2nd number

int main()
{
	char answer = 'Y';

	do
	{
		cout << "Enter the numerator for 1st number  : ";
		cin >> a;
		cout << "Enter the denominator for 1st number : ";
		cin >> b;
		cout << "Enter the numerator for 2nd number : ";
		cin >> c;
		cout << "Enter the denominator for 2nd number : ";
		cin >> d;

		cout << "Press 1 to add, Press 2 to subtract, Press 3 to multiply or Press 4 to divide: ";
		cin >> selection;

		userSelection();

		cout << num << "/" << denomin;

		cout << endl << "One more time (Y/N)? ";
		cin >> answer;
		cout << endl;
	} while (toupper(answer) == 'Y');
	return 0;
}

void userSelection()
{
	switch (selection)
	{
	case 1:
		addition();
		break;
	case 2:
		subtraction();
		break;
	case 3:
		multiplication();
		break;
	case 4:
		division();
		break;
	}
}

void addition()
{
	num = (a * d) + (b * c);
	denomin = b * d;
}

void subtraction()
{
	num = (a * c) - (b * d);
	denomin = b * c;
}

void multiplication()
{
	num = a * c;
	denomin = b * d;
}

void division()
{
	int fraction;

	num = a * c;
	denomin = b * d;
}