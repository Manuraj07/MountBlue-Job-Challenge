#include<bits/stdc++.h>
using namespace std;

string superReducedString(string s) {
    int n = s.length();
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            s.erase(i - 1, 2);
            i = 0;
        }
    }

    return s.empty() ? "Empty String" : s;
}

int main() {
    string s;
    cin >> s;

    string reducedString = superReducedString(s);

    cout << reducedString << endl;

    return 0;
}
