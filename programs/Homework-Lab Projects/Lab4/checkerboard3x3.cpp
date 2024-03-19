// Author: Steven Lai
// Course: CSCI-135
// Instructor: Tong Yee
// Assignment: lab4g


// This program creates a 3 by 3 checkerboard pattern.

#include <iostream>
using namespace std;

int main() 
{
    int width, height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << endl << "Shape: " << endl;
    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < width; j++) 
        {
            // Determine if the current square should be filled or empty
            bool fill = ((i / 3) % 2 == 0 && (j / 3) % 2 == 0) || ((i / 3) % 2 == 1 && (j / 3) % 2 == 1);
            cout << (fill ? "*" : " ");
        }
        cout << endl;
    }

    return 0;
}