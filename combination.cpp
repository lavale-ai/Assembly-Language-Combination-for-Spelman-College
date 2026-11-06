
/*
 * CIS-087
 * Combinations Calculator
 * Programmer: Lavale Degraffenreid
 * Date: 11/05/2026
 * Platform: VS Code on macOS
 */

#include <cstdint>
#include <iostream>
using namespace std;

// Calculate the factorial of a number
uint16_t factorial(const uint16_t x)
{
    uint16_t result = 1;

    for (uint16_t i = 1; i <= x; i++)
    {
        result = result * i;
    }

    return result;
}

int main()
{
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

    // Calculate combinations
    // C(n,k) = n! / (k! * (n-k)!)

    uint16_t numerator = factorial(n);
    uint16_t denominator = factorial(k) * factorial(n - k);

    uint16_t c_n_k = numerator / denominator;

    // Display the result
    cout << "result = " << c_n_k << endl;

    return 0;
}
