/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6D

Implement two decryption functions corresponding to the above ciphers. When decrypting ciphertext, ensure that the produced decrypted string is equal to the original plaintext:
*/


#include <iostream>
#include <string>

using namespace std;


//caesar encryption

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

//VIGENERE ENCRYPTION

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

char leftshiftChar(char c, int lshift)
{
    if (isalpha(c))
    {
        char base = islower(c)? 'a' : 'A';
        if (lshift != 0) {
            return ((c - base - lshift + 26) % 26 + base);
        } 
        else 
        {
            return c;
        }
    }
    else 
    {
        return c;
    }
}
string decryptCaesar(string ciphertext, int rshift)
{
//= Caesar =
// Enter shift    : 10
// Ciphertext     : Rovvy, Gybvn!
// Decrypted      : Hello, World!
    string output;
    for (char c : ciphertext) 
    {
        if (isalpha(c))
        {
            output += leftshiftChar(c, rshift);
        }
        else
        {
            output += c;
        }
    }
    return output;
}

// Function to unshift a character by a given amount (left shift)
char unshiftChar(char c, int lshift)
{
    if (!isalpha(c)) // If the character is not an alphabet character, return it unchanged
    {
        return c;
    }

    char newChar = c - lshift; // Shift the character to the left by lshift positions

    // Handle wrapping around the alphabet for lowercase letters
    if (islower(c) && newChar < 'a')
    {
        newChar = c - lshift + 26; // Wrap around to the end of the lowercase alphabet
    }
    // Handle wrapping around the alphabet for uppercase letters
    else if (isupper(c) && newChar < 'A')
    {
        newChar = c - lshift + 26; // Wrap around to the end of the uppercase alphabet
    }

    return newChar;
}

// Function to decrypt a Vigenère cipher
string decryptVigenere(string plaintext, string keyword)
{
    string decrypted = ""; // Initialize an empty string to store the decrypted text
    int keywordIndex = 0; // Initialize the index for the keyword

    // Iterate over each character in the plaintext
    for (int i = 0; i < plaintext.length(); i++)
    {
        char currentChar = plaintext[i]; // Get the current character from the plaintext
        char currentKeywordChar = keyword[keywordIndex]; // Get the current character from the keyword

        int shift = currentKeywordChar - 'a'; // Calculate the shift amount based on the keyword character

        char unshiftedChar = unshiftChar(currentChar, shift); // Decrypt the current character

        decrypted += unshiftedChar; // Append the decrypted character to the decrypted text

        if (isalpha(currentChar)) // If the current character is an alphabet character, move to the next character in the keyword
        {
            keywordIndex++;
        }

        if (keywordIndex == keyword.length()) // If the end of the keyword is reached, reset the keyword index to 0
        {
            keywordIndex = 0;
        }
    }

    return decrypted; // Return the decrypted text
}


int main()
{
    string plaintext;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    int shift;
    cout << endl;
    cout << "= Caesar =\n" << "Enter shift    : ";
    cin >> shift;
    cin.ignore(); // Ignore the newline character

    string caesarCiphertext = encryptCaesar(plaintext, shift);
    cout << "Ciphertext     : " << caesarCiphertext << endl;
    cout << "Decrypted      : " << decryptCaesar(caesarCiphertext, shift) << endl;

    string keyword;
    cout << endl;
    cout << "= Vigenere =\n" << "Enter keyword  : ";
    getline(cin, keyword);

    string vigenereCiphertext = encryptVigenere(plaintext, keyword);
    cout << "Ciphertext     : " << vigenereCiphertext << endl;
    cout << "Decrypted      : " << decryptVigenere(vigenereCiphertext, keyword) << endl;

    return 0;
}