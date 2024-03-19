#include <iostream>
using namespace std;

int main()
{  
    int l;
    int u;
    cout << " Please enter L: ";
    cin >> l;
    cout << " Please enter U: ";
    cin >> u;
    for(int i = l; i < u; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}