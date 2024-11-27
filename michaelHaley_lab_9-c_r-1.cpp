// Michael Haley
// Lab 9C rev. 1
// This program will manipulate 2 strings in various ways.
//removed all mention of stringThree, and fixed it per the assignment now i believe, based on feedback

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

const int thee = 3, SIZE = 26, APPENDED = 51;

int main()
{
    char stringOne[APPENDED], stringTwo[SIZE]; // edited to reflect notes
    int i = 0;

// prompt for 2 strings less than 26 char each

    cout << "Please enter the first string of not more than " << (SIZE - 1) << " characters: ";
    cin.getline(stringOne, SIZE);
    
    cout << "Please enter the second string of not more than " << (SIZE - 1) << " characters: ";
    cin.getline(stringTwo, SIZE);

// print the 2 strings
    cout << "Input 1: ";
    for(int i=0;stringOne[i] != '\0';i++)
    {
        cout << stringOne[i];
    }
    cout << endl;

    cout << "Input 2: ";
    for(int i=0;stringTwo[i] != '\0';i++)
    {
        cout << stringTwo[i];
    }
    cout << endl;

// edited per instructions | append the 2nd string to the 1st .. would not have allowed the entire message to display, and because of lack of bounds checking, i was getting strange results
    strcat(stringOne, stringTwo);

// convert the string to lower case
    for(int i=0;i<strlen(stringOne);i++)
    {
        stringOne[i] = tolower(stringOne[i]);
    }

// print the string
   cout << "Input 2 appended to Input 1, and then made lower-case: " << stringOne << endl;

// search for instances of "the" and display message that "the" was found
    if (strstr(stringOne, "the"))

// print out the string at the address of the occurrence
        cout << "The word \"the\" appears here: " << strstr(stringOne, "the") << endl;
    else

// display message that "the" was not found, if not
        cout << "The word \"the\" does not appear." << endl;

    return 0;
}