// C++ classes are normally split into two files: header (.h) files and source (.cpp) files.

// The header file contains class definitions and function.

// Declares function to perform additions, subtractions, multiplications and divisions.
#pragma once
class Calculator
{
	public:
		double Calculate(double x, char oper, double y);
};

