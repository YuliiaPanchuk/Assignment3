#include <iostream>
#include <cctype> // toupper
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

// Decalre prototype
bool fahrenheitToCelsius(double fahrenheit, double& celsius);

int main()
{
	double valueFahrenheit, valueCelsius;
	char answer = 'Y';
	bool result;

	cout << "Temperature conversion" << endl;
	cout << "======================" << endl;

	do
	{
		std::cout << " Enter temperature in Fahrenheit: ";
		std::cin >> valueFahrenheit;

		result = fahrenheitToCelsius(valueFahrenheit, valueCelsius);
		std::cout << fixed << setprecision(1) << valueCelsius << " degrees Celsius" << endl;

		std::cout << " Boolean value returned by the conversion function is: "
			<< (result ? "true" : "false");  // Tenerary operator (one line if else statement)

		cout << endl << "One more time (Y/N)? ";
		cin >> answer;
		cout << endl;
	} while (toupper(answer) == 'Y');
	return 0;
}

// Perform the temperature conversion
bool fahrenheitToCelsius(double fahrenheit, double& celsius)
{
	celsius = 5 * (fahrenheit - 32.0) / 9.0; // returned by 2nd param (by reference)

	return celsius > 0;
}
