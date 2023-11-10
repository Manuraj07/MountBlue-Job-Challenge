#include <iostream>
#include <cmath>

using namespace std;

int theLoveLetterMystery(string s) {
    int operations = 0;
    int n = s.length();

    for (int i = 0; i < n / 2; i++) {
        // Calculate the absolute difference between corresponding characters
        int diff = abs(s[i] - s[n - i - 1]);
        operations += diff;
    }

    return operations;
}

int main() {
    int q; // Number of queries
    cin >> q;

    while (q--) {
        string s; // String to analyze
        cin >> s;

        int result = theLoveLetterMystery(s);
        cout << result << endl;
    }

    return 0;
}
