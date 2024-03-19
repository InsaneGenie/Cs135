#include <iostream>
using namespace std;

int main()
{
    int size; // variable to store the input size
    cout << "Input size: "; // prompt the user to enter the size
    cin >> size; // read the size from the user
    cout << endl;
    // loop through each row
    for (int i = 1; i <= size; i++)            
    {
        // loop through each column in the row
        for (int j = 1; j <= size; j++)         
        {
            // if the column number is equal to the row number or the column number is equal to the size minus the row number plus one
            // print a '*' to form a diagonal line from top-left to bottom-right and from top-right to bottom-left
            if (j == i || j == (size + 1 - i))
                cout << "*";
            else
                cout << " "; // otherwise, print a space
        }
        cout << endl; // move to the next line after printing each row
    }

    return 0; 
}