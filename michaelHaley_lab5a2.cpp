// Michael Haley
// Lab 5A - 2
// this program will validate that the character a user input at the keyboard is between a and z

#include <iostream>
using namespace std;

// 'a' and 'z' should be defined as constant variables
const char TESTA = 'a';
const char TESTZ = 'z';


int main()
{
    char userInput; //define the test variable

    cout << "Please enter a lower-case letter (a-z): "; // prompt
    cin >> userInput; // read input

// use a logical operator in a while loop to validate the character entered
    while ((userInput < TESTA) || (userInput > TESTZ)) //test for the invalid state
    {
// print out an error message and the character entered if the user enters an invalid character
        cout << endl << "I'm sorry Dave, I'm afraid I can't do that.\n";
        cout << "You entered " << userInput << ".\n\n";
        cout << "Please enter a lower-case letter (a-z): ";
        cin >> userInput; // re-reads input
    }
    
    // print out "Congratulations valid character!" and the character entered  if valid
    cout << endl << "Congratulations valid Character!\n\n";
    cout << "You entered " << userInput << ".";

    return 0;
}


