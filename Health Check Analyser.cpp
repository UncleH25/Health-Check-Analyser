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

	//Check if the user is a minor and has a fever
	if (age == isMinor)
	{
		if (temperature == hasFever)
		{
			cout << "You are a minor and have a fever. Please consult a doctor." << endl;
		}
		else
		{
			cout << "You are a minor and do not have a fever. You are healthy." << endl;
		}
	}
	else if (age != isMinor && temperature == hasFever)
	{
		cout << "You are an adult and have a fever. Please consult a doctor." << endl;
	}
	else if (age != isMinor && temperature != hasFever)
	{
		cout << "You are an adult and do not have a fever. You are healthy." << endl;
	}
	else
	{
		cout << "Invalid input. Please try again." << endl;
	}

	return 0;
}
