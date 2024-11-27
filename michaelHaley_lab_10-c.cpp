// Michael Haley
// Lab 10C
// This lab will declare a structures to hold shape dimensions, then calculate area and perimeter, then prints that information.

#include <iostream>
using namespace std;

struct Dimensions    { // declare the struct of type dimensions, holding the length and width values
    int length, width;    };

struct Rectangle    { // declare the struct of type rectangle, to hold area, perimeter, and the dimensions var sizes
    int area, perimeter;
    Dimensions sizes;    };

Dimensions getDimensions(); // required function prototypes
int getArea(int, int);
int getPerimeter(const Dimensions &); // changes to pass dimensions
void printIt(const Rectangle &); // included const reference tag

int main()    { // the main function only declares the rectangle var and then calls other functions
    Rectangle myShape;
    myShape.sizes = getDimensions();
    myShape.area = getArea(myShape.sizes.length, myShape.sizes.width);
    myShape.perimeter = getPerimeter(myShape.sizes);
    printIt(myShape);
    return 0;    }

Dimensions getDimensions()    { // prompts user and reads data into tempSizes, which returns to the struct in main
    Dimensions tempSizes;
    cout << "Enter a whole number for length: ";
    cin >> tempSizes.length;
    cout << "Enter a whole number for width: ";
    cin >> tempSizes.width;
    return tempSizes;    }

int getArea(int length, int width)    { // calculates area and returns to main
    int tempArea = (length*width);
    return tempArea;    }

int getPerimeter(const Dimensions &sizes)    { // calculates perimeter and returns to main
    int tempPerimeter = ((sizes.length*2)+(sizes.width*2));
    return tempPerimeter;    }

void printIt(const Rectangle &myShape)    { // receives area and perimeter from main and prints required output.
    cout << "Area: " << myShape.area << endl;
    cout << "Perimeter: " << myShape.perimeter << endl;    }