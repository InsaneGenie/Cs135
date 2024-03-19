/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yee
Assignment: E1.7

This program writes 3 names in 3 different lines.
*/


#include <iostream>
using namespace std;

int main()
{
    string name1;
    string name2;
    string name3;

    cout << "Enter name one: ";
    cin >> name1;
    cout << "Enter name two: ";
    cin >> name2;
    cout << "Enter name three: ";
    cin >> name3;
    cout << name1 << endl << name2 << endl << name3 << endl;
}