// Michael Haley
// Lab 6B-2
// This program will take cents and convert it to dollars and cents.

#include <iostream>
#include <iomanip>
using namespace std;

// function prototype
double normalizeMoney(int);

int main()
{
    int cents;
    double dollars;
    
    cout << "This program will convert a series of entries of cents into a value of dollars and cents.\n"; // orient the user
    cout << "Please enter a whole number of cents (or -1 to exit): "; // duplicate prompt outside of loop. i dont like this, but haven't figured a better way to do it.
    cin >> cents; // read input 
    while (cents != -1) // this loop feels disorganized because i have the initial prompt outside of the loop .. this is all just so i can check if cents = -1 to check if the program should exit or not. it could easily be done with an if/break as i did in 6B-3, but i have a feeling you will like that less.
        {
            // commented out: cout << "You entered " << cents << " cents.\n";
            dollars = normalizeMoney(cents);
            cout << setprecision(2) << fixed;
            cout << cents << " cents equals $" << dollars << endl << endl;
            cout << "Please enter a whole number of cents (or -1 to exit): "; //2nd prompt inside the loop, allowing the check to happen before it loops again
            cin >> cents;
        }
    return 0;
}

double normalizeMoney(int cents)
{
    static int sum = 0; // the local static variable which holds the running total of cents
    // commented out: double dollarsNumerator; // i was getting a funky result in the output if i used sum as a double, but it wouldnt carry the digits corretly as an int. so i found that if i use another variable to convert the data type, that it would print correct and carry the digits.
    double dollars = 0.00;

    sum = sum + cents;

    cout << "\nYou have entered " << sum << " cents so far." << endl;

    dollars = cents / 100.00; //main calculation

    return dollars;
}