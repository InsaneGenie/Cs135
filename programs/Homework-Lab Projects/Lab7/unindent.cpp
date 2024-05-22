#include <iostream>
#include <cctype> // isspace
using namespace std;

// Function to remove leading spaces from a string
string removeLeadingSpaces(string line)
{
    int index = 0; //the first non-space character
    // Iterate over the characters in the string until a non-space character is found
    while (isspace(line[index]))
    {
        index++; // Move to the next character
    }
    // Return the substring starting from the first non-space character
    return line.substr(index);
}

int main()
{
    string line;
    // Read lines from standard input until end of file 
    while (getline(cin, line))
    {
        // Output the line with leading spaces removed
        cout << removeLeadingSpaces(line) << endl;
    }
    return 0;
}
