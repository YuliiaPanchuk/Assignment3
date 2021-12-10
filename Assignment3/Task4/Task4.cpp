#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	measures();
	char answer = 'Y';
	
	cout << "Heights" << endl;
	cout << "======================" << endl;

	do
	{
		cout << endl << "One more time (Y/N)? ";
		cin >> answer;
		cout << endl;
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
	} while (childGender != 'F' || childGender != 'M');

	cout << "What is the height of the monther in centimeters? ";
	cin >> motherHeight;

	cout << "What is the height of the father in centimeters? ";
	cin >> fatherHeight;

	// Hmale_child = ((Hmother 13 / 12) + Hfather) / 2
	// Hfemale_child = ((Hfather 12 / 13) + Hmother) / 2

	hMaleChild = ((motherHeight * 13 / 12) + fatherHeight) / 2;
	hFemaleChild = ((fatherHeight * 12 / 13) + motherHeight) / 2;

	cout << "Estimated height of the female child is " << hFemaleChild;
	cout << "Estimated height of the male child is " << hMaleChild;
}
