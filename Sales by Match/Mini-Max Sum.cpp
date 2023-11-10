#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int>& arr) {
    sort(arr.begin(), arr.end());

    long long minSum = 0, maxSum = 0;

    for (int i = 0; i < 4; i++) {
        minSum += arr[i];
        maxSum += arr[4 - i];
    }

    cout << minSum << " " << maxSum << endl;
}

int main() {
    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}
