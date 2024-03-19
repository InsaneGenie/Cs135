/*
Write a function sort3(int& a, int& b, int& c) that swaps its three arguments to 
arrange them in sorted order.
*/

#include <iostream>
using namespace std;

// Function to sort three integers in ascending order
void sort3(int& a, int& b, int& c)
{
    // Swap a and b if a is greater than b
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    
    // Swap b and c if b is greater than c
    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    
    // Swap a and b again if a is greater than b (to ensure a <= b <= c)
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main()
{
    // Initialize three integers
    int v = 3;
    int w = 4;
    int x = 1;

    // Call sort3 function to sort v, w, and x
    sort3(v, w, x);

    // Print the sorted integers
    cout << v << " " << w << " " << x << endl;

    return 0;
}