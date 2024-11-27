// Michael Haley
// Lab 7-A
// this progrsam will create two arrays and compare their values

#include <iostream>
using namespace std;

const int SIZE = 4; // initialize the constant to use for the arrays n value

int main()
{

// initializing each array in one line
    int arrayOne[SIZE] = {5, 15, 25, 30};
    int arrayTwo[SIZE] = {2, 15, 20, 30};

    for(int i = 0; i < SIZE; i++) // initialize the for loop to compare the arrays
        if (arrayOne[i] == arrayTwo[i]) // if the values in the arrays at position i are equal
            cout << "equal\n"; // output 1
        else // if the values are not equal
            cout << "not equal\n"; // output 2
                
    return 0;

}
