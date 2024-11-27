// Michael Haley
// Lab 5A - 1
// this program will display a loop in action with a counter of 6.

#include <iostream>
using namespace std;

int main()
{
    int Num; // define an int variable called num.

    Num = 6; // assign num a value of 6

// make a while loop that will repeat 6 times because it uses the num variable
while (Num > 0)
    {
        cout << "Loops in Action " << Num << endl; // write a statement to print "Loops in Action" and the current value of num

        --Num; // use decrement operator to ensure the loop is not infinite.
    }
return 0;
}