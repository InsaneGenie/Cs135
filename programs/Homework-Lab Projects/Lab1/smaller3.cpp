/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yee
Assignment: Lab1B

This program asks for 3 numbers and outputs
the smaller of the three numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    int first;
    int second;
    int third;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "Enter the third number: ";
    cin >> third;
    if (first > second)
    {
        if (third > second)
        {
            cout << "The smaller of the three is " << second << endl;
        } 
        else 
        {
            cout << "The smaller of the three is " << third << endl;
        }
    } 
    else 
    { 
        cout << "The smaller of the three is " << first << endl;
    }

}
