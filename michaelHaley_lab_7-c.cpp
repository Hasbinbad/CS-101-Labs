// Michael Haley
// Lab 7-C

// This program will prompt for 5 ages, store them to an array, call to another function to average them, and then print the result

#include <iostream>
using namespace std;

void doTheAverage(const int [], int); // added const keyword

int main()
{

    const int SIZE = 5;

    int theArray[SIZE]; // create the array

    cout << "\nEnter 5 ages, one at a time: \n"; // orient user

    for(int i = 0; i < SIZE; i++) // this loop prompts and reads employee ages until i !< SIZE
    {
        cout << "Enter age of employee " << (i+1) << ": ";
        cin >> theArray[i];
    }

    doTheAverage(theArray, SIZE); // calls the other function
    
    return 0;

}

void doTheAverage(const int theArray[], int SIZE) // function header accepts the array as called as well as the value stored in the SIZE const int from main .. added the const keyword
{

    int runningTotal = 0; // to store the values in the array
    int average = 0; // to store the average for output

    for (int i = 0; i < SIZE; i++) // this loop sets running total to += the value stored in the i position of the array
        runningTotal += theArray[i];
    
    average = (runningTotal / SIZE); // the calc

    cout << "The average employee age is: " << average << "."; // the output

}
