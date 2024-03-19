/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yee
Assignment: Lab1c

This program determines the type of year that is entered. whether it is 
a leap or a common year.
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter year: ";
    cin >> x;

    if (x % 4 != 0)
    {
        cout << "Common year" << endl;
    } 
    else if (x % 100 != 0)
    {
        cout << "Leap year" << endl;
    } 
    else if (x % 400 != 0)
    {
        cout << "Common year" << endl;
    } 
    else
    {
        cout << "Leap year" << endl;
    }
}