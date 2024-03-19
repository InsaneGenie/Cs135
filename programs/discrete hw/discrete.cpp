#include <iostream>
using namespace std;

int main()
{
    int s = 0;
    for (int i = 1 ; i < 19 ; i++)
    {
        int t = 0;
        for (int j = i + 2; j < 21 ; j++)
        {
            t++;
            s++;
        }
        cout << t << endl;
    }
    cout << s << endl;
}

