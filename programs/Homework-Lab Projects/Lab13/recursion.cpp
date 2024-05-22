// Author: Steven Lai
// Course: CSCI-135
// Instructor: Tong Yee
// Assignment: lab 13a

#include <iostream>
#include <string>

void printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int *arr, int size);
bool isAlphanumeric(std::string s);
bool nestedParens(std::string s);

// Recursive function to print numbers in the range [left, right]
void printRange(int left, int right) {
    // Base case: if left is greater than right, the range is empty, so we return
    if (left > right) {
        return;
    }

    // Print the current number (left) followed by a space
    std::cout << left << " ";

    // Recursively call printRange with left incremented by 1
    printRange(left + 1, right);
}

int sumRange(int left, int right){
    // Base case: if left is greater than right, the range is empty, so we return 0
    if (left > right) {
        return 0;
    }

    // Recursively call sumRange with left incremented by 1
    return left + sumRange(left + 1, right);
}

int sumArray(int *arr, int size){
    // Base case: if size is 0, the array is empty, so we return 0
    if (size == 0) {
        return 0;
    }

    // Recursively call sumArray with size decremented by 1
    return arr[size - 1] + sumArray(arr, size - 1);
}

bool isAlphanumeric(std::string s) {
    // Base case: if the string is empty, return true
    if (s.empty()) {
        return true;
    }

    // Check if the first character is alphanumeric
    char firstChar = s[0];
    bool isFirstAlphanumeric = (firstChar >= 'a' && firstChar <= 'z') ||
                                (firstChar >= 'A' && firstChar <= 'Z') ||
                                (firstChar >= '0' && firstChar <= '9');

    // If the first character is not alphanumeric, return false
    if (!isFirstAlphanumeric) {
        return false;
    }

    // Recursively check the rest of the string
    return isAlphanumeric(s.substr(1));
}

bool nestedParens(std::string s) {
    // Base case: an empty string is a correct sequence of nested parentheses
    if (s.empty()) {
        return true;
    }

    // Check if the string starts with '(' and ends with ')'
    if (s.front() == '(' && s.back() == ')') {
        // Recursively check the substring inside the outermost parentheses
        return nestedParens(s.substr(1, s.length() - 2));
    }

    // If the string does not start with '(' or end with ')', or the parentheses are not nested correctly, return false
    return false;
}

// Helper function to compute the sum of the array recursively
int computeSum(int *prices, int size) {
    if (size == 0) {
        return 0;
    }
    return prices[size - 1] + computeSum(prices, size - 1);
}
// Helper function to check if there is a subset with the given sum
bool isSubsetSum(int *prices, int n, int sum) {
    if (sum == 0) {
        return true;
    }
    if (n == 0 && sum != 0) {
        return false;
    }

    // If the last element is greater than sum, ignore it
    if (prices[n - 1] > sum) {
        return isSubsetSum(prices, n - 1, sum);
    }

    // Check if sum can be obtained by any of
    // (a) including the last element
    // (b) excluding the last element
    return isSubsetSum(prices, n - 1, sum) || 
           isSubsetSum(prices, n - 1, sum - prices[n - 1]);
}

// Main function to check if the array can be divided into two subsets with equal sum
bool divisible(int *prices, int size) {
    // Calculate the total sum of the array recursively
    int totalSum = computeSum(prices, size);

    // If total sum is odd, it cannot be divided into two equal parts
    if (totalSum % 2 != 0) {
        return false;
    }

    // Check if there is a subset with sum equal to half of the total sum
    return isSubsetSum(prices, size, totalSum / 2);
}
int main() {
    // Example usage: print numbers from -2 to 10
    printRange(-2, 10);
    std::cout << std::endl;
    int x = sumRange(1, 3);
    std::cout << "This is " << x << std::endl;   // 6
    
    int y = sumRange(-2, 10);
    std::cout << "That is " << y << std::endl;   // 52

    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "Sum is " << sum2 << std::endl;  // Sum is 34

    delete[] arr;         // deallocate it
    
    

    std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
    std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
    std::cout << isAlphanumeric("KLMN 8-7-6") << std::endl;  // false (0)

    std::cout << nestedParens("((()))") << std::endl;      // true (1)
    std::cout << nestedParens("()") << std::endl;          // true (1)
    std::cout << nestedParens("") << std::endl;            // true (1)

    std::cout << nestedParens("(((") << std::endl;         // false (0)
    std::cout << nestedParens("(()") << std::endl;         // false (0)
    std::cout << nestedParens(")(") << std::endl;          // false (0)
    std::cout << nestedParens("a(b)c") << std::endl;       // false (0)
    return 0;
}