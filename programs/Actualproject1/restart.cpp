// Project 1 Task D Pseudocode:
#include <iostream> 
#include <ctime>
#include <string>
#include <cstdlib> 
#include <fstream>
using namespace std;
// // Initialize correctAnswers to count the number of correct responses
// Set correctAnswers to 0
int main()
{
    int correctAnswers = 0;
    ifstream file("problems.csv");
    if (file.fail())
    {
        cerr << "Error opening file. \n";
        return 1;
    }
    string problem;
    double answers;
}
// // Declare variables for parsing the CSV file
// Declare line and leftPart as strings
// Declare rightPart as double
// Declare data as a vector of pairs, each containing a string and a double

// // Generate a random seed based on system time for random question selection
// Initialize random seed with current system time

// // Attempt to open the "problems.csv" file
// Open a file named "problems.csv"
// If the file fails to open:
//     Print an error message
//     Exit the program

// // Read data from the file if it is successfully opened
// If the file is open:
//     While not at the end of the file:
//         Read a line from the file into line
//         Parse line into leftPart and rightPart, separated by a comma
//         Add a pair containing leftPart and rightPart to data

// // Close the file
// Close the file

// // Determine the total number of questions initially available
// Set totalQuestions to the size of data
// // Loop until there are no more questions in data
// While data is not empty:
//     Declare userInput as double

//     // Select a random question from data
//     Generate a random index randIndex within the range of data's size

//     // Prompt the user with the selected question and read their input
//     Print the arithmetic problem associated with randIndex
//     Read userInput from the user

//     // Check if the user's input is approximately equal to the correct answer
//     If the absolute difference between userInput and the answer at randIndex is less than 0.001:
//         Print "True" and increment correctAnswers
//     Else:
//         Print "False"

//     // Remove the answered question from consideration
//     Swap the problem at randIndex with the last problem in data
//     Remove the last problem from data

//     // Check if at least 60% of the answers are correct; if so, stop the quiz
//     If the percentage of correct answers is at least 60%:
//         Print a message indicating completion and exit the loop

// // Print the final percentage of correct answers
// Print the percentage of correct answers based on the total number of questions