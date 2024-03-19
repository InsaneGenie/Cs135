/*
this program reads a tsv file and ask for a date from the user. when the user enters a valid date, the program will print the number of gallons in that day.
*/

#include <fstream> // needed to read the file
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;
int main()
{
    ifstream file("Current_Reservoir_Levels.tsv"); // reads the tsv file
    string user;
    cout << "Enter a date in format DD/MM/YYYY: " << endl; // ask for date from the user.
    cin >> user;
    string junk;
    string date, eastSt, eastEl, westEl, westSt;
    getline(file, junk);                        // removes the first line from the equation.
    while(file >> date >> eastSt >> eastEl >> westSt >> westEl) 
    { 
        if (date == user) // if the user enters a valid date
        {
            cout << "East basin storage: " << eastSt << " Billion Gallons"<< endl; // prints the number of gallons in the east basin storage.
        }
    }
return 0;
}