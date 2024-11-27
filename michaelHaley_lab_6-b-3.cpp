// Michael Haley
// Lab 6B-3
// This program will calculate miles per hour given distance and time.

#include <iostream>
#include <iomanip>
using namespace std;

// function prototype with 3 parameters, the last of which is a reference variable
void calculateMilesPerHour(double, double, double &);

int main()
{
    double miles = 0, hours = 0;
    double milesPerHour = 0;

//required formatting
    cout << setprecision(2) << fixed;
    cout << "This program will calculate rate of speed in MPH (Miles Per Hour), given distance and time.\n\n"; // orient the user
    
        cout << "Please enter the miles travelled or -1 to exit: "; // initial prompt of pre-test while loop
        cin >> miles; // read input

// begin a loop to ask for the miles and hours from the user, until they choose to stop
    while (miles != -1)
    {
        // commented out: if (miles == -1) break; // I know you don't like ifs and breaks, but every other version of this program using conditional while loops that i could come up with had some sort of issue. This is the only way i could get it to exit immediately when a chosen sentintel (-1) is entered. 6B-2 has an example of the most elegant I was able to get a similar loop, but it has code duplication. Not at all sure what I am missing here.
        cout << "Please enter the hours spent travelling: ";
        cin >> hours;
        calculateMilesPerHour(miles, hours, milesPerHour); // calls the function
        cout << "Rate: " << milesPerHour << " MPH.\n\n"; // prints the output, carried by reference, from the function
        cout << "Please enter the miles travelled or -1 to exit: "; // duplicated prompt inside loop
        cin >> miles; // read input from inside loop
    }
    
    return 0;

}

//function definition
void calculateMilesPerHour(double miles, double hours, double &milesPerHour)
{
    milesPerHour = (miles / hours); // the calc
}

