// Author: Zuhayer Tashin and Steven Lai
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Project 1B
// Enter the number of questions to answer. Ensure that the input is a positive integer. Continue
// prompting users with “The number of questions cannot be zero or negative. Re-enter: ” and accept
// input from users until a positive integer is provided

#include <iostream> 
#include <ctime>
#include <cstdlib> 
using namespace std;

int main()
{ 
   srand(time(0)); 
   char symbol[]= {'+', '-', '*', '/', '%'}; // Creates a array of symbols
   int prob_lem, v1, v2, math; // Number of questions to ask and number of problems to solve
   double grades, correct, num_of_questions; // Number of correct answers, and wrong answers and the grades
   cout << "Enter the total number of questions to ask (not negative): ";
   cin >> num_of_questions;
   while(num_of_questions <= 0)
   {
        cout << "The number of questions cannot be zero or negative. Re-enter: ";
        cin >> num_of_questions;
   }
   for(int i = 0; i < num_of_questions; i++)
   {
        int picked_symbol = rand()%(5); //picked_symbol in the range 0 to 4
        v1 = rand()%(10); //v1 in the range 0 to 9
        if (picked_symbol == 3 || picked_symbol == 4)
        {
            v2 = rand()%(9)+1;  // v2 in the range 1 to 9
        }
        else
        {
            v2 = rand()%(10);  // v2 in the range 0 to 9
        }
        if (picked_symbol == 0)
        {
            math = v1 + v2; // returns the correct answer
        } 
        if (picked_symbol == 1)
        {
            math = v1 - v2; // returns the correct answer
        } 
        if (picked_symbol == 2)   
        {
            math = v1 * v2; // returns the correct answer   
        }
        if (picked_symbol == 3)
        {
            math = v1 / v2; 
        }  
        if (picked_symbol == 4)
        {
            math = v1 % v2; 
        }
        cout << "What is " << v1 << " " <<  symbol[picked_symbol] << " " << v2 << endl; // prints out the user prompt for the question and the random symbol
        cin >> prob_lem; // User input for the answer
        if (prob_lem == math) 
        {
            cout << "true" << endl; // if the answer is right returns True
            correct += 1; // adds the correct answer
        } 
        else
        {
            cout << "false" << endl; // if answer is wrong returns False
        }
   }
   grades = (correct/num_of_questions)*100; // calculate the grades based on how many questions were correctly inputted by the user
   cout << "percentage correct: "<< grades << "%.\nletter grade: ";
   if (grades >= 90)// if the grade was 90 or higher
   {
      cout << "A."; // prints out letter grade: A
   } 
   else if (grades >= 80)// if the grade was 80 or higher and less than 90
   { 
      cout << "B."; // prints out letter grade: B
   } 
   else if (grades >= 70)// if the grade was 70 or higher and less than 80
   { 
      cout << "C."; // prints out letter grade: C
   } 
   else if (grades >= 60)// if the grade was 60 or higher and less than 70
   { 
      cout << "D."; // prints out letter grade: D
   } 
   else// Otherwise
   {
      cout << "F."; // prints out letter grade: F
   }
}
