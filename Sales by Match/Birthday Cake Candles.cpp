#include <iostream>
#include <vector>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int max_height = 0;
    int count = 0;

    for (int height : candles) {
        if (height > max_height) {
            max_height = height;
            count = 1;
        } else if (height == max_height) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> candles(n);

    for (int i = 0; i < n; i++) {
        cin >> candles[i];
    }

    int result = birthdayCakeCandles(candles);
    cout << result << endl;

    return 0;
}
