#include <iostream>
using namespace std;

int main() 
{
    int width, height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;

    // Check if the height is too large for the given width to create a trapezoid
    if (height * 2 - 1 > width) 
    {
        cout << "Impossible shape!" << endl; // Print error message
    } 
    else 
    {
        cout << endl << "Shape: " << endl; 
        int spaces = 0;
        int stars = width;

        // Loop through each row of the trapezoid
        for (int i = 0; i < height; i++) 
        {
            // Print leading spaces
            for (int j = 0; j < spaces; j++) 
            {
                cout << " ";
            }
            // Print stars
            for (int j = 0; j < stars; j++) 
            {
                cout << "*";
            }
            cout << endl; // Move to the next line
            spaces += 1; // Increment spaces for the next row
            stars -= 2; // Decrement stars for the next row
        }
    }

    return 0;
}
