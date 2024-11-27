// Michael Haley
// Lab 6A-1
// This program will demonstrate the use of functions to cause a loop to display the specified text.

#include <iostream>
using namespace std;

const int ITERATIONS = 5;

// define the DisplaySchool function
void DisplaySchool()
{

// output from inside of the function
    cout << "I attend Diablo Valley College!\n";

}

int main()
{

// first output outside of function
    cout << "\nCalling function DisplaySchool\n\n";

// create a for loop to repeat the output 5 times
    for (int i = 1; i <= ITERATIONS; i++)
    {

// call a function called DisplaySchool
        DisplaySchool();

    }

// last output outside of function
    cout << "\nBack from Displayschool\n\n";

    return 0;

}

