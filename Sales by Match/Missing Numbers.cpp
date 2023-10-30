#include <bits/stdc++.h>
using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    map<int, int> frequencyArr, frequencyBrr;
    vector<int> result;
    for (int num : arr) {
        frequencyArr[num]++;
    }
    for (int num : brr) {
        frequencyBrr[num]++;
    }
    for (auto it = frequencyBrr.begin(); it != frequencyBrr.end(); ++it) {
        int num = it->first;
        int freqInArr = frequencyArr[num];
        int freqInBrr = it->second;

        if (freqInArr != freqInBrr) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());

    return result;
}

int main() {
    int n, m;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> m;
    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }

    vector<int> result = missingNumbers(arr, brr);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
