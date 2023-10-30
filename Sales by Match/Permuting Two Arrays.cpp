#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string twoArrays(int k, vector<int> A, vector<int> B) {
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    for (int i = 0; i < A.size(); i++) {
        if (A[i] + B[i] < k) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n, k;
        cin >> n >> k;

        vector<int> A(n);
        vector<int> B(n);

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> B[i];
        }

        string result = twoArrays(k, A, B);
        cout << result << endl;
    }

    return 0;
}
