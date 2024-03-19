/*
Write a function
    string middle(string str)
That returns a string containing the middle character in str if the length of str is odd,
or the two middle characters if the length is even. For example, middle("middle")
Returns "dd".
*/
#include <iostream>
#include <string>

using namespace std;

string middle(string str)
{
    if (str.length() % 2 == 0)
    {
        return str.substr(str.length() / 2 - 1, 2);
    }
    else
    {
        return str.substr(str.length() / 2, 1);
    }
}

