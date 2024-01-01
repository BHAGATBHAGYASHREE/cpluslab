#include <iostream>

 using namespace std;

int main() {
    double base;
    int exponent;

cout << "Enter the base: ";
cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    if (exponent >= 0) {
        double result = 1;
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
        cout << base << " raised to the power of " << exponent << " is: " << result << endl;
    } else {
        cout << "Exponent should be a non-negative integer." << endl;
    }

    return 0;
}
