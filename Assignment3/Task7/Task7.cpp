// Step a)
// Preprocessor directives
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

// Declare prototypes and variables
bool leapYear(int year);
int daysInMonth(int year, int month);
int tomorrow(int value);

int main()
{
	char answer = 'Y';
	int selection;
	int tomorrowNum;

	int year;
	int month;
	int monthDays;

	do
	{
		do {
			cout << "1. Leap year and days of month" << endl;
			cout << "2. Tomorrow" << endl;
			cout << "Select program: ";
			cin >> selection;
		} while (!(selection == 1 || selection == 2));

		switch (selection)
		{
		case 1: // leap year and days of month
			cout << "Enter year: ";
			cin >> year;
			cout << endl << "Enter Month: ";
			cin >> month;

			if (leapYear(year))
			{
				cout << "This is a leap year!" << endl;
			}
			else
			{
				cout << "This is not a leap year!" << endl;
			}

			monthDays = daysInMonth(year, month);
			cout << "The number of days in this month is " << monthDays << "." << endl;
			break;

		case 2: // tomorrow
			cout << "Enter a date on the form YYYYMMDD: ";
			cin >> tomorrowNum;
			cout << endl;

			tomorrowNum = tomorrow(tomorrowNum);
			cout << "Tomorrow it is: " << tomorrowNum << endl;
			break;
		}

	} while (toupper(answer) == 'Y');

}

bool leapYear(int year)
{
	// If a year can be devided by 4 and can not be divisible by 100, 
	// then it is a leap year. As well as if a year can be devided by 400 it will be leap year.
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Step b)
int daysInMonth(int year, int month)
{
	switch (month)
	{
	case 1: // jan
		return 31;

	case 2: // feb
		if (leapYear(year))
			return 29;
		return 28;

	case 3: return 31; // mar
	case 4: return 30; // apr
	case 5: return 31; // may
	case 6: return 30; // jun
	case 7: return 31; // jul
	case 8: return 31; // aug
	case 9: return 30; // sep
	case 10: return 31; // oct
	case 11: return 30; // nov
	case 12: return 31; // dec
	}
}

int tomorrow(int value)
{
	// 20031231
	int year = value / 10000; // 2003
	int month = (value / 100) % 100; // 12
	int day = value % 100; // 31

	// get how many days in month
	int monthDays = daysInMonth(year, month);

	if (day + 1 > monthDays)
	{
		month += 1;
		day = 1;
	}
	else
	{
		day += 1;
	}

	if (month > 12)
	{
		year += 1;
		month = 1;
	}

	return year * 10000
		+ month * 100
		+ day;
}