/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6B

Write a program caesar.cpp with functions implementing Caesar cipher encryption:
Create a function that encrypt a single character.
Create a function that encrypt a string.
*/

#include <iostream>
#include <string>

using namespace std;

// Function to shift a character by a given amount (right shift)
char shiftChar(char c, int rshift)
{
    if (isalpha(c)) // Check if the character is an alphabet character
    {
        char base = islower(c) ? 'a' : 'A'; // Set the base character depending on the case
        return (c - base + rshift) % 26 + base; // Apply the Caesar cipher shift
    }
    else
    {
        return c; // Return the character unchanged if it's not an alphabet character
    }
}

// Function to encrypt a string using the Caesar cipher
string encryptCaesar(string plaintext, int rshift)
{
    string output;
    for (char c : plaintext)
    {
        if (isalpha(c)) // Check if the character is an alphabet character
        {
            output += shiftChar(c, rshift); // Shift the character and append to the output
        }
        else
        {
            output += c; // Append non-alphabet characters to the output without modification
        }
    }
    return output;
}

int main()
{
    string plaintext;
    int shift;

    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    cout << "Enter shift    : ";
    cin >> shift;

    string ciphertext = encryptCaesar(plaintext, shift);

    cout << "Ciphertext     : " << ciphertext << endl;

    return 0;
}
