#include <iostream>
#include <iomanip>
#include <string>
//Header file for numeric_limits
#include <limits>

using namespace std;

int main()
{
	//Variables
	int age = 0;
	double temperature = 0.0;

	//Input
	cout << "Enter your age: \n";
	cin >> age;

	cout << "Enter your temperature (in Celsius): \n";
	cin >> temperature;

	//Validate input
	if (cin.fail() || age < 0)
	{
		cout << "Invalid input. Please try again." << endl;
		//Clear the error flag on cin
		cin.clear(); 
		//Discard invalid input
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
		//Exit the program with an error code
		return 1; 
	}

	//Const bools for fever and age
	const bool hasFever = temperature >= 38.00;
	const bool isMinor = age < 18 && age > 0;

	//Check if the user is a minor and has a fever
	if (isMinor)
	{
		if (hasFever)
		{
			cout << "You are a minor and have a fever. Please consult a doctor." << endl;
		}
		else
		{
			cout << "You are a minor and do not have a fever. You are healthy." << endl;
		}
	}
	//Check if the user is an adult and has a fever
	else if (!isMinor && hasFever)
	{
		cout << "You are an adult and have a fever. Please consult a doctor." << endl;
	}
	//Check if the user is an adult and does not have a fever
	else if (!isMinor && !hasFever)
	{
		cout << "You are an adult and do not have a fever. You are healthy." << endl;
	}

	return 0;
}
