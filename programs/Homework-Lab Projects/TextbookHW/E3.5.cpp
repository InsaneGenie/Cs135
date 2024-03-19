/*
Write a program that reads three numbers and prints “increasing” if they are in
increasing order, “decreasing” if they are in decreasing order, and “neither” otherwise. Here, “increasing” means “strictly increasing”, with each value larger than its
predecessor. The sequence 3 4 4 would not be considered increasing.
*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;
    
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter third number: ";
    cin >> z;

    if (x < y)
    {
        if (y < z)
        {
            cout << "Increasing" << endl;
        }
        else
        {
            cout << "neither" << endl;
        }
    }
    else if (x > y)
    {
        if (y > z)
        {
            cout << "Decreasing" << endl;
        }
        else
        {
            cout << "neither" << endl;
        }
    }
    else
    {
        cout << "neither" << endl;
    }
}
