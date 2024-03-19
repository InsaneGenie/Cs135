
// Author: Steven Lai
// Course: CSCI-135
// Instructor: Tong Yee
// Assignment: lab4D


// This program creates a triangle base on the size input.


#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "Input side length: ";
    cin >> l;
    cout << endl << "Shape: " << endl;
    for (int row = 0 ; row < l ; ++row)
    {
        for(int col = 0; col <= row; ++col)
        {
            cout << "*";
        }
        cout << endl;
    }
}