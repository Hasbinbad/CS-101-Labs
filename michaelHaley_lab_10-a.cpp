// Michael Haley
// Lab 10A
// This lab will take in data about the users favorite date, display that date and todays date, and then report if we are in the users favorite month.
// I have mimic'd some style things here from sources I have seen in my own study with whitespace to condense code without making it less readable.
// I would appreciate a comment about it, especially in the switch.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char menuMonth; // menu selection

    struct Date    { // define the structure type
        int day, year; // ints in the struct
        string month;    }; // a string in the struct

    Date today = { 11, 2024, "November" }; // initialize variable today of type Date to the values i entered
    Date favorite; // declare variable favorite of type Date

    cout << "Welcome to the Date comparator: You will be prompted three times to enter data about your favorite date." << endl << endl; // orient
    cout << "(1/3) Favorite Year (Ex. 1984): "; // prompt
    cin >> favorite.year; // read

// I found this entry problematic since there are multiple legitimate ways to enter a month, along with common misspellings and capitalization.
// Importantly, this was the data to be later tested. I kept it handled as a string for comparison.

    cout << "\n(2/3) Select your favorite month:" << endl; // orient to menu
    cout << left << setw(15) << "a - January" << setw(15) << "b - February" << setw(15) << "c - March" << setw(15) << "d - April" << endl;
    cout << setw(15) << "e - May" << setw(15) << "f - June" << setw(15) << "g - July" << setw(15) << "h - August" << endl;
    cout << setw(15) << "i - September" << setw(15) << "j - October" << setw(15) << "k - November" << setw(15) << "l - December" << endl;
    cout << "Selection (a-l): "; // prompt
    cin >> menuMonth; // read

    while ( (menuMonth < 'a') || (menuMonth > 'l') )    { // validate menu entry
        cout << "Invalid entry, please enter a lower-case character between a and l." << endl << endl;
        cout << "(2/3) Select your favorite month:" << endl;
        cout << left << setw(15) << "a - January" << setw(15) << "b - February" << setw(15) << "c - March" << setw(15) << "d - April" << endl;
        cout << setw(15) << "e - May" << setw(15) << "f - June" << setw(15) << "g - July" << setw(15) << "h - August" << endl;
        cout << setw(15) << "i - September" << setw(15) << "j - October" << setw(15) << "k - November" << setw(15) << "l - December" << endl;
        cout << "Selection (a-l): ";
        cin >> menuMonth;   }

    switch(menuMonth)   { // translate menu entry into string data for comparison
        case 'a': favorite.month = "January";
            break;
        case 'b': favorite.month = "February";
            break;
        case 'c': favorite.month = "March";
            break;
        case 'd': favorite.month = "April";
            break;
        case 'e': favorite.month = "May";
            break;
        case 'f': favorite.month = "June";
            break;
        case 'g': favorite.month = "July";
            break;
        case 'h': favorite.month = "August";
            break;
        case 'i': favorite.month = "September";
            break;
        case 'j': favorite.month = "October";
            break;
        case 'k': favorite.month = "November";
            break;
        case 'l': favorite.month = "December";
            break;  }

    cout << "\n(3/3) Favorite Day (Ex. 31): "; // prompt
    cin >> favorite.day; // read

// formatted date outputs
    cout << setw(25) << "\nToday's date: " << today.month << " " << today.day << ", " << today.year << "." << endl;
    cout << setw(25) << "Your favorite date: " << favorite.month << " " << favorite.day << ", " << favorite.year << "." << endl;

    if( favorite.month == today.month ) // compares the months stored inside the favorite and today Date type variables
        cout << "We are in your favorite month." << endl << endl;
    else
        cout << "This is not your favorite month." << endl << endl;

    return 0;
}