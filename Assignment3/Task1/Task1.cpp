#include <iostream>
#include <cctype> // toupper

using std::cout;
using std::cin;
using std::endl;

// Declare prototype
void getSide(double& side); // A function to load/read data
double cubeVolume(double& volume, double& side); // A function to compute and return volume of a cube
void printVolume(double& volume); // A function to print the computation result

int main()
{
	double side = 0.0, volume = 0.0;
	char answer = 'Y';

	cout << "Cubes" << endl;
	cout << "=====" << endl << endl;
	do
	{
		getSide(side);
		cubeVolume(volume, side);
		printVolume(volume);

		cout << endl << "One more time (Y/N)? ";
		cin >> answer;
	} while (toupper(answer) == 'Y');
	return 0;
}

// Read side
void getSide(double& side)
{
	cout << "Enter the side length of a cube to be computed: ";
	cin >> side;
}

// Calculate volume
double cubeVolume(double& volume, double& side)
{
	volume = side * side * side;
	return volume;
}

// Print volume
void printVolume(double& volume)
{
	cout << "Volume of the cube is: " << volume << " volume units" << endl;
}
