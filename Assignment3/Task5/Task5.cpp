// Preprocessor directives
#include <iostream> // Added
#include <iomanip> // Added

using std::cout; // Added
using std::endl; // Added
// Include the standard libraries needed!
using namespace std;

// Remember to declare all functions (prototypes)!
void print(double sum, double discountKr);
double discount(double sum); // Added
void load(double& sum); // Added

int main()
{
	double sum = 0.0, discountKr = 0.0;
	char answer;
	do {
		system("CLS"); // write a statement to Clear Console Screen // Added
		cout << "Discount" << endl;
		cout << "======" << endl << endl;

		load(sum);
		// To read the input sum from user – complete this function call,
		// by writing the necessary function definition!

		discountKr = sum * discount(sum) / 100;
		// To calculate the discount – complete the function call ("discount(sum)")
		// with a function definition

		sum = sum - discountKr;

		print(sum, discountKr);
		cout << endl << "One more time (Y/N)? ";
		cin >> answer;
	} while (toupper(answer) == 'Y');

	return 0;
}

// Add necessary function definitions here
void print(double sum, double dKr)
{
	// Write code for the output! The result should look like run example below,
	// that is, with fixed number notation, right alignment and some padding character.

	cout << "------------------------------------" << endl;
	cout << "Discount       : " << right << fixed << setprecision(2) << setw(12) << setfill('.') << dKr << " kr" << endl;
	cout << "Net sum        : " << right << fixed << setprecision(2) << setw(12) << setfill('.') << sum << " kr" << endl;
	cout << "------------------------------------" << endl;
}

double discount(double sum)
{
	if (sum >= 5000) {
		// 15%
		return 15;
	}
	else if (sum >= 1000) {
		// 10%
		return 10;
	}
	else if (sum >= 500) {
		// 5%
		return 5;
	}

	return sum;
}

// User input
void load(double& sum)
{
	cout << "Enter the sum: ";
	cin >> sum;
}