#include <iostream>

using namespace std;

int main() {
    int number, digit, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    // Ensure the number is positive
    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    do {
        // Extract the last digit
        digit = number % 10;

        // Add the digit to the sum
        sum += digit;

        // Remove the last digit from the number
        number /= 10;
    } while (number > 0);

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}