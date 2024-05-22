#include <vector> // needed to make vectors available
#include <iostream> // used in main function to test output

using namespace std;

// Function to combine the elements of 'vegeta' into 'goku' and clear 'vegeta'
void gogeta(vector<int> &goku, vector<int> &vegeta) {
    for (int i = 0; i < vegeta.size(); i++) {
        goku.push_back(vegeta[i]); // Copy each element of 'vegeta' to the end of 'goku'
    }
    vegeta.clear(); // Clear the 'vegeta' vector after copying its elements to 'goku'
}

int main(){
    // Initialize vectors 'v1' and 'v2'
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    // Combine the elements of 'v2' into 'v1' and clear 'v2'
    gogeta(v1, v2);

    // Print the elements of 'v1'
    cout << "v1: ";
    for (int num : v1) {
        cout << num << " ";
    }
    cout << endl;

    // Print the elements of 'v2' (should be empty after calling 'gogeta')
    cout << "v2: ";
    for (int num : v2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
