#include <iostream>

using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; ++i) {
        // Print spaces for the left side of the triangle
        for (int j = n - i; j > 0; --j) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j < i * 2; ++j) {
            cout << j;
        }

        // Print decreasing numbers (excluding the last one to avoid duplication)
        for (int j = i * 2 - 2; j >= i; --j) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
