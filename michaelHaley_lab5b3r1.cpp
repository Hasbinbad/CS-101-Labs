// Michael Haley
// Lab 5b3
// This program will read a price and quantity from an input file, calculate the bill, and print that to an output file and the screen.

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile; // defines an ifstream object called infile
    ofstream outfile; // defines an ofstream object called ofile
    string separatorLine = "-------------------------------------------------------------------------------------"; // format line
    double price, total; // define double vars for prices
    int quantity; // define a var for quant of things

    infile.open("Lab5B3Input.txt"); // opens the input file stream
        if (!infile) // this checks to see if the file was actually opened, and if not outputs an error message to the console
        {
            cout << "File open failure!"; // error message
        }
        else // nested the rest of the program inside the else. i did not understand before r1 that this was the purpose of the assignment, but it was an easy fix!
        {
            infile >> price >> quantity; // reads the values from the input file
            infile.close(); // closes the input file. i tried to check to make sure it was closed, but couldnt reverse the process

            total = (price * quantity); // calculates the main output value

// console output including the required formatting and the $ symbol where appropriate.
            cout << setprecision(2) << fixed << endl << separatorLine << "\nTo whom it may concern,\n\nYou have ordered " << quantity << " Thingies at a cost of $" << price << " each.\n";
            cout << "Therefore, the total amount due is $" << total << " or your immortal soul, at your discretion.\n\nSincerely,\nOld Scratch\n" << separatorLine << endl << endl;
    
            outfile.open("Total-Bill.txt"); //oppens the output file stream
                if (!outfile) // this checks to see if the file was actually opened, and if not outputs an error message to the console
                {
                    cout << "File open failure!"; //error message
                }
                else // again, an easy fix to nest the intended outputs as the else statement.
                {

// file write output including the required formatting and the $ symbol where appropriate.        
                    outfile << separatorLine << "\nTo whom it may concern,\n\nYou have ordered " << quantity << " Thingies at a cost of $" << price << " each.\n";
                    outfile << "Therefore, the total amount due is $" << total << " or your immortal soul, at your discretion.\n\nSincerely,\nOld Scratch\n" << separatorLine;
                    outfile.close(); // closes the output file
                }
        }

    return 0;

}