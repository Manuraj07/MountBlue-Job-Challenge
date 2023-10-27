#include <iostream>
using namespace std;

int main() {
    int V, n;
    cin >> V >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num == V) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
