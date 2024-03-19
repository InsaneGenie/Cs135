#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare a string variable to store user input
    string input;

    // Ask the user to input a line of text
    cout << "Input: ";

    // Read a line of text from the user and store it in 'input'
    getline(cin, input);

    // Print a newline character to separate the input from the output
    cout << endl;

    // Iterate over each character in the input string
    for (char c : input) {
        // Print the character and its ASCII code, casting the character to an integer
        cout << c << " " << static_cast<int>(c) << endl;

        // Print an extra newline character to separate each character's output
        cout << endl;
    }

    return 0;
}