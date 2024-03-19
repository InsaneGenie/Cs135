/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yee
Assignment: Lab2A

This program asks for a number between 0 - 100 for an input. 
After that, the program prints the squre of that number. 
This was done using the while loop and a new library called math.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Please enter an integer: ";
    cin >> n;
    while (1 > n || n > 99)
    {
        cout << "Please re-enter: ";
        cin >> n;
    }
    cout << "Number squared is " << pow(n,2) << endl;
    return 0;
}