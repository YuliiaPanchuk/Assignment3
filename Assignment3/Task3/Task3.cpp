#include <iostream>
#include <cmath> // Using abs (absolute)
using std::cout;
using std::endl;

// The function definition for power
double power(double base, double exp = 2)
{
	bool sing = exp > 0;
	double result = 1;

	// For negative number
	if (!sing)
	{
		exp *= -1;
	}

	// Calculation
	for (double i = 1; i <= exp; i++)
	{
		if (sing)
		{
			result *= base;
		}
		else
		{
			result /= base;
		}
	}
	return result;
}

int main()
{
	for (int i = 0; i < 10; i++)
		cout << power(2, i) << " "; // prints 2 raised to the power of i

	cout << endl;
	cout << power(3) << endl; // will print 9
	cout << power(4) << endl; // will print 16
	cout << power(5) << endl; // will print 25
	return 0;
}
