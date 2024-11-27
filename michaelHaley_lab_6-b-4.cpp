// Michael Haley
// Lab 6B-4
// This program will calculate the average of a specified number of grades, and then print the average and a corresponding letter grade.


#include <iostream>
#include <iomanip>
using namespace std;

// function prototype with reference var
void calculateAverage(double, double, double &);

int main()
{
    int grade = 0;
    char letterGrade;
    double gradeQuantity = 0, gradeTotal = 0, gradeAverage = 0;

    cout << "This program will calculate and display a letter grade and an average score derived from input grades.\n"; // orient the user
    cout << "How many grades would you like to include in your average? "; // prompt
    cin >> gradeQuantity; // read input

    for (int i = 1; i <= gradeQuantity; i++) // counter controlled loop so the user can enter how many grades to average
    {    
        cout << "Enter grade " << i << ": "; // prompt
        cin >> grade; // read input
        gradeTotal = gradeTotal + grade; // running total
    }

// call the function to calc gradeAverage
        calculateAverage(gradeTotal, gradeQuantity, gradeAverage);

// if / else if logic to assign letterGrade
    if (gradeAverage >= 90)
        letterGrade = 'A';
    else if (gradeAverage >= 80)
        letterGrade = 'B';
    else if (gradeAverage >= 70)
        letterGrade = 'C';
    else if (gradeAverage >= 60)
        letterGrade = 'D';
    else
        letterGrade = 'F';

// the main output string
    cout << "Your GPA is " << setprecision(2) << fixed << gradeAverage << "which corresponds to a letter grade of " << letterGrade << ".";

}

// function defintion including the reference variable
void calculateAverage(double gradeTotal, double gradeQuantity, double &gradeAverage)
{
    gradeAverage = gradeTotal / gradeQuantity; // the calc which sets gradeAverage (the ref var)
}