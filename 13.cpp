#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    sort(input.begin(), input.end());

    do {
        cout << input << endl;
    } while (next_permutation(input.begin(), input.end()));

    return 0;
}
