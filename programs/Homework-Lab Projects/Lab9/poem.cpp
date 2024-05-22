#include <iostream>
using namespace std;

// Function to dynamically create a poem
string * createAPoemDynamically() {
    // Dynamically allocate memory for a string
    string *p = new string;
    // Assign a poem to the string
    *p = "Roses are red, violets are blue";
    // Return the pointer to the dynamically allocated string
    return p;
}

int main() {
    // Loop indefinitely
    while(true) {
        // Declare a pointer to a string
        string *p;
        // Call the function to create a poem dynamically
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
        // Deallocate the memory for the poem
        delete p;
    }
}
