#include <iostream>
#include <cmath>

using namespace std;

int squares(int a, int b) {
    int count = 0;

    // Calculate the square root of the lower and upper bounds
    int sqrt_a = ceil(sqrt(a));
    int sqrt_b = floor(sqrt(b));

    // Count the number of square integers in the range
    count = max(0, sqrt_b - sqrt_a + 1);

    return count;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b; // Starting and ending integers
        cin >> a >> b;

        int result = squares(a, b);
        cout << result << endl;
    }

    return 0;
}
