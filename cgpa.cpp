#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "================ GPA & CGPA Calculator ================\n\n";
    cout << "Enter number of courses: ";
    cin >> n;

    float grade[n], credit[n];

    cout << "\nEnter course details:\n";
    cout << "(Grade points like 10, 9, 8...)\n\n";

    for (int i = 0; i < n; i++) {
        cout << "Course " << i + 1 << ":\n";
        cout << "  Grade Point : ";
        cin >> grade[i];
        cout << "  Credit Hours: ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalGradePoints += grade[i] * credit[i];
        cout << endl;
    }

    float GPA = totalGradePoints / totalCredits;
    float CGPA = GPA; // Single semester, so CGPA = GPA

    cout << "================= RESULT =================\n\n";
    cout << left << setw(10) << "Course"
         << setw(15) << "Grade"
         << setw(15) << "Credits" << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(10) << i + 1
             << setw(15) << grade[i]
             << setw(15) << credit[i] << endl;
    }

    cout << "\nTotal Credits      : " << totalCredits;
    cout << "\nTotal Grade Points : " << totalGradePoints;

    cout << fixed << setprecision(2);
    cout << "\n\nGPA  = " << GPA;
    cout << "\nCGPA = " << CGPA;

    return 0;
}

