#include <vector>
#include <iostream>
using namespace std;

// Function to sum the elements of two vectors pairwise
// Parameters:
//   v1: The first vector
//   v2: The second vector
// Returns:
//   A new vector containing the pairwise sums of the elements of v1 and v2

vector<int> sumPairWise(vector<int> &v1,vector<int> &v2){
    vector<int> result; // Initialize a new vector to store the result
    int minSize = min(v1.size(), v2.size()); // Find the minimum size of v1 and v2
    for(int i = 0; i < minSize; i++){
        result.push_back(v1[i] + v2[i]); // Add the ith element of v1 and v2 and push it to result
    }
    // If one vector is longer than the other, add the remaining elements to the result
    for(int i = minSize; i < v1.size(); i++){ //Starts counting at minSize elements
        result.push_back(v1[i]);
    }
    for(int i = minSize; i < v2.size(); i++){ //Starts counting at minSize elements
        result.push_back(v2[i]);
    }
    return result; // Return the result vector
}

int main(){
    // Initialize vectors v1 and v2
    vector<int> v1 = {7,13,69};
    vector<int> v2 = {1, 2, 3, 4};

    // Call the sumPairWise function and store the result in the result vector
    vector<int> result = sumPairWise(v1, v2);

    // Print the elements of the result vector
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
