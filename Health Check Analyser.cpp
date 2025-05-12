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
	cout << "Enter your temperature: ";
	cin >> temperature;

	//Clear the input buffer
	cin.ignore();

	cout << "Enter your gender (M/F): ";
	cin.get(gender);
}
