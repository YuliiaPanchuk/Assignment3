// Step a)
// Preprocessor directives
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

// Declare prototypes
bool leapYear(int year);

int main()
{
	cin >> year;

	if (leapYear(year))
		cout << "This is a leap year!" << endl;
	else
		cout << "This is not a leap year!" << endl;
}

bool leapYear(int year)
{
	int year;

	cout << "Enter year: " << endl;
	cin >> year;
	// If a year can be devided by 4 and can not be divisible by 100, 
	// then it is a leap year. As well as if a year can be devided by 400 it will be leap year.
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		cout << year << " is a leap year";
	}
	else
	{
		cout << year << " is not a leap year";
	}
	return 0;
}