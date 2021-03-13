// Calculator Console Application.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Include statements reference code stored in other files.

// Angle brackets (<>) references the C++ Standard Library.
#include <iostream>

// Accesses code defined in a header file.
#include "Calculator.h"

// Informs complier that the C++ Standard Library will be used.
// Without this line, every line would have to be preceded with std::
using namespace std;

int main() 
{
	// Initalises variables to prevent null reference errors.
	double x = 0.0; 
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	// cout is used to print a line of text.
	// endl breaks up the current line and moves the cursor to a new line.
	cout << "Calculator Console Application" << endl << endl;
	cout << "Enter the operation to perform: a+b | a-b | a*b | a/b" << endl;

	// An instance of the class is declared to perform the maths.
	Calculator c; 

	// Loop that allows users to perform as much calculations as they like. 
	while (true)
	{
		// cin accepts user input. 
		// This stream places the values entered into the relevant variables.
		cin >> x >> oper >> y;

		// Calls the function defined earlier and supplies the entered input.
		// The result is then stored in a variable. 
		result = c.Calculate(x, oper, y);

		// The result of the calculation are then printed onto the console. 
		cout << "Result: " << result << endl;
	}

	// Waits for Enter to be pressed before terminating the program
	cin.get();

	// We terminate the program using the return command, 0
	return 0;
}