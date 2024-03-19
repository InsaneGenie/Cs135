/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yee
Assignment: Lab1A

This program asks for 2 numbers and outputs
the smaller of the two numbers.
*/





#include <iostream>
using namespace std;

int main()
{
    int first_number;
    int second_number;
    cout << "Enter the first number: ";
    cin >> first_number;
    cout << "Enter the second number: ";
    cin >> second_number;
    
    if (first_number > second_number)
    {
        cout << "The smaller of the two is " << second_number << endl;
    } 
    else 
    {
        cout << "The smaller of the two is " << first_number << endl;
    }
    
}