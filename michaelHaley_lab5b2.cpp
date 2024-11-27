// Michael Haley
// Lab 5b2
// This program will return an average time in hours which students spent programming over a three day period.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double DAYS = 3.0; // the number of days, defined as a constant

int main()
{
    string separatorLine = "-----------------------------------------------------------------------------------------------"; // setting up format line
    int numStudents; // define variable to collect user data

// these next lines are the introduction and formatting lines
    cout << endl << separatorLine << "\n\tWelcome to the Future Success Predictor - STUDENT EDITION\n" << separatorLine;
    cout << "\nThis tool will predict the future success of several students based upon their current efforts.\n\n";
    cout << "Higher program outputs indicate higher chances of success!\n" << separatorLine << endl;
    
    cout << "About how many students would you like to me to predict success? "; // prompt to collect # of students, set this number to the countervar
    cin >> numStudents; // reads input

    for (int studentCounter = 1; studentCounter <= numStudents; studentCounter++) // outer loop to repeat the entire inner loop for each student
    {
        double total = 0, average = 0; //initializes double vars for the modified time values
        for (int dayCounter = 1; dayCounter <= DAYS; dayCounter ++) // inner loop to repeat time query for each of three days
        {
            double time = 0; // init double var for the raw time value
            cout << "For student " << studentCounter << " on day " << dayCounter << ", enter a time in hours spent programming (use decimal format): "; // prompt
            cin >> time; // reads user input
            total += time; // increments the total value to equal the current total value plue the time value
        }
        average = (total / DAYS); //computes the average value for each student.
// the next line is the program output, containing the requested information.
        cout << "The average time spent programming over " << DAYS << " days for student " << studentCounter << " is " << setprecision(1) << fixed << average << " hours.\n\n";
    }
    return 0;
}

