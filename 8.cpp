#include <iostream>

 using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int number = 1;

        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++) {
            cout << "   ";
            if (j > 0) {
                number = number * (i - j + 1) / j;
            }
            cout << number;
        }

        cout << endl;
    }

    return 0;
}
