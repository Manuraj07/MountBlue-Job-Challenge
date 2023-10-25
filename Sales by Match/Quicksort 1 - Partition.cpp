#include <iostream>
#include <vector>

using namespace std;

void quickSortPartition(vector<int>& arr, int pivot) {
    int n = arr.size();
    int left = 0, right = n - 1;
    
    for (int i = 0; i <= right; ) {
        if (arr[i] < pivot) {
            swap(arr[i], arr[left]);
            i++;
            left++;
        } else if (arr[i] > pivot) {
            swap(arr[i], arr[right]);
            right--;
        } else {
            i++;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pivot = arr[0];
    quickSortPartition(arr, pivot);

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << " ";
        }
    }

    return 0;
}
