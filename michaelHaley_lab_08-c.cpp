// Michael Haley
// Lab 8-C
// This program will prompt the user for 6 salaries, show how much each person would make with a 10% raise, show the difference of these numbers, and sum that difference for display.

#include <iostream>
using namespace std;

// function prototypes set up to recieve arrays as arguments
double getRaised(double[], double[]);
double getCost(double[], double[], double[]);

// constants
const int EMPLOYEES = 6;
const double RAISE = 1.1;

int main()
{
// defines the arrays
    double salary[EMPLOYEES];
    double raised[EMPLOYEES];
    double differences[EMPLOYEES];
    
// initializes pointer variables to their arrays
    double *salaryPtr = salary;
    double *raisedPtr = raised;
    double *differencesPtr = differences;

// a loop which, after validation, populates the array using the pointer
    for ( int i = 0 ; i < EMPLOYEES ; i++ )
    {
        cout << "Please enter a yearly salary, in dollars, for employee #" << ( i + 1 ) << ": $";
        cin >> *(salaryPtr + i);
        while (*(salaryPtr + i) <= 0)
        {
            cout << "Invalid Entry: Please enter a positive number." << endl;
            cout << "Please enter a yearly salary, in dollars, for employee #" << ( i + 1 ) << ": $";
            cin >> *(salaryPtr + i);
        }
    }

// required function calls
    getRaised(salary, raised);
    getCost(salary, raised, differences);

    return 0;
}

// first required function
double getRaised(double salary[], double raised[])
{
    double *raisedPtr = raised, *salaryPtr = salary; // initializes pointers to their arrays

// a loop to set the values stored in the raised array to the values stored in the salary array, and then multiply those values by 1.1, using pointer notation
    for ( int i = 0 ; i < EMPLOYEES ; i++ )
    {
        *(raisedPtr + i) = (*(salaryPtr + i) * RAISE);
    }

    return 0;
}

// second required function
double getCost(double salary[], double raised[], double differences[])
{
// initializes the vars
    double runningTotal = 0.0, average = 0.0;
    double *raisedPtr = raised, *salaryPtr = salary, *differencesPtr = differences;

// a loop which sets the values stored in the differences array to the value of the differences of the other two arrays, using their pointers. also the running total.
    for ( int i = 0 ; i < EMPLOYEES ; i++ )
    {
        *(differencesPtr + i) = (*(raisedPtr + i) - *(salaryPtr + i));
        runningTotal += *(differencesPtr + i);
    }

    average = (runningTotal / EMPLOYEES); // averaging logic

// a loop which shows the old salary, raised salary, and differences
    for ( int i = 0 ; i < EMPLOYEES ; i++ )
        cout << *(raisedPtr + i) << " - " << *(salaryPtr + i) << " = " << *(differencesPtr + i) << endl;
    
    cout << "The total new cost is: $" << runningTotal << endl; // the final required output
    
    return 0;
}