#include <iostream>
#include <fstream> // needed to read the file
#include <cstdlib>
#include <climits>
#include <algorithm>
using namespace std;

int main() 
{
    string startDate, endDate, junk, date; //initializing string variables
    double eastSt, eastEl, westSt, westEl;
    int dateRange = 0;
    cout << "Enter starting date: "; //getting the starting date
    cin >> startDate;
    cout << "Enter ending date: "; //getting the ending date
    cin >> endDate;

    ifstream fin("Current_Reservoir_Levels.tsv"); //opening the file
    getline(fin, junk);
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) //reading the file
    {
        fin.ignore(INT_MAX, '\n'); //ignoring the rest of the lines
        if(date == startDate)
        {
            dateRange = 1; //Once the date is found, set the dateRange variable to 1 at that time.
        }
        if(date > endDate)
        {
            dateRange = 0; //Once the date is found, set the dateRange variable to 0 at that time.
        }

        if(dateRange == 1) //This code only executes if the dateRange variable is set to 1 for those dates in the interval.
        {
            if(eastEl > westEl) 
            {
                cout<< date <<" East "<< endl;
            }
            else if(eastEl < westEl)
            {
                cout << date << " West "<< endl;
            }
            else 
            {
                cout << date << " Equal "<< endl;
            }
        }
    }
    fin.close(); //close the file
    return 0;
}