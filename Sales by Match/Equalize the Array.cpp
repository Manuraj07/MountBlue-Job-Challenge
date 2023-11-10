#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int equalizeArray(vector<int>& arr) {
    unordered_map<int, int> freq;

    // Count the frequency of each element
    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    // Find the element with the maximum frequency
    int maxFreq = 0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        if (it->second > maxFreq) {
            maxFreq = it->second;
        }
    }

    // Calculate the minimum number of deletions
    return arr.size() - maxFreq;
}

int main() {
    int n; // Number of elements
    cin >> n;

    vector<int> arr(n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate and print the minimum number of deletions
    int result = equalizeArray(arr);
    cout << result << endl;

    return 0;
}
