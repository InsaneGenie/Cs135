/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yee
Assignment: Lab1D

This Program determinds the number of days in the given month and year.
Whether it is a leap year or common year. The corrent number of days will be given.
This program ensures that the number of days in the month corresponds to the corrent 
number in that year. I integrated the Leap.cpp code into this program to help determine the 
type of year it is. 
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    int month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    if (year % 4 != 0)
    {
        if (month <= 7)
        {
            if (month != 2)
            {
                if (month % 2 == 0)
                {
                    cout << "30 days" << endl;
                }
                else 
                {
                    cout << "31 days" << endl;
                }
            }
            else
            {
                cout << "28 days" << endl;
            }
        }
        else
        {
            if (month >= 8)
            {
                if (month % 2 == 0)
                {
                    cout << "31 days" << endl;
                }
                else
                {
                    cout << "30 days" << endl;
                }
            }
        }
        // Common
    } 
    else if (year % 100 != 0)
    {
        if (month <= 7)
        {
            if (month != 2)
            {
                if (month % 2 == 0)
                {
                    cout << "30 days" << endl;
                }
                else 
                {
                    cout << "31 days" << endl;
                }
            }
            else 
            {
                cout << "29 days" << endl;
            }
        }
        else
        {
            if (month >= 8)
            {
                if (month % 2 == 0)
                {
                    cout << "31 days" << endl;
                }
                else
                {
                    cout << "30 days" << endl;
                }
            }
        }
        // Leap
    } 
    else if (year % 400 != 0)
    {
        if (month <= 7)
        {
            if (month != 2)
            {
                if (month % 2 == 0)
                {
                    cout << "30 days" << endl;
                }
                else 
                {
                    cout << "31 days" << endl;
                }
            }
            else 
            {
                cout << "28 days" << endl;
            }
        }
        else
        {
            if (month >= 8)
            {
                if (month % 2 == 0)
                {
                    cout << "31 days" << endl;
                }
                else
                {
                    cout << "30 days" << endl;
                }
            }
        }
        // Common
    } 
    else
    {
        if (month <= 7)
        {
            if (month != 2)
            {
                if (month % 2 == 0)
                {
                    cout << "30 days" << endl;
                }
                else 
                {
                    cout << "31 days" << endl;
                }
            }
            else 
            {
                cout << "29 days" << endl;
            }
        }
        else
        {
            if (month >= 8)
            {
                if (month % 2 == 0)
                {
                    cout << "31 days" << endl;
                }
                else
                {
                    cout << "30 days" << endl;
                }
            }
        }
        // Leap
    }
}