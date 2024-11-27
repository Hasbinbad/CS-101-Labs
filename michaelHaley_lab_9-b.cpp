// Michael Haley
// Lab 9B
// This program will prompt a user for their first and last name and 2 numbers. then it will print the names and multiply the numbers.

#include <iostream>
#include <iomanip>
#include <string>                                                              // required to work with string objects
using namespace std;



int main()
{
    string name, firstNumInput, secondNumInput;                                // declare the string
    
    cout << "Welcome." << endl;

    cout << "Enter your first and last name: ";
    getline(cin, name);                                                        // using getline with strings

    cout << "Enter the first number: ";
    getline(cin, firstNumInput);

    cout << "Enter the second number: ";
    getline(cin, secondNumInput);

    double firstNum = stod(firstNumInput), secondNum = stod(secondNumInput);      // convert the strings to ints

    cout << "The name you input is " << name << ", and the product of " << firstNum << " and " << secondNum << " is " << fixed << (firstNum * secondNum) << "." << endl;

    return 0;
}