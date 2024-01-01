#include <iostream>

using namespace std;

int main() {
    int marks[5];

    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    int totalMarks = 0;
    for (int i = 0; i < 5; ++i) {
        totalMarks += marks[i];
    }

    double average = static_cast<double>(totalMarks) / 5;

    cout << "Average Marks: " << average << endl;

    if (average >= 90) {
        cout << "Grade: A+" << endl;
    } else if (average >= 80) {
        cout << "Grade: A" << endl;
    } else if (average >= 70) {
        cout << "Grade: B" << endl;
    } else if (average >= 60) {
        cout << "Grade: C" << endl;
    } else if (average >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}
