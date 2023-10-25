#include <iostream>
#include <vector>

using namespace std;

string gamingArray(vector<int> arr) {
    int maxVal = 0;
    int maxValCount = 0;
    int n  = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxValCount++;
        }
    }

    return (maxValCount % 2 == 0) ? "ANDY" : "BOB";
}

int main() {
    int g;
    cin >> g;

    while (g--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string winner = gamingArray(arr);
        cout << winner << endl;
    }

    return 0;
}
