#include <cstdint>
#include <iostream>

using namespace std;

int main() {
    // hmmmm is a 16-bit machine

    // set 2 registers
    uint16_t a = 5;
    uint16_t b = 7;

    // perform an addition
    uint16_t c = a + b;

    // output value of c
    cout << "c = " << c << endl;

    return 0;
}