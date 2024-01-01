#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string studentName;
    int* grades;
    int numGrades;

public:
    Student(string name, int num)
        : studentName(name), numGrades(num) {
        grades = new int[numGrades];
    }

    ~Student() {
        delete[] grades;
    }

    void addGrades() {
        cout << "Enter grades for " << studentName << ":" << endl;
        for (int i = 0; i < numGrades; ++i) {
            cout << "Grade " << (i + 1) << ": ";
            cin >> grades[i];
        }
    }

    float calculateAverageGrade() const {
        float total = 0;
        for (int i = 0; i < numGrades; ++i) {
            total += grades[i];
        }
        return (numGrades > 0) ? total / numGrades : 0.0f;
    }

    void displayStudentInfo() const {
        cout << "Student Name: " << studentName << endl;
        cout << "Grades: ";
        for (int i = 0; i < numGrades; ++i) {
            cout << grades[i] << " ";
        }
        cout << endl;
        cout << "Average Grade: " << calculateAverageGrade() << endl;
    }
};

int main() {
    Student student1("Alice", 3);
    Student student2("Bob", 4);

    student1.addGrades();
    student2.addGrades();

    student1.displayStudentInfo();
    student2.displayStudentInfo();

    return 0;
}
