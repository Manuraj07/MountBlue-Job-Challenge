#include <iostream>

using namespace std;

int pageCount(int n, int p) {
    // Calculate the number of pages to turn from the beginning
    int fromStart = p / 2;

    // Calculate the number of pages to turn from the end
    int fromEnd = (n / 2) - (p / 2);

    // Return the minimum of the two values
    return min(fromStart, fromEnd);
}

int main() {
    int n, p;
    cin >> n >> p;

    int result = pageCount(n, p);
    cout << result << endl;

    return 0;
}
