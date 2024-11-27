// Michael Haley
// Lab 9F
// This program will count vowels.

#include <iostream>
#include <cctype>
using namespace std;

const int SIZE = 51;

int main()
{
    char theString[SIZE];
    int totalCount = 0, aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;

    cout << "Please enter a string: ";
    cin.getline(theString, SIZE);

    for(int i=0;(theString[i] != '\0');i++)
    {
        theString[i] = tolower(theString[i]);

        if (theString[i] == 'a')
        {
            totalCount++;
            aCount++;
        }
        else if (theString[i] == 'e')
        {
            totalCount++;
            eCount++;
        }
        else if (theString[i] == 'i')
        {
            totalCount++;
            iCount++;
        }
        else if (theString[i] == 'o')
        {
            totalCount++;
            oCount++;
        }
        else if (theString[i] == 'u')
        {
            totalCount++;
            uCount++;
        }
    }

    cout << "You entered: " << theString << endl;
    cout << "Included are: " << totalCount << " vowels, of which " << aCount << " are \"a\", " << eCount << " are \"e\", ";
    cout << iCount << " are \"i\", " << oCount << " are \"o\", & " << uCount << " are \"u\"."; 

    return 0;
}