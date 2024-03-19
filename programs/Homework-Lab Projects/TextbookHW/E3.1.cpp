/*
Write a program that reads an integer and prints whether it is negative, zero, or
positive.
*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x > 0)
    {
        cout << "Positive" << endl;
    }
    else if (x == 0)
    {
        cout << "zero" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }
}