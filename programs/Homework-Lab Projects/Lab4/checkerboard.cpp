#include <iostream>
using namespace std;

int main()
{
    int w, h;
    cout << "Input width: ";            //input width
    cin >> w;
    cout << "Input height: ";           //input height
    cin >> h;
    cout << endl <<"Shape: " << endl;
    for (int row = 0; row < h; row++)   //for each row
    {
        for (int col = 0; col < w; col++) //for each column
        {
            if (col % 2 == 0 && row % 2 == 0)   //if column and row position are divisible by 2
            {
                cout << "*";                    //display *
            }
            else if ( col % 2 == 1 && row % 2 == 0) //if column is not divisible by 2 and row is divisible by 2
            {
                cout << " ";                        //display " "
            }
            else if ( col % 2 == 0 && row % 2 == 1) //if column is divisible by 2 and row is not divisible by 2
            {
                cout << " ";                        //display " "
            }
            else                                    // if column is not divisible by 2 and row is not divisible by 2
            {
                cout << "*";                        //display *
            }  
       }
        cout << endl;                               // end line for row.
    }
    return 0;
}