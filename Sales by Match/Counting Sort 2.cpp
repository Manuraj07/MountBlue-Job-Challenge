#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_value = *max_element(arr.begin(), arr.end());
    vector<int> count(max_value + 1, 0);

    for (int num : arr) {
        count[num]++;
    }

    for (int i = 0; i <= max_value; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << i << " ";
        }
    }

    return 0;
}
