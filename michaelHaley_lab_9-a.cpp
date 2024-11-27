// Michael Haley
// Lab 9A
// This program will take input of characters, make determination about what kind of input it is, and then print required output.

#include <iostream>
#include <cctype>                                                           // required to use C++ Library Character Testing Functions
using namespace std;

int main()
{
    char input;

    cout << "Welcome to the character tester." << endl;                     // orient
    cout << "Please enter a character or ~ to exit: ";                      // prompt
 
    cin.get(input);                                                         // read

    while(input != '~')                                                     // loop until the sentinel ~ is entered. test for required char types.
    {
        cout << "You entered " << input << ", and ";

        if (ispunct(input))
        {
            cout << input << " is punctuation." << endl;
        }
        else if (isdigit(input))
        {
            cout << input << " is a digit." << endl;
        }
        else if (isupper(input))
        {
            cout << input << " is an upper-case letter." << endl;
        }
        else if (isspace(input))
        {
            cout << input << " is a whitespace character." << endl;
        }
        else
        {
            cout << input << " is a lower-case letter." << endl;
        }

        cout << "Please enter another character or ~ to exit: ";            // loop prompt
        
        cin.ignore();                                                       // ignore the \n character in the keyboard buffer from the previous cin.get
        cin.get(input);                                                     // read
    }

    return 0;
}