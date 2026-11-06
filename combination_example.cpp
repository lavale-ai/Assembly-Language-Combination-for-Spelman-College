/*
 * CIS-087
 * Combinations Calculator
 * Name: Lavale Degraffenreid
 * Date: 11/05/2026
 * Platform: VS Code on macOS
 */


#include <cstdint>
#include <iostream>
using namespace std;

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */

uint16_t factorial(const uint16_t x)
{
    uint16_t result = 1;

    for (uint16_t i = 1; i <= x; i++)
    {
        result = result * i;
    }

    return result;
}

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
int main() {
    
int n;
int k;

// Get user input
cout << "Enter n: ";
cin >> n;

cout << "Enter k: ";
cin >> k;
    
// Check for invalid input
if (n <= 0 || k <= 0 || k > n)
{
    cout << "result = -1" << endl;
    return 0;
}



    // get and validate user input
    cout << "Enter n: ";
    cin >> n;
   
// Calculate C(n,k) = n! / (k! * (n-k)!)
uint16_t numerator = factorial(n);
uint16_t denominator = factorial(k) * factorial(n - k);

uint16_t c_n_k = numerator / denominator;


    // write out results
    cout << "result = " << c_n_k << endl;

    return 0;
}
