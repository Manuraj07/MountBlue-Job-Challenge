#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

int minimumDistances(vector<int>& arr) {
    unordered_map<int, int> lastSeen;
    int minDistance = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (lastSeen.find(arr[i]) != lastSeen.end()) {
            int distance = i - lastSeen[arr[i]];
            minDistance = min(minDistance, distance);
        }
        lastSeen[arr[i]] = i;
    }

    return (minDistance == INT_MAX) ? -1 : minDistance;
}

int main() {
    int n; // Size of array
    cin >> n;

    vector<int> arr(n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate and print the minimum distance
    int result = minimumDistances(arr);
    cout << result << endl;

    return 0;
}
