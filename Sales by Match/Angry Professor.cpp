#include <iostream>
#include <vector>

using namespace std;

string angryProfessor(int k, vector<int>& a) {
    int onTimeCount = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= 0) {
            onTimeCount++;
        }
    }

    if (onTimeCount >= k) {
        return "NO"; // Class is not canceled
    } else {
        return "YES"; // Class is canceled
    }
}

int main() {
    int t; // Number of test cases
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k; // Number of students and cancellation threshold
        cin >> n >> k;

        vector<int> arrivalTimes(n);

        for (int j = 0; j < n; j++) {
            cin >> arrivalTimes[j];
        }

        string result = angryProfessor(k, arrivalTimes);
        cout << result << endl;
    }

    return 0;
}
