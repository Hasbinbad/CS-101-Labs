// Michael Haley
// Lab 6A-3
// This program will

#include <iostream>
using namespace std;

// function prototypes
double GetGrades();
double FindAverage(double numGradesArg, double gradeTotalArg);

int main()
{

// call the GetGrades function
    double average = GetGrades();
    char letterGrade;

    if (average >= 90 && average < 100)
        letterGrade = 'A';
    else if (average >= 80 && average < 90)
        letterGrade = 'B';
    else if (average >= 70 && average < 80)
        letterGrade = 'C';
    else if (average >= 60 && average < 70)
        letterGrade = 'D';
    else
        letterGrade = 'F';

//after the function has returned the value and saved it to average
    cout << "\nYour average grade is " << average << ", which entails a letter grade of " << letterGrade << ".";

    return 0;

}

// define the GetGrades function
double GetGrades()
{
    double numGrades, gradeScore, gradeTotal = 0;
    double average; // this var is a different scope as the main average and is totally independent

// prompt user for the number of grades they would like averaged
    cout << "How many grades would you like to find the average for? ";
    cin >> numGrades;

// counter controlled loop to ask for the correct number of grade scores
    for (int i = 1; i <= numGrades; i++)
    {
        cout << "Please enter a whole number for grade " << i << ": ";
        cin >> gradeScore;
        gradeTotal = gradeTotal + gradeScore;
    }

// set the average var in this scope to the returned value from this call to the FindAverage function, passing the total and number of grades as arguments.
    average = FindAverage(gradeTotal, numGrades);
    return average;

}

// define the FindAverage function, it will use 2 parameters from arguments it was passed
double FindAverage(double gradeTotalArg, double numGradesArg)
{
    double average = gradeTotalArg / numGradesArg; // using the parameters to calculate the return value. also, use of a third average function which is also independent of the other two.

    return average; // this is sent to the GetGrades function via the call in that function
}