#include <vector>

using namespace std;

// Function to filter out positive integers from a vector
// Parameters:
//   v: the input vector
// Returns:
//   A new vector containing only the positive integers from the input vector
vector<int> goodVibes(const vector<int> v){
    vector<int> result; // Create an empty vector to store positive integers
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){ // Check if the current element is positive
            result.push_back(v[i]); // Add the positive integer to the result vector
        }
    }
    return result; // Return the vector containing only positive integers
}