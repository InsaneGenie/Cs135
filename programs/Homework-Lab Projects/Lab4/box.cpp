// This program creates a box according to the size inputed by the user.
// the input asks the user for width and height of the box that they want to display.

#include <iostream>
using namespace std;

int main()
{
    int w, h;                   // width and height
    cout << "Input Width: ";    //input width
    cin >> w;
    cout << "Input Height: ";   // input height
    cin >> h;
    cout << endl <<"Shape: " << endl;   // output shape
    for (int i = 0; i < h; i++) //for each column
    {
        cout << "*";       
        for (int j = 1; j < w; j++)  //for each row
        {
            cout << "*";
        }
        cout << endl; //next row
    }
}