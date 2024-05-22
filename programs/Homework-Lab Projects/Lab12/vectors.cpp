#include <vector>
using namespace std;

// Function to create a vector of integers from 0 to n-1
// Parameters:
//   n: the number of elements to create in the vector
// Returns:
//   A vector containing integers from 0 to n-1
vector<int> makeVector(int n){
    vector<int> v; // Create an empty vector to store integers
    for(int i=0; i<n; i++){
        v.push_back(i); // Add integers from 0 to n-1 to the vector
    }
    return v; // Return the vector containing integers from 0 to n-1
}