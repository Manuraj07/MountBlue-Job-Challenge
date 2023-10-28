#include <bits/stdc++.h>

using namespace std;

string balancedSums(vector<int> arr) {
    int totalSum = 0;
    int leftSum = 0;

    for (int num : arr) {
        totalSum += num;
    }

    for (int num : arr) {
        totalSum -= num; // Reduce the total sum by the current element
        if (leftSum == totalSum) {
            return "YES";
        }
        leftSum += num;
    }

    return "NO";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string result = balancedSums(arr);
        cout << result << endl;
    }

    return 0;
}
