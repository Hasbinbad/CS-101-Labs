// Michael Haley
// Lab 8-B
// This program will display data of a weeks temperatures using pointer and array notation, and then average the data

#include <iostream>
#include <string> // necessary to use parallel arrays to label each days data
using namespace std;

int main()
{
    const int WEEK = 7;
    double runningTotal = 0.0, averageDailyTemp = 0.0;
    double week1Oct[WEEK] = { 75.2 , 76.8 , 80.2 , 90 , 85.7 , 84.3 , 70.3 }; // init the array with the specified data
    string days[WEEK] = { "Sunday" , "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" }; // parallel array of labels
    double *woptr = week1Oct; // init the pointer var to the address of the array

    cout << endl;

    for(int i = 0; i < WEEK; i++)
    {
        cout << *(woptr + i) << " "; // the dereferenced variable added to its subscipt used to retrieve the values
    }

    cout << endl << endl;
    
    for(int i = 0; i < WEEK; i++)
    {
        cout << days[i] << ": " << week1Oct[i] << endl; // this outputs the same data, but uses a parallel array to store labels, and the data is accessed using array notation
    }

// develop a running total and average for the data
    for(int i = 0; i < WEEK; i++)
    {
        runningTotal += week1Oct[i];
        averageDailyTemp = (runningTotal / WEEK);
    }

    cout << endl << "Average Daily Temperature: " << averageDailyTemp << " degrees farenheit." << endl << endl; //final output

    return 0;
}