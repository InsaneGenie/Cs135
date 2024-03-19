/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yee
Assignment: Lab2c

This Program create an array of 10 elements. Each element is initialized to 1. It then asks the user to input a number for index and value. 
If the index is valid (between 0 - 9), the value is updated within the array. If the index is invalid, the program breaks out of the loop. 
Preventing the program from updating the array further.
*/

#include <iostream>
using namespace std;

int main()
{
    int myData[10];
    int i;
    int v;
    for (int i = 0; i < 10; i++)
        {
            myData[i] = 1;
        }
    do 
    {
        for (int i = 0; i < 10; i++)
        {
            cout << myData[i] << " ";
        }
        cout << endl;
        cout << "Enter index: ";
        cin >> i;
        cout << "Enter value: ";
        cin >> v;
        if (i < 10 && i >= 0)
        {
            myData[i] = v;
        }
        else
        {
            cout << "Index out of range. Exit." << endl;
        }
    }
    while (i < 10 && i >= 0);
}
