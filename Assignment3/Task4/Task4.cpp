#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

// Declare prototypes
void measures();

int main()
{
	char answer = 'Y';

	do
	{
		measures();

		cout << endl << "One more time (Y/N)? ";
		cin >> answer;
	} while (toupper(answer) == 'Y');
	return 0;
}

void measures()
{
	char childGender;
	double motherHeight;
	double fatherHeight;
	double hFemaleChild;
	double hMaleChild;

	do
	{
		cout << "What is the child gender? F = female, M = male: ";
		cin >> childGender;

		childGender = toupper(childGender);
	} while (!(childGender == 'F' || childGender == 'M'));

	cout << "What is the height of the monther in centimeters? ";
	cin >> motherHeight;

	cout << "What is the height of the father in centimeters? ";
	cin >> fatherHeight;

	if (childGender == 'F')
	{
		// Hfemale_child = ((Hfather 12 / 13) + Hmother) / 2
		hFemaleChild = (((fatherHeight * 12) / 13) + motherHeight) / 2;
		cout << "Estimated height of the female child is " << std::fixed << std::setprecision(0) << hFemaleChild << " cm.";
	}
	else
	{
		// Hmale_child = ((Hmother 13 / 12) + Hfather) / 2
		hMaleChild = (((motherHeight * 13) / 12) + fatherHeight) / 2;
		cout << "Estimated height of the male child is " << std::fixed << std::setprecision(0) << hMaleChild << " cm.";
	}
}
