// Michael Haley
// Lab 9E
// This program will prompt a user for their favorites, concatenate these items, and then print the result

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food, snack, drink, phrase;                                         // string vars
    
    cout << "Enter your favorite food: ";
    cin >> food;
    cout << "Enter your favorite snack: ";
    cin >> snack;
    cout << "Enter your favorite drink: ";
    cin >> drink;

    cout << "Favorite food: " << food << endl;                                 // individual outputs
    cout << "Favorite snack: " << snack << endl;
    cout << "Favorite drink: " << drink << endl;

    phrase = food + " " + snack + " " + drink;                                 // concatenate the inputs
 
    cout << phrase << endl;                                                    // concatenated output


    return 0;
}