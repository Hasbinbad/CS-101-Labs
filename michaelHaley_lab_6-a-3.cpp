// Michael Haley
// Lab 6A-3
// This program will demonstrate use of functions by calculating net pay from a file input using the returned value of a function.

#include <iostream>
#include <fstream>
using namespace std;

// function prototype
double CalNetPay(double hoursWorkedParameter, double payRateParameter);

int main()
{

// define the file stream objects
    ifstream infile;
    ofstream outfile;

    double hoursWorkedArgument, payRateArgument;

// open the input and output files
    infile.open("Lab6A3Input.txt");
    outfile.open("Lab6A3Output.txt");

// check if input or output files were NOT opened
    if (!infile || !outfile)
    {
    
        cout << "File open failure!";
 
    }

// nest the rest of the program into the else portion, such that it only runs if the file WAS opened    
    else
    {

// get values from the input file, so long as there is another pair of values
        while (infile >> hoursWorkedArgument >> payRateArgument)
        {

// format and output the values to the console
            cout << "Hours worked: " << hoursWorkedArgument << endl;
            cout << "Pay Rate: " << payRateArgument << endl;

// pass the arguments to CalNetPay and display the returned value
            cout << "Net pay: " << CalNetPay(hoursWorkedArgument, payRateArgument) << endl;
            
            outfile << CalNetPay(hoursWorkedArgument, payRateArgument) << endl;

        }

    }

// close the input and output files
    infile.close();
    outfile.close();

    return 0;

}

// define the CalNetPay function
double CalNetPay(double hoursWorkedParameter, double payRateParameter)
{

// calculate and store net pay
    double netPay = hoursWorkedParameter * payRateParameter;
    
// define the return value as the value stored in netPay    
    return netPay;

}