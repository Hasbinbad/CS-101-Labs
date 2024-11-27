// Michael Haley
// Lab 9D
// This program will prompt the user for 2 strings, compare them, and then order them.

#include <iostream>
#include <cstring>                                                             //required to use strcmp
using namespace std;

const int SIZE = 80;                                                           // because you do not like implicit array sizing

int main()
{
    char stringOne[SIZE], stringTwo[SIZE];
    
    cout << "Please enter string 1: ";
    cin.getline(stringOne, SIZE);

    cout << "Please enter string 2: ";
    cin.getline(stringTwo, SIZE);

    if (strcmp(stringOne, stringTwo) == 0)                                     // if tree uses strcmp to compare the cstrings
        cout << "Equal Strings" << endl;                                       // edited required output per instructions.

    else if (strcmp(stringOne, stringTwo) > 0)
        cout << "String 1 comes after String 2" << endl;

    else
        cout << "String 2 comes after String 1" << endl;

    return 0;
}