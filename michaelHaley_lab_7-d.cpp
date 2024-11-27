// Michael Haley
// Lab 7-D

// This program will prompt for up to 100 grades and then calculate their average.

#include <iostream>
#include <iomanip>
using namespace std;

// prototypes for required functions
void captureGrades(double [], const int, int&);
double calculateAverage(const double [], int);

int main()
{
    const int SIZE = 100; // max allowable size for this array
    double gradesInput[SIZE] = {0}; // define the array
    int gradeCount = 0;

    captureGrades(gradesInput, SIZE, gradeCount); // call to the capturing function
    
    cout << fixed << setprecision(2) << "\nYour average grade is " << calculateAverage(gradesInput, gradeCount) << "."; // final output from the returned value
    
    return 0;

}

void captureGrades(double gradesInput[], const int SIZE, int &gradeCount) // function header
{
    double test = 0.0;
    cout << "Please begin by entering a grade (0-100), or -1 to exit: "; //prompt
    cin >> test; //read
    for (int i = 0; i < SIZE; i++) // this for loop is just to counter-control the loop for 100 entries
    {
        while (test != -1) // this loop checks if there is a sentinel or a incorrect number entered 
            if (test < -1) // incorrect negative number selected
            {
                cout << "Please enter a valid grade (0-100), or -1 to exit: "; // prompt
                cin >> test; //read
            }
            else // correct positive number selected
            {
                gradesInput[gradeCount] = test; // set the value of array element at position gradeCount to the value stored in test
               
                gradeCount++; // increments the main counter
               
                cout << "\nPlease enter another grade or -1 to exit: "; // continuing prompt
                cin >> test; // read
            }
    }
}

double calculateAverage(const double gradesInput[], int gradeCount) // header for calculating functiuon
{
    double runningTotal = 0.0, average = 0.0;
    
    for (int i = 0; i <= gradeCount; i++) // sequences through gradesInput, and sums them in runningTotal 
    {
        runningTotal += gradesInput[i];
    }
   
    average = (runningTotal / gradeCount); // the main averaging calculation

    return average; // returns the double to main

}