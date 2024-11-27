// Michael Haley
// Lab 5b1
// This program will keep a running total and then display the average.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int ITERATIONS = 5; // defines the constant integer which will control iteration

int main()
{
    string separatorLine = "---------------------------------------------------------------------------"; // defines a formatting line as a string for repeated use.
    int success, userInput; // defining integer vars
    double average, runningTotal = 0; //defining double vars, initializing runningTotal so it doesn't pick up a weird value from memory.

    cout << setprecision(6) << separatorLine << endl; // setting the required position, and the format line.
    cout << "Welcome to the Running-Total Simutabulator 9001" << endl; // welcome text
    cout << "Correct use of this program involves the input of 5 positive whole numbers." << endl; // educate the user on use
    cout << separatorLine << endl; //format line
    
    for (success = 1; success <= ITERATIONS; success++) //setting up the for loop to run until it has played 5 times
    {
        cout << "Please input a positive whole number (" << success << "/" << ITERATIONS << "): "; // prompt
        cin >> userInput; //reads input
        runningTotal += userInput; // sets the running total to its current value plus the inputted value
    }

    average = (runningTotal / ITERATIONS); // after the loop, this creates the average of the total over the number of times the loop was run.

// these next lines are the output
    cout << separatorLine << endl;
    cout << "The total (" << runningTotal << ") ";
    cout << "is divided by the number of entries (" << ITERATIONS << ") ";
    cout << "for an average of: " << average << endl;
    cout << separatorLine << endl << endl;

    return 0;
}