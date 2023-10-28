#include <iostream>
#include <vector>

using namespace std;

unsigned int flippingBits(unsigned int n) {
    return ~n; // Bitwise NOT operation to flip all the bits
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        unsigned int n;
        cin >> n;

        unsigned int result = flippingBits(n);
        cout << result << endl;
    }

    return 0;
}
