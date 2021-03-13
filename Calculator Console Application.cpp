// Calculator Console Application.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Include statements reference code stored in other files.

// Angle brackets (<>) references the C++ Standard Library.
#include <iostream>

// Informs complier that the C++ Standard Library will be used.
// Without this line, every line would have to be preceded with std::
using namespace std;

int main() {

	// cout is used to print a line of text
	// endl breaks up the current line and moves the cursor to a new line
	cout << "Calculator Console Application" << endl << endl;
	cout << "Enter the operation to perform: a+b | a-b | a*b | a/b" << endl;

	// Waits for Enter to be pressed before terminating the program
	cin.get();

	// We terminate the program using the return command, 0
	return 0;
}