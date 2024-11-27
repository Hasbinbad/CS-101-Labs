// Michael Haley
// Lab 6B-1
// This program will call a function to calculate the area of a circle, and call another function to calculate the circumference of a circle.

#include <iostream>
using namespace std;

//function prototypes alert the program to the functions below main
double calcCircumference(double);
double calcArea(double);

const double PI = 3.14; // global constant pi

int main()
{
    double radius, circumference, area;

// orient and then prompt the user for radius 
    cout << "This program will compute the circumference and area of circles, given a radiuses. Please enter -1 to exit.\n";
    cout << "Please enter a radius (or -1 to exit): "; // this prompt outside the while loop so the rest of the prompts can come at the end of the while loop. i think a do while would have been better with this structure, which makes me think there was a better way you wanted us to do it.
    cin >> radius;
    while (radius != -1) // loop to collect more than one input, and defines the sentinel as -1
        {
        circumference = calcCircumference(radius); //calls calcCircumference function and saves the value in circumference
        area = calcArea(radius); // calls calcArea function and saves the value in area
        cout << "The area of a circle with radius " << radius << " is " << area << endl; //area output
        cout << "The circumference of a circle with radius " << radius << " is " << circumference << endl << endl; // circumfrerence output
        cout << "Please enter a radius (or -1 to exit): "; //new prompt
        cin >> radius;
        }
}

// calcArea function
double calcArea(double radius)
{
    double area;
    area = PI * (radius * radius);

    return area; // returns area value to main
}

// calcCircumference function
double calcCircumference(double radius)
{
    double circumference;
    circumference = (2 * PI) * radius;

    return circumference; //returns circumference value to main
}