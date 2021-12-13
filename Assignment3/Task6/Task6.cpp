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
		system("CLS");

		cout << "Enter the numerator for 1st number  : ";
		cin >> a;
		cout << "Enter the denominator for 1st number : ";
		cin >> b;
		cout << "Enter the numerator for 2nd number : ";
		cin >> c;
		cout << "Enter the denominator for 2nd number : ";
		cin >> d;

		cout << "Press 1 to add" << endl;
		cout << "Press 2 to subtract" << endl; 
		cout << "Press 3 to multiply" << endl;
		cout << "Press 4 to divide" << endl;
		cout << "Your choice: ";
		cin >> selection;

		userSelection();

		cout << num << "/" << denomin;

		cout << endl << "One more time (Y/N)? ";
		cin >> answer;
		cout << endl;
	} while (toupper(answer) == 'Y');
	return 0;
}

// Reducing fraction
void reduce_fraction()
{
	// Does not handel negative values
	for (int i = denomin * num; i > 1; i--) {
		if ((denomin % i == 0) && (num % i == 0)) {
			denomin /= i;
			num /= i;
		}
	}
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

	// Reducing fraction
	reduce_fraction();
}


void addition()
{
	num = (a * d) + (b * c);
	denomin = b * d;
}

void subtraction()
{
	num = (a * d) - (c * b);
	denomin = b * d;
}

void multiplication()
{
	num = a * c;
	denomin = b * d;
}

void division()
{
	num = a * d;
	denomin = b * c;
}