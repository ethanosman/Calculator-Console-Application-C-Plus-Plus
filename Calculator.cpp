// C++ classes are normally split into two files: header (.h) files and source (.cpp) files.

// The source file contains implementation of the class.

// Accesses code defined in a header file.
#include "Calculator.h"

// The function takes two numbers and an operator as parameters based on users' input.
// The double keyword allows the function to handle both decimal and integer math. 
double Calculator::Calculate(double x, char oper, double y)
{
    // The switch statement checks which operator was provided.
    switch (oper)
    {
        // The case corresponding to the provided operation is then executed.
        case '+':
            return x + y;

        case '-':
            return x - y;

        case '*':
            return x * y;

        case '/':
            return x / y;

        // Default is a failsafe in case users enter erroneous input.
        default:
            return 0.0;
    }
}
