#include <iostream>
#include <vector>
#include <map>

using namespace std;

int migratoryBirds(vector<int> arr) {
    map<int, int> birdCounts;

    for (int bird : arr)
        birdCounts[bird]++;

    int maxFrequency = 0, mostFrequentType = arr[0];

    for (const auto& entry : birdCounts) {
        if (entry.second > maxFrequency ||
            (entry.second == maxFrequency && entry.first < mostFrequentType)) {
            maxFrequency = entry.second;
            mostFrequentType = entry.first;
        }
    }

    return mostFrequentType;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int result = migratoryBirds(arr);
    cout << result << endl;

    return 0;
}
