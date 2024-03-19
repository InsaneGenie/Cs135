/*
Write a program that carries out the following tasks:
Open a file with the name hello.txt
Store the message "Hello, World!" in the file.
close the file
open the same file again.
read the message into a string variable and print it.
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream file("hello.txt");
    file << "Hello, World!";
    file.close();

    ifstream file2("hello.txt");
    string message;
    getline(file2, message);
    cout << message << endl;
    file2.close();
}