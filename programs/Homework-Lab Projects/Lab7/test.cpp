#include <iostream>  
#include <fstream>    // For file input/output operations
#include <string>     // For string manipulation

using namespace std;  

// Function to count the occurrences of a character in a string
int countChar(const string& line, char c) 
{
    int count = 0;
    for (char ch : line) 
    {
        if (ch == c) 
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    string line;         // Variable to store each line of the file
    int openBlocks = 0;  // Variable to track the number of open blocks
    while (getline(cin, line)) 
    {  // Read each line from the file
        int openBraces = countChar(line, '{');   // Count opening braces
        int closedBraces = countChar(line, '}'); // Count closing braces

        // Indent the line based on the number of open blocks
        for (int i = 0; i < openBlocks; i++) 
        {
            cout << '\t';
        }
        cout << line << '\n';  // Print the line with proper indentation

        openBlocks += openBraces - closedBraces;  // Update the number of open blocks
    }

    return 0;      // Return success
}
