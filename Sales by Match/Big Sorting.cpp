#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareStrings(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
}

vector<string> bigSorting(vector<string>& unsorted) {
    sort(unsorted.begin(), unsorted.end(), compareStrings);
    return unsorted;
}

int main() {
    int n; // Number of strings
    cin >> n;

    vector<string> unsorted(n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> unsorted[i];
    }

    // Perform big sorting and print the results
    vector<string> result = bigSorting(unsorted);

    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }

    return 0;
}
