#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Open the CSV file
    ifstream file("problems.csv");
    if (!file.is_open())
    {
        cerr << "Error opening file.\n";
        return 1;
    }

    // Arrays to store problems and solutions
    string problems[9];
    string solutions[9];
    double correct = 0;
    double grades = 0;

    // Read problems and solutions from the file
    for (int i = 0; i < 9; i++)
    {
        getline(file, problems[i], ',');
        getline(file, solutions[i]);
    }

    // Shuffle indices to present problems in random order
    int indices[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 9; i++)
    {
        int randIndex = rand() % (9 - i) + i;
        swap(indices[i], indices[randIndex]);
    }

    // Present problems in random order and check answers
    for (int i = 0; i < 9; i++)
    {
        string problem = problems[indices[i]];
        double correctAnswer = stod(solutions[indices[i]]);

        cout << "What is " << problem << "? ";
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
    }

    // Calculate and display grades
    grades = (correct / 9) * 100;
    if (grades >= 60)
    {
        cout << "At least 60% is correct. Stop." << endl;
    }
    else
    {
        cout << "Percentage correct: " << grades << "%" << endl;
    }

    // Close the file and return
    file.close();
    return 0;
}
