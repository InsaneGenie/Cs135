// Author: Steven Lai
// Course: CSCI-135
// Instructor: Tong Yee
// Assignment: lab4D


// This program creates a top right triangle, base on the size input.

#include <iostream>
using namespace std;

int main() {
    int sideLength;
    cout << "Input side length: ";
    cin >> sideLength;
    cout << endl;
    for (int i = 0; i < sideLength; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            cout << " ";
        }
        for (int j = 0; j < sideLength - i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
