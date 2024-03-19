// Author: Steven Lai
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Project 1D
#include <iostream> 
#include <ctime>
#include <string>
#include <cstdlib> 
#include <fstream>
using namespace std;

int main()
{
    string problems[9];  // array to store problems
    string solutions[9]; // array to store solutions
    double correct = 0;
    double grades = 0;

    srand(time(NULL));   //random number

    ifstream file("problems.csv");
    if (file.fail())
    {
        cerr << "Error opening file. \n";
        return 1;
    }

    for (int i = 0; i < 9; i++)     //reading the problems and solutions from file and storing it
    {
        getline(file, problems[i], ',');
        getline(file, solutions[i]);
    }

    int numIndex[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};  //shuffling the number of indices
    for (int i = 0; i < 9; i++)
    {
        int randIndex = rand() % (9 - i) + i;
        swap(numIndex[i],numIndex[randIndex]);
    }

    for (int i = 0; i < 9; i++) //asking the questions in a random order accoring to the random number of indices
    {
        string problem = problems[numIndex[i]];
        double correctAnswer = stod(solutions[numIndex[i]]);

        cout << "(" << i + 1 << ") " << "What is " << problem << "? ";
        double answer;
        cin >> answer;

        if (answer == correctAnswer)
        {
            cout << "True" << endl;
            correct++;
        }
        else
        {
            cout << "False" << endl;
        }
        grades = (correct / 9) * 100;   //calculates the grade
        if (grades >= 60)
        {
            break;
        }
    }

    if (grades >= 60)
    {
        cout << "At least 60% is correct. Stop." << endl;
    }
    else
    {
        cout << "Percentage correct: " << grades << "%" << endl;
    }
    file.close();
    return 0;
}

   