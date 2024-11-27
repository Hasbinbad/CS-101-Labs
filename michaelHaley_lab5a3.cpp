// Michael Haley
// Lab 5A - 3
// this program will display a menu of beverages, collect the users order, display the costs, and a total.

#include <iostream>
#include <iomanip> //needed for setprecision(2) and fixed
using namespace std;

const double COFFEEPRICE = 1.20, TEAPRICE = 0.55, HOTCHOCOLATEPRICE = 2.25, CAPPUCCINOPRICE = 3.50; // setting the prices

int main()
{
// assigning variables for the individial subtotals and the total
    double coffeeTotal, teaTotal, hotChocolateTotal, cappuccinoTotal; //corrected the scope of these variables.
    double total = 0.00;
    char userInput; // defining vars for the menu choices

// initializing integer vars for # of cups and # of cups selected. before i had 0 assigned to these variables, i was getting really strange results
// with the cout on teaCups (a number i did not ever input). i sought help about it, learned that "ambiguity" can cause strange results in compilers,
// and my strange results fixed when i initialized these vars as zero.
    int coffeeCups = 0, coffeeSelect = 0, teaCups = 0, teaSelect = 0, hotChocolateCups = 0, hotChocolateSelect = 0, cappuccinoCups = 0, cappuccinoSelect = 0;

    do // setting up the do while loop
    {  
// the menu selections. this will be revisited on subsequent passes through the loop. EDITED to un-hardcode the prices.
        cout << "A: Coffee " << COFFEEPRICE << endl << "B: Tea " << TEAPRICE << endl;
        cout << "C: Hot Chocolate " << HOTCHOCOLATEPRICE << endl << "D: Cappuccino " << CAPPUCCINOPRICE << endl << endl;
        
        cout << "Please make a valid selection (A, B, C, or D, or E to Exit): "; //prompt
        cin >> userInput; // beverage selection

        switch(userInput) //setting up the switch for the menu choices
        {
            case 'A': // user entered A
            {
                cout << endl  << "You selected Coffee, how many cups would you like? "; //prompt
                cin >> coffeeSelect; // quantity selection
// sets the new value of coffeeCups to the value of the selection plus the value of previous selections                
                coffeeCups = (coffeeCups + coffeeSelect);
// sets the new value of coffeeTotal to be the selection price plus the value of all previous selection prices                
                coffeeTotal = (coffeeTotal + (coffeeSelect * COFFEEPRICE));
// report price for selection
                cout << endl << "For " << coffeeCups << " cups of coffee, you owe $" << setprecision(2) << fixed << coffeeTotal << "."; //
                break; //break out of the A case, falling back in because of the do while
            }
            case 'B': // user entered B
            {
                cout << endl  << "You selected Tea, how many cups would you like? "; //prompt
                cin >> teaSelect; // quantity selection
// sets the new value of teaCups to the value of the selection plus the value of previous selections                
                teaCups = (teaCups + teaSelect);
// sets the new value of teaTotal to be the selection price plus the value of all previous selection prices                
                teaTotal = (teaTotal + (teaSelect * TEAPRICE));
// report price for selection
                cout << endl << "For " << teaCups << " cups of tea, you owe $" << teaTotal << ".";
                break; //break out of the B case, falling back in because of the do while
            }
            case 'C': // user entered C
            {
                cout << endl  << "You selected Hot Chocolate, how many cups would you like? "; //prompt
                cin >> hotChocolateSelect; // quantity selection
// set the new value of hotChocolateCups to the value of the selection plus the value of previous selections                
                hotChocolateCups = (hotChocolateCups + hotChocolateSelect);
// set the new value of hotChocolateTotal to be the selection price plus the value of all previous selection prices                
                hotChocolateTotal = (hotChocolateTotal + (hotChocolateSelect * HOTCHOCOLATEPRICE));
// report price for selection
                cout << endl << "For " << hotChocolateCups << " cups of Hot Chocolate, you owe $" << hotChocolateTotal << ".";
                break; //break out of the C case, falling back in because of the do while
            }
            case 'D': // user entered D
            {
                cout << endl  << "You selected Cappuccino, how many cups would you like? "; //prompt
                cin >> cappuccinoSelect; // quantity selection
// set the new value of cappuccinoCups to the value of the selection plus the value of previous selections                
                cappuccinoCups = (cappuccinoCups + cappuccinoSelect);
// set the new value of CappuccinoTotal to be the selection price plus the value of all previous selection prices                
                cappuccinoTotal = (cappuccinoTotal + (cappuccinoSelect * CAPPUCCINOPRICE));
// report price for selection
                cout << endl << "For " << cappuccinoCups << " cups of Cappuccino, you owe $" << cappuccinoTotal << ".";
                break; //break out of the D case, falling back in because of the do while
            }
// not sure why i had that while loop. seemed like i needed it at the time .. i just removed it, and it works.            
            case 'E': // user entered E
            {
                cout << endl << "Please pay the due amount. "; // the program exits with a sign off reminding you to pay what you owe.
                break; //break out of the E case, falling back in because of the do while
            }
            default: // the default case handles invalid inputs
            {
                
                cout << endl << "Invalid Choice. You entered " << userInput << ".\n"; // lets the user know how they erred.
                break; // breaks out of the while loop to re enter the switch
                
            }
        }
        total = (coffeeTotal + teaTotal + hotChocolateTotal + cappuccinoTotal); // adds up the subtotals
// report the running total at the end of each do while loop until E is selected
        cout << endl << "The total owed for " << coffeeCups << " cup(s) of Coffee, ";
        cout << teaCups << " cup(s) of Tea, " << hotChocolateCups << " cup(s) of Hot Chocolate, and ";
        cout << cappuccinoCups << " cup(s) of Cappuccino is $" << total << endl << endl;
    }
    while (userInput != 'E'); // This line is what stops the program when the user enters E for Exit.
    
    return 0;
}