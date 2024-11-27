// Michael Haley
// Lab 8-A
// This program will use pointers to pass values to equations and logic

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result; 
    int *num1ptr = nullptr, *num2ptr = nullptr; // initialize pointer variables to nullptr

    cout << "Please input the 1st number" << endl; // prompt
    cin >> num1;                                   // read input 
    cout << "Please input the 2nd number" << endl;
    cin >> num2;

// set the value of the pointer variables to the addresses of the int vars
    num1ptr = &num1;
    num2ptr = &num2;

    result = (*num1ptr * *num2ptr); // multiply the values stored in num1 and num2 by using the dereferenced pointer vars
    cout << "the result is " << result << endl;

    if (*num1ptr > *num2ptr) // other logic using dereferenced pointers
        cout << "The 1st number is greater than the 2nd number" << endl;
    else if (*num1ptr < *num2ptr)
        cout << "The 2nd number is greater than the 1st number" << endl;
    else
        cout << "The 2nd number and 1st number are the same" << endl;

    return 0;
}