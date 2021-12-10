#include <iostream>
using std::cout;
using std::endl;

int main()
{
	for (int i = 0; i < 10; i++)
		cout << power(2, i) << " "; // prints 2 raised to the power of i

	cout << endl;
	cout << power(3) << endl; // will print 9
	cout << power(4) << endl; // will print 16
	cout << power(5) << endl; // will print 25
	return 0;
}// The function definition for powerint power(v, p){	double result = v;	for (double i = 0; i < p; i++)
	{
		result *= v;
	}	return result;	/*function power(v, p) {
		let result = v;
		for (var i = 0; i < p; i++) {
			result *= v;
		}
		return result;
	}*/}