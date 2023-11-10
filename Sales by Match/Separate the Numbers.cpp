#include <iostream>
#include <string>

using namespace std;

bool isBeautiful(string s, int len, long long first) {
    string current = to_string(first);
    while (current.length() < len) {
        first++;
        current += to_string(first);
    }
    return s == current;
}

void separateNumbers(string s) {
    int n = s.length();
    bool beautiful = false;

    for (int len = 1; len <= n / 2; len++) {
        long long first = stoll(s.substr(0, len));

        if (isBeautiful(s, n, first)) {
            beautiful = true;
            cout << "YES " << first << endl;
            break;
        }
    }

    if (!beautiful) {
        cout << "NO" << endl;
    }
}

int main() {
    int q; // Number of queries
    cin >> q;

    while (q--) {
        string s; // Integer string to query
        cin >> s;

        separateNumbers(s);
    }

    return 0;
}
