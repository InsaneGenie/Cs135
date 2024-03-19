/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6C

Write a program vigenere.cpp. It should contain a function encryptVigenere implementing this cipher:

string encryptVigenere(string plaintext, string keyword);
You may assume that the keyword contains only lowercase alphabetic characters a - z.

The main should implement a testing interface similar to the one in Task B, the user enters the plaintext and the keyword, and the program reports the ciphertext.
*/

#include <iostream>
#include <string>

using namespace std;

// Function to encrypt a single character using the Vigenère cipher
char encryptChar(char c, char key)
{
    char base = islower(c) ? 'a' : 'A'; // Set the base character depending on the case
    return ((c - base + (key - 'a')) % 26) + base; // Apply the Vigenère cipher shift
}

// Function to encrypt a string using the Vigenère cipher
string encryptVigenere(string plaintext, string keyword)
{
    string ciphertext;
    int keywordLength = keyword.length();
    int keywordIndex = 0;

    for (char c : plaintext)
    {
        if (isalpha(c))
        {
            char encryptedChar = encryptChar(c, keyword[keywordIndex]);
            ciphertext += encryptedChar;
            keywordIndex = (keywordIndex + 1) % keywordLength; // Move to the next letter in the keyword
        }
        else
        {
            ciphertext += c; // Append non-alphabetic characters unchanged
        }
    }
    return ciphertext;
}

int main()
{
    string plaintext, keyword;

    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    cout << "Enter keyword  : ";
    cin >> keyword;

    string ciphertext = encryptVigenere(plaintext, keyword);

    cout << "Ciphertext     : " << ciphertext << endl;

    return 0;
}