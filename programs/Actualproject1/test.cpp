#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    string filename = "problems.csv";
    ifstream file(filename);
    if (file.fail()) // if filename is not found
    { 
        cerr << "Error: " << filename << " not found" << endl;
        exit(1); // EXIT_FAILURE
    }

    string problem, solution;
    double answer, correct_answer, correct;

    while(getline(file, problem, ',') && getline(file, solution))
    {
        int randomQuestion = rand() % problem.size();
        cout << "what is " << randomQuestion << "?" << endl;
    }
}