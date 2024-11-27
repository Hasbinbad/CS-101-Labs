// Michael Haley
// Lab 10B
// This lab will create a structure to store information for 3 people, calculate taxes owed, and then print all the info.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int NUM = 3; // # of array elements

int main()    {

    struct PersonalTaxes    { // define a struct of type PersonalTaxes with a string and 3 floats
        float AnnualSalary, TaxRate, TaxesOwed;
        string Name;    };
    
    PersonalTaxes threePeople[NUM] = { 0.0 , 0.0 , 0.0 }; // declare an array called threePeople of type PersonalTaxes with 4 elements

    cout << "Please have three users ready to enter their names, annual salaries, and tax rates." << endl << endl; // orient

    for(int i=0;i<NUM;i++)    { // loop controlled prompt and reading in of data to the threePeople
        cout << "Greetings user " << (i+1) << ", please enter your name: ";
        getline(cin, threePeople[i].Name);
        cout << threePeople[i].Name << ", please enter your Annual Salary (no punctuation, Ex. 70000): ";
        cin >> threePeople[i].AnnualSalary;
        cout << threePeople[i].Name << ", please enter your Tax Rate (decimal, Ex. 15% = 0.15 or .15): ";
        cin >> threePeople[i].TaxRate;
        cin.ignore();
        threePeople[i].TaxesOwed = (threePeople[i].AnnualSalary * threePeople[i].TaxRate);    } // calculation
    
    for(int i=0;i<NUM;i++) // loop controlled required output.
        cout << fixed << setprecision(2) << threePeople[i].Name << ", with a salary of $" << threePeople[i].AnnualSalary << " and a rate of " << threePeople[i].TaxRate << ", you owe: $" << threePeople[i].TaxesOwed << endl;

    return 0;    }