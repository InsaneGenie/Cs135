/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yee
Assignment: Lab2d

This Program create an array up to 60 and fills each element consecutively with the fibonacci numbers all the way up to 60.
The first two elements of the array are 0 and 1.
This is done by using the for loop and adding the previous two numbers together for the next element on the array. 
I also noticed that as the numbers increase up to 1 billion, the value diverges from the actual result and becomes a negative number. 
*/

#include <iostream>
using namespace std;

int main()
{
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < 60; i++)
    {
        cout << fib[i] << endl;
    }
    return 0;
}