/*
Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is 
greater than b and otherwise leave a and b unchanged.
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b)
{
    if (a > b)
    {
        swap(a, b);
    }
}

int main()
{
    int u = 2;
    int v = 3;
    int w = 4;
    int x = 1;
    sort2(u, v);
    sort2(w, x);
    cout << u << " " << v << " " << w << " " << x << endl;
    return 0;
}