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
double load(double sum); // Added

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
		discount(sum); // Added
		cout << endl << "One more time (Y/N)? ";
		cin >> answer;
	} while (toupper(answer) == 'Y');
	return 0;
}

// Add necessary function definitions here
void print(double sum, double dKr)
{
	double sum = 0.0;
	double dKr = 0.0;
	// Write code for the output! The result should look like run example below,
	// that is, with fixed number notation, right alignment and some padding character.
}

double dicount(double sum)
{

}

// User input
double load(double sum)
{
	double sum = 0.0;

	cout << "Enter the sum: " << endl;
	cin >> sum;
	cout << "------------------------------------" << endl << endl;

	cout << "Discount " << left << setw(10) << ": " << left << setw(2);
}