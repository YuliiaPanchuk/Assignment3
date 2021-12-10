// Preprocessor directives
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl; 

// Decalre prototypes
double addition();
double subtraction();
double multiplication();
double division();

int main()
{
	char answer = 'Y';
	do
	{
		cout << endl << "One more time (Y/N)? ";
		cin >> answer;
		cout << endl;
	} while (toupper(answer) == 'Y');
	return 0;
}

int iuserInput()
{
	int firstFraction;
	int secondFraction;

	cout << "Enter first fraction: " << endl;
	cin >> firstFraction;

	cout << "Enter second fraction: " << endl;
	cin >> secondFraction;
}

double addition()
{

}

double subtraction()
{

}

double multiplication()
{

}

double division()
{

}