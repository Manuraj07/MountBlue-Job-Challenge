#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> largestPermutation(int k, vector<int> arr) {
    int n = arr.size();
    unordered_map<int, int> index;
    
    for (int i = 0; i < n; i++) {
        index[arr[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        if (k == 0) {
            break;
        }

        if (arr[i] != n - i) {
            int current = arr[i];
            int maximum = n - i;
            int currentIndex = index[current];
            int maximumIndex = index[maximum];
            
            swap(arr[i], arr[maximumIndex]);
            index[current] = maximumIndex;
            index[maximum] = currentIndex;
            
            k--;
        }
    }
    
    return arr;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = largestPermutation(k, arr);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
