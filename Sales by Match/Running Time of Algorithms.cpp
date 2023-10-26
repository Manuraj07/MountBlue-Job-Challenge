#include <bits/stdc++.h>
using namespace std;
int runningTime(vector<int> arr) {
    int shifts = 0;

    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i], j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            shifts++;
        }

        arr[j + 1] = key;
    }

    return shifts;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << runningTime(arr) << endl;

    return 0;
}
