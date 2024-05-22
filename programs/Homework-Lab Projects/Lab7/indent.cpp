#include <iostream>    // For input/output operations
#include <fstream>     // For file input/output operations
#include <string>      // For string manipulation

using namespace std;   // Using the standard namespace

// Function to count the occurrences of a character in a string
int countChar(string line, char c) {
    int count = 0;

    // Iterate through the string and count occurrences of the specified character
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == c) {
            count++;
        }
    }

    // Return the count of occurrences
    return count;
}

// Function to remove leading spaces from a string
string removeLeadingSpaces(string line) {
    int index = 0; // Index of the first non-space character

    // Iterate over the characters in the string until a non-space character is found
    while (isspace(line[index])) {
        index++; // Move to the next character
    }

    // Return the substring starting from the first non-space character
    return line.substr(index);
}

int main() {
    string line;
    int openBlocks = 0;
    int openBrackets = 0;
    int closeBrackets = 0;

    // Read lines from standard input until end of file
    while (getline(cin, line)) {
        string result;
        result = removeLeadingSpaces(line);

        // Check if the first non-space character is a closing bracket '}'
        if (result[0] == '}') {
            // Indent the line based on the number of open blocks (excluding the current block)
            for (int i = 0; i < openBlocks - 1; i++) {
                cout << "\t";
            }
        } else {
            // Indent the line based on the number of open blocks
            for (int i = 0; i < openBlocks; i++) {
                cout << "\t";
            }
        }

        // Print the line with proper indentation
        cout << result << endl;

        // Count the number of opening and closing brackets in the line
        openBrackets = countChar(line, '{');
        closeBrackets = countChar(line, '}');

        // Update the number of open blocks based on the brackets count
        openBlocks += openBrackets;
        openBlocks -= closeBrackets;
    }

    return 0;
}
