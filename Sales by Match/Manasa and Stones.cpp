#include <bits/stdc++.h>
using namespace std;

vector<int> stones(int n, int a, int b) {
    set<int> possible_values;
    for (int i = 0; i < n; i++) {
        possible_values.insert(i * a + (n - 1 - i) * b);
    }
    return vector<int>(possible_values.begin(), possible_values.end());
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> result = stones(n, a, b);

        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
