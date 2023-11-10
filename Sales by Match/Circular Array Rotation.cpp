#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> circularArrayRotation(vector<int>& a, int k, vector<int>& queries) {
    int n = a.size();
    vector<int> result;

    // Calculate the effective number of rotations
    k = k % n;

    // Perform the right circular rotation
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());

    // Get the values at the specified indices
    for (int i = 0; i < queries.size(); i++) {
        result.push_back(a[queries[i]]);
    }

    return result;
}

int main() {
    int n, k, q; // Number of elements, rotation count, and number of queries
    cin >> n >> k >> q;

    vector<int> a(n);
    vector<int> queries(q);

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Input indices to report
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    // Perform circular array rotation and get values at specified indices
    vector<int> result = circularArrayRotation(a, k, queries);

    // Output the results
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}
