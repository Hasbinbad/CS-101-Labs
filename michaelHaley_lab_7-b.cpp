// Michael Haley
// Lab 7-B
// this program will read the contents of an input file to an array, multiply those contents by 2 to a second array, and then sequence through each and print their contents.

#include <iostream>
#include <fstream> // preprocessor to include the fstream, since we need to open a file
using namespace std;

// initialize constant variables used for various math tasks, with the ethic of not hard-coding numbers into equations
const int SIZE = 10; // n value of arrays
const int MULTIPLIER = 2;
const int COMMAPOSITION = 2; // for formatting
const int AMPERSANDPOSITION = 1; // for formatting

int main()
{

// init the arrays
    int mainArray[SIZE];
    int doubledArray[SIZE];

    ifstream fileOpen; // create a filestream object so I can use the various functions included in fstream
    fileOpen.open("michaelHaley_lab_7-b_input.txt"); // opens the required file

// the way we were taught to check if a file is open or not. i might re-write this into a loop which does not exit until the file is actually open, in a professional environment
    if (!fileOpen)
        cout << "File open failure!";

    for(int i = 0; i < SIZE; i++) // this loop sequences through 10 items in the input file and then saves them to the array
        fileOpen >> mainArray[i];

    for(int i = 0; i < SIZE; i++) // this loop sequences through 10 items in the main array, multiplies them by 2, and sets those new values to the other array
        doubledArray[i] = (mainArray[i] * MULTIPLIER);
    
// mainArray output formatted to have correct punctuation
    cout << "\nMain array from input file: ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << mainArray[i];
        if (i < (SIZE - COMMAPOSITION))
            cout << ", ";
        else if (i < (SIZE - AMPERSANDPOSITION))
            cout << ", & ";
        else
            cout << ".\n";
    }

    // doubledArray output formatted to have correct punctuation
    cout << "\nThe data points from the main array multiplied by " << MULTIPLIER << ": ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << doubledArray[i];
        if (i < (SIZE - COMMAPOSITION))
            cout << ", ";
        else if (i < (SIZE - AMPERSANDPOSITION))
            cout << ", & ";
        else
            cout << ".\n\n";
    }

    fileOpen.close(); // close the opened file

    return 0;
}