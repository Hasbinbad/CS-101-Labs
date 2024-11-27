// Michael Haley
// Lab 6A-2
// This program will demonstrate the use of functions and function prototypes by printing the specified outputs.

#include <iostream>
using namespace std;

// function prototypes
void displaySumLabel();
void displayDifferenceLabel();

int main()
{

int firstNumber, secondNumber, difference, sum;

// prompts for numbers to compute
    cout << "\nPlease enter the first whole number: ";
    cin >> firstNumber;

    cout << "\nPlease enter the second whole number: ";
    cin >> secondNumber;

// calculate the values for the output
    sum = firstNumber + secondNumber;
    difference = firstNumber - secondNumber;

// format and display the output
    cout << endl << firstNumber << " + " << secondNumber << " = " << sum << " ";
    displaySumLabel(); // function call

    cout << endl << firstNumber << " - " << secondNumber  << " = " << difference << " ";
    displayDifferenceLabel(); // function call
    
    cout << endl << endl;

    return 0;

}

// function definitions for the output
void displaySumLabel()
{
    cout << "- This is the sum.";
}

void displayDifferenceLabel()
{
    cout << "- This is the difference:"; // the colon here might be a typo in the lab instructions, or i might misunderstand why it is there.
}