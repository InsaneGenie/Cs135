// project1a.cpp
/*
Author: Steven Lai
Course: CSCI-135
Instructor: Tong Yee
Assignment: Project1A

This Program randomly generates an operator and two numbers to be used in 
a mathematical expression. once the expression is generated, the user is 
asked to enter the answer to the expression. The program then prints out
whether the answer is correct or not.
*/

#include <iostream> 
#include <cstdlib> 
#include <time.h>
#include <string>
using namespace std;

int main()
{ 
   srand(time(NULL));  
   char symbol[]= {'+', '-', '*', '/', '%'}; // Creates a array of symbols
   char picked_symbol = symbol[rand()%5];
   int prob_lem;
   if (picked_symbol == '+')
   {
      int v1 = rand() % 10 ; //v1 in the range 1 to 9
      int v2 = rand() % 10;  // v2 in the range 0 to 9
      cout << "what is " << v1 << " " <<  picked_symbol << " " << v2 << "?" << endl; // prints out the user prompt for the question and the random symbol
      cin >> prob_lem; // User input for the answer
      v1 = v1;
      v2 = v2;
      int math = v1 + v2; // returns the correct answer

      if (prob_lem != math) 
      {
         cout << "False" << endl; // if answer is wrong returns False
      }
      else if (prob_lem == math) 
      {
         cout << "True" << endl; // if the answer is right returns True
      }
   } 
   else if (picked_symbol == '-')
   {
      int v1 = rand() % 10 ; //v1 in the range 1 to 9
      int v2 = rand() % 10;  // v2 in the range 0 to 9
      cout << "what is " << v1 << " " <<  picked_symbol << " " << v2 << "?" << endl; // prints out the user prompt for the question and the random symbol
      cin >> prob_lem; // User input for the answer
      v1 = v1;
      v2 = v2;
      int math = v1 - v2; // returns the correct answer
      if (prob_lem != math) 
      {
         cout << "False" << endl; // if answer is wrong returns False
      } 
      else if (prob_lem == math) 
      {
         cout << "True" << endl; // if the answer is right returns True
      }
   } 
   else if (picked_symbol == '/')
   {
      int v1 = rand() % 10 ; //v1 in the range 1 to 9
      int v2 = (rand() % 7) + 1;  // v2 in the range 0 to 9
      cout << "what is " << v1 << " " <<  picked_symbol << " " << v2 << "?" << endl; // prints out the user prompt for the question and the random symbol
      cin >> prob_lem; // User input for the answer
      v1 = v1;
      v2 = v2;
      int math = v1 / v2; // returns the correct answer
      if (prob_lem != math) 
      {
         cout << "False" << endl; // if answer is wrong returns False
      } 
      else if (prob_lem == math) 
      {
         cout << "True" << endl; // if the answer is right returns True
      }
   } 
   else if (picked_symbol == '*')
   {
      int v1 = rand() % 10 ; //v1 in the range 1 to 9
      int v2 = rand() % 10;  // v2 in the range 0 to 9
      cout << "what is " << v1 << " " <<  picked_symbol << " " << v2 << "?" << endl; // prints out the user prompt for the question and the random symbol
      cin >> prob_lem; // User input for the answer
      v1 = v1;
      v2 = v2;
      int math = v1 * v2; // returns the correct answer
      if (prob_lem != math) 
      {
         cout << "False" << endl; // if answer is wrong returns False
      } 
      else if (prob_lem == math) 
      {
         cout << "True" << endl; // if the answer is right returns True
      }
   }
   else if (picked_symbol == '%')
   {
      int v1 = rand() % 10 ; //v1 in the range 1 to 9
      int v2 = (rand() % 10) + 1;  // v2 in the range 0 to 9
      cout << "what is " << v1 << " " <<  picked_symbol << " " << v2 << "?" << endl; // prints out the user prompt for the question and the random symbol
      cin >> prob_lem; // User input for the answer
      v1 = v1;
      v2 = v2;
      int math = v1 % v2; // returns the correct answer
      if (prob_lem != math) 
      {
         cout << "False" << endl; // if answer is wrong returns False
      } 
      else if (prob_lem == math) 
      {
         cout << "True" << endl; // if the answer is right returns True
      }
   }
   return 0; 
 }
