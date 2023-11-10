#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int>& grades) {
    vector<int> roundedGrades;

    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] < 38) {
            // If the grade is less than 38, no rounding occurs
            roundedGrades.push_back(grades[i]);
        } else {
            // Round the grade according to the specified rules
            int nextMultipleOf5 = ((grades[i] / 5) + 1) * 5;
            if (nextMultipleOf5 - grades[i] < 3) {
                roundedGrades.push_back(nextMultipleOf5);
            } else {
                roundedGrades.push_back(grades[i]);
            }
        }
    }

    return roundedGrades;
}

int main() {
    int n; // Number of students
    cin >> n;

    vector<int> grades(n);

    // Input grades
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }

    // Calculate and print the rounded grades
    vector<int> result = gradingStudents(grades);

    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }

    return 0;
}
