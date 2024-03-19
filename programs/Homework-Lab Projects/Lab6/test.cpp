#include <iostream>
#include <string>

using namespace std;

char unshiftChar(char c, int lshift)
{
    if (!isalpha(c))
    {
        return c;
    }

    char newChar = c - lshift;

    if (islower(c) && c-lshift < 'a')
    {
        newChar = c - lshift + 26;
    }
    else if (isupper(c) && c-lshift < 'A')
    {
        newChar = c - lshift + 26;
    }
    else
    {
        newChar = c - lshift;
    }

    return newChar;
}
string decryptVigenere(string plaintext, string keyword)
{
    string decrypte = "";
    int keywordIndex = 0;
    char currentChar, currentKeywordChar, shiftedChar;
    int shift;

    for (int i = 0; i < plaintext.length(); i++)
    {
        currentChar = plaintext[i];
        currentKeywordChar = keyword[keywordIndex];

        shift = currentKeywordChar - 'a';

        shiftedChar = unshiftChar(currentChar, shift);

        decrypte += shiftedChar;

        if(isalpha(currentChar))
        {
            keywordIndex++;
        }

        if (keyword[keywordIndex] == keyword[-1])
        {
            keywordIndex = 0;
        }
    }

    return decrypte;
}


int main()
{
    string keyword;
    cout << endl;
    cout << "= Vigenere =\n" << "Enter keyword  : ";
    getline(cin, keyword);

    cout << "Ciphertext     : " << "Jevpq, Wyvnd!" << endl;
    cout << "Decrypted      : " << decryptVigenere("Jevpq, Wyvnd!", keyword) << endl;

}