/*
Write a program that asks the user to input
• The number of gallons of gas in the tank
• The fuel efficiency in miles per gallon
• The price of gas per gallon
Then print the cost per 100 miles and how far the 
car can go with the gas in the tank.
*/
#include <iostream>
using namespace std;

int main()
{
    double gallons; 
    double efficiency;
    double price;

    cout << "Enter the number of gallons of gas in the tank: ";
    cin >> gallons;
    cout << "Enter the fuel efficiency in miles per gallon: ";
    cin >> efficiency;
    cout << "Enter the price of gas per gallon : $";
    cin >> price;

    double costPer100Miles = (100 / efficiency) * price;
    double distance = gallons * efficiency;

    cout << "Cost per 100 miles: $" << costPer100Miles << endl;
    cout << "Distance the car can go: " << distance << endl;

}