#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//Variables
	int age;
	double temperature;
	char gender;

	//Input
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your temperature (°C): ";
	cin >> temperature;

	//Clear the input buffer
	cin.ignore();

	cout << "Enter your gender (M/F): ";
	cin.get(gender);

	//Const bools for fever and age
	const bool hasFever = temperature >= 38.00;
	const bool isMinor = age < 18;
}
