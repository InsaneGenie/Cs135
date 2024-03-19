/*
Task A: Write a program numbers.cpp that defines a function
     bool isDivisibleBy(int n, int d);
If n is divisible by d, the function should return true, otherwise return false.    
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
{
    if (d == 0)
    {
        return false;
    }
    return n % d == 0;
}

/*
Task B: add a function
    bool isPrime(int n);
The function should return true if n is a prime, otherwise return false. Change the main function to test your new code.
*/

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

/*
Task C: Add a function

int nextPrime(int n);
that returns the smallest prime greater than n.

*/

int nextPrime(int n)
{
    for (int i = n + 1; i > n; i++)
    {
        if (isPrime(i))
        {
            return i;
        }
    }
    return n;
}

/*
Task D: Add a function
    int countPrimes(int a, int b);
that returns the number of prime numbers in the interval a ≤ x ≤ b. Change the main function to test the new code.
*/

int countPrimes(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}

/*
Task E: Add a function

bool isTwinPrime(int n);
that determines whether or not its argument is a twin prime. Change the main function to test the new code.
*/

bool isTwinPrime(int n)
{
    if (isPrime(n))
    {
        if (isPrime(n + 2) || isPrime(n - 2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

/*
Task F: Add a function
    int nextTwinPrime(int n);
that returns the smallest twin prime greater than n. Change the main function to test the new code.
*/

int nextTwinPrime(int n)
{
    for (int i = n + 1; i > n; i++)
    {
        if (isTwinPrime(i))
        {
            return i;
        }
    }
    return n;
}

/*
Task G:Add a function

int largestTwinPrime(int a, int b);
that returns the largest twin prime in the range a ≤ N ≤ b.
If there is no twin primes in range, then return -1.

*/

int largestTwinPrime(int a, int b)
{
    for (int i = b; i > a; i--)
    {
        if (isTwinPrime(i))
        {
            return i;
        }
    }
    return -1;
}
int main() {
    int n, d;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter d: ";
    cin >> d;
    

    cout << largestTwinPrime(n, d) << endl;
    return 0;
}