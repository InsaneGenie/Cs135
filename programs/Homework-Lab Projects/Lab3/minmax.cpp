/*
this program prints the minimum and maximum of eastSt.
*/

#include <fstream> // needed to read the file
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    ifstream file("Current_Reservoir_Levels.tsv"); // reads the tsv file
    string junk;
    string date;
    double eastSt, eastEl, westEl, westSt;
    getline(file, junk);                        // removes the first line from the equation.
    double minimum;
    double maximum;
    int i = 0;
    while(file >> date >> eastSt >> eastEl >> westSt >> westEl) 
    {
        file.ignore(INT_MAX, '\n'); // ignore a blank space in the lines
        if (i == 0)
        {
            minimum = eastSt;   // maximum initialization
            maximum = eastSt;   // minimum initialization
        }
        
        if (minimum > eastSt)   //looping to find the minimum
        
        minimum = eastSt;   

        if (maximum < eastSt)   //looping to find the maximum
        
        maximum = eastSt;
        i++;                // increment i to stop initial iteration
        

    }
    cout << "minimum storage in East basin: " << minimum << endl;
    cout << "maximum storage in East basin: " << maximum << endl;
return 0;
}